#define an1 2
#define an2 3
#define mo1 4
#define mo2 5
String Z;

void setup() 
{
  pinMode(an1, OUTPUT);
  pinMode(an2, OUTPUT);
  pinMode(mo1, OUTPUT);
  pinMode(mo2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) {
    Z = Serial.readString();
  }

  switch (Z[0]) {
    case 'A':
      forward();
      break;
    case 'B':
      revarse();
      break;
    case 'D':
      right();
      break;
    case 'C':
      lift();
      break;
    default:
      break;
  }
}

void forward(){
  digitalWrite(an1, HIGH);
  digitalWrite(an2, LOW);
  digitalWrite(mo1, HIGH);
  digitalWrite(mo2, LOW);
}

void revarse(){
  digitalWrite(an1, LOW);
  digitalWrite(an2, HIGH);
  digitalWrite(mo1, LOW);
  digitalWrite(mo2, HIGH);
}

void right(){
  digitalWrite(an1, HIGH);
  digitalWrite(an2, LOW);
  digitalWrite(mo1, LOW);
  digitalWrite(mo2, HIGH);
}

void lift(){
  digitalWrite(an1, LOW);
  digitalWrite(an2, HIGH);
  digitalWrite(mo1, HIGH);
  digitalWrite(mo2, LOW);
}
