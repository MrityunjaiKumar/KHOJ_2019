void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(13, OUTPUT); // making 13 pin for led as output
  //int a=1;
  //
  //if (a==1){
  //    Serial.println("value of a =1");
  //    }else{
  //
  //        Serial.println("value of a is not 1");
  //        }
  //


}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr_value = analogRead(A0);
  // assuming ldr is connected to A0
  Serial.println(ldr_value);
  int threshold_value = 500; //random right now


    // if else block content might be needed to flipped
  if (ldr_value < threshold_value ) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
