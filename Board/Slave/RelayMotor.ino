void mainControl() {
  if (relayState[0]) relaySatuOn();
  else relaySatuOff();
  if (relayState[1]) relayDuaOn();
  else relayDuaOff();
  if (relayState[2]) relayTigaOn();
  else relayTigaOff();

}

void relaySatuOn() {
  digitalWrite(RELAY_1, LOW);
}
void relayDuaOn() {
  digitalWrite(RELAY_2, LOW);
}
void relayTigaOn() {
  digitalWrite(RELAY_3, LOW);
}

void relaySatuOff() {
  digitalWrite(RELAY_1, HIGH);
}
void relayDuaOff() {
  digitalWrite(RELAY_2, HIGH);
}
void relayTigaOff() {
  digitalWrite(RELAY_3, HIGH);
}

void runMotorA() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, 255);
  delay(2000);
}

void runMotorB() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(ENA, 255);
  delay(2000);
}
