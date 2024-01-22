int var;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  var = digitalRead(8);
  if(var == 0){
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(7, 0);
    delay (2000);

    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(7, 0);
    delay (2000);

    digitalWrite(13, 0);
    digitalWrite(12, 0);
    digitalWrite(7, 1);
    delay (2000);
  }else{
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    digitalWrite(7, 0);
    
  }

}
