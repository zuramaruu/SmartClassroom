uint32_t rcTmr;
uint32_t stTmr;

uint8_t delays;

void startMotion() {
  if (millis() - rcTmr >= 30) {

    if (delays == 0) {
      int readMotion = digitalRead(RCWL);
      //  if ((readMotion > 0) && (FLAG == 0)) {
      //    /* "Motion Detected" */
      //    FLAG = 1;
      if (readMotion && ~(relayState[0] == 2)) {
        FLAG = 1;
      }
    }

    rcTmr = millis();
  }

  if (millis() - stTmr >= 1000) {
    delays = delays - 1;

    if (delays < 0) {
      delays = 0;
    }

    if (relayState[0] == 2) delays = 10;

    stTmr = millis();
  }

  allString[0] = "RCWL" + String("#") + String(FLAG) + String("#");
  //  Serial.println("Motion = " + String(readMotion));
}
