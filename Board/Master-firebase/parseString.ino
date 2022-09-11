String parseString(String data, char separator[], int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length() - 1;
  for (int i = 0; i <= maxIndex && found <= index; i++) {
    if (data.charAt(i) == separator[0] || i == maxIndex) {
      found++;
      strIndex[0] = strIndex[1] + 1;
      strIndex[1] = (i == maxIndex) ? i + 1 : i;
    }
  }
  return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}



//void serialSend() {
//  if ( Serial.available() > 1 ) {
//    String Read =  Serial.readString();
//    String _read = parseString(Read, "#", 0);
//    if (_read == "t") {
//      String __read = parseString(Read, "#", 1);
//      callback_key = String(__read);
//    }
//  }
//}
