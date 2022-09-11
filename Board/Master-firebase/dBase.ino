void FirebaseInit() {
  config.api_key = API_KEY;
  /* Assign the user sign in credentials */
  auth.user.email = USER_EMAIL;
  auth.user.password = USER_PASSWORD;
  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;
  /* Assign the callback function for the long running token generation task */
  config.token_status_callback = tokenStatusCallback; // see addons/TokenHelper.h
  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);
}

void FirebaseHandler() {
  Firebase.RTDB.setString(&fbdo, F("/pzemA/voltage"), String(voltage[0])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemA/current"), String(current[0])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemA/energy"), String(energy[0])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemA/power"), String(power[0])) ? "ok" : fbdo.errorReason().c_str();

  Firebase.RTDB.setString(&fbdo, F("/pzemB/voltage"), String(voltage[1])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemB/current"), String(current[1])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemB/energy"), String(energy[1])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemB/power"), String(power[1])) ? "ok" : fbdo.errorReason().c_str();

  Firebase.RTDB.setString(&fbdo, F("/pzemC/voltage"), String(voltage[2])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemC/current"), String(current[2])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemC/energy"), String(energy[2])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/pzemC/power"), String(power[2])) ? "ok" : fbdo.errorReason().c_str();

  Firebase.RTDB.setString(&fbdo, F("/sensors/dimmer"), String(outVal)) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/sensors/temperature"), String(bme_val[0])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/sensors/humidity"), String(bme_val[1])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/sensors/rcwl"), String(FLAG)) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/sensors/rtc"), String("NaN")) ? "ok" : fbdo.errorReason().c_str();

  Firebase.RTDB.setString(&fbdo, F("/state/relay1"), String(stateRelay[0])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/state/relay2"), String(stateRelay[1])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/state/relay3"), String(stateRelay[2])) ? "ok" : fbdo.errorReason().c_str();
  Firebase.RTDB.setString(&fbdo, F("/state/relay4"), String(stateRelay[3])) ? "ok" : fbdo.errorReason().c_str();
}
