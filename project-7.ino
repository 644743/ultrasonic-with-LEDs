// c++ code
//
int trig= 11;
int echo= 10;
int led1= 1;
int led2= 2;
int led3= 3;
int led4= 4;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);

  distance = duration * 0.034 / 2;

  
  Serial.print(distance);

  if (distance < 50) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  } else if (distance < 150) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
     
  } else if (distance < 200) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 0);
     
  } else if (distance < 250){
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
}
}