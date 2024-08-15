int i=0;
void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  digitalWrite(8,1);
}

void loop() {
  
  int x = analogRead(A0);
  Serial.println(x);
  if(x>100 && i == 1){ //yanili ikem
    digitalWrite(8, 1); //sondur
    delay(200);
    i = 0;
  }else if(x>100 && i == 0){ //sonulu iken
    digitalWrite(8, 0); //yandir
    delay(200);
    i=1;
  }
  delay(10);
}
