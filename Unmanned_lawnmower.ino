int cntrr = 6;
int dirr = 8;
int brkr = 10;
int cntrl = 5;
int dirl = 7;
int brkl = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(cntrr, OUTPUT);
  pinMode(dirr, OUTPUT);
  pinMode(brkr, OUTPUT);
  pinMode(cntrl, OUTPUT);
  pinMode(dirl, OUTPUT);
  pinMode(brkl, OUTPUT);
  digitalWrite(brkr, LOW);
  digitalWrite(brkl, LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  forward(50);
  delay(3000);
  backward(80);
//  delay(3000);
//  turnright(60);
//  delay(3000);
//  turnleft(70);
//  delay(3000);
//  Stop();
//  delay(5000);






}




void forward(int s) {
  digitalWrite(brkr, LOW);
  digitalWrite(brkl, LOW);
  analogWrite(cntrr, s);
  analogWrite(cntrl, s);
  digitalWrite(dirr, HIGH);
  digitalWrite(dirl, HIGH);
  Serial.println("forward ever");
}
 
void backward(int s) {
  digitalWrite(brkr, LOW);
  digitalWrite(brkl, LOW);
  analogWrite(cntrr, s);
  analogWrite(cntrl, s);
//  digitalWrite(dirr, HIGH);
//  digitalWrite(dirl, HIGH);
  digitalWrite(dirr, LOW);
  digitalWrite(dirl, LOW);
  Serial.println("backward never");
}

void turnright(int s) {
  digitalWrite(brkr, LOW);
  digitalWrite(brkl, LOW);
  analogWrite(cntrr, 0);
  analogWrite(cntrl, s);
  digitalWrite(dirr, HIGH);
  digitalWrite(dirl, HIGH);
  Serial.println("the right way");
}

void turnleft(int s) {
  digitalWrite(brkr, LOW);
  digitalWrite(brkl, LOW);
  analogWrite(cntrr, s);
  analogWrite(cntrl, 0);
  digitalWrite(dirr, HIGH);
  digitalWrite(dirl, HIGH);
  Serial.println("we have left that position");
}

void Stop() {
  digitalWrite(brkr, HIGH);
  digitalWrite(brkl, HIGH);
  analogWrite(cntrr, 0);
  analogWrite(cntrl, 0);
}
