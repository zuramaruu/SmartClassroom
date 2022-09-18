void startMotion() {
  int readMotion = digitalRead(RCWL);
  //  if ((readMotion > 0) && (FLAG == 0)) {
  //    /* "Motion Detected" */
  //    FLAG = 1;
  //  }
  //  if (FLAG) {
  //    delay(10);
  //    //    dimmer.setState(ON);
  //  }

  if (readMotion) {
    delay(10);
    dimmer.setState(ON);
  }
  else {
    delay(10);
    dimmer.setState(OFF);
  }
  //  if (readMotion == 0) {
  //    /* "No Motion" */
  //    FLAG = 0;
  //  }
  allString[0] = "RCWL" + String("#") + String(readMotion) + String("#");
  //  Serial.println("Motion = " + String(readMotion));
}
