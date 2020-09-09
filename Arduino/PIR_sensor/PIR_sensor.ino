
int Status= 12; //Pin D6
int sensor = 13; //Pin D7
int state = 0 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor, INPUT);   // declare sensor as input
  pinMode(Status, OUTPUT);  // declare LED as output
  
}

void loop() {
  // put your main code here, to run repeatedly:


   state = digitalRead(sensor);
    if(state == HIGH) {
      digitalWrite (Status, HIGH);
      Serial.print("\n Motion detected!");
      delay(1000);
    }
    else {
      digitalWrite (Status, LOW);
      Serial.print("\n Motion absent!");
      delay(1000);
      }
}
