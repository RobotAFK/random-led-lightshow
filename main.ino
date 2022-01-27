//Initialize LED variables
int yellow=10;
int green=6;
int red=2;
int white=4;
int blue=8;

// Initialize random number variable
long randNumber;

void setup()
{
//Initialize pins to be read as output
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(white,OUTPUT);
pinMode(blue,OUTPUT);
// Starting the Serial Monitor
Serial.begin(1);
randomSeed(analogRead(0));
}

void loop()
{
// Picks a random number valued from 1-4  
randNumber = random(1,1+4);
// Starts writing to the Serial Monitor
Serial.println(randNumber);

// How long it will take until it grabs another random number  
delay(700);
  
// If the number equals 1
  if(randNumber == 1){
    digitalWrite(yellow, HIGH);
    delay(250);
    digitalWrite(green, HIGH);
    delay(250);
    digitalWrite(red, HIGH);
    delay(250);
    digitalWrite(white, HIGH);
    delay(250);
    digitalWrite(blue, HIGH);
    delay(250);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(blue, LOW);
    delay(150);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(white, HIGH);
    digitalWrite(blue, HIGH);
    delay(150);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(blue, LOW);
    delay(150);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(white, HIGH);
    digitalWrite(blue, HIGH);
    delay(150);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    digitalWrite(blue, LOW);
    delay(150);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(white, HIGH);
    digitalWrite(blue, HIGH);
    delay(150);
    digitalWrite(yellow, LOW);
    delay(250);
    digitalWrite(green, LOW);
    delay(250);
    digitalWrite(red, LOW);
    delay(250);
    digitalWrite(white, LOW);
    delay(250);
    digitalWrite(blue, LOW);
    delay(250);
  }
// If the number equals 2
  else if(randNumber == 2){
   digitalWrite(yellow,HIGH);
   delay(500);
   digitalWrite(yellow,LOW);
   delay(500);
   digitalWrite(green,HIGH);
   delay(500);
   digitalWrite(green,LOW);
   delay(500);
   digitalWrite(red,HIGH);
   delay(500);
   digitalWrite(red,LOW);
   delay(500);
   digitalWrite(white,HIGH);
   delay(500);
   digitalWrite(white,LOW);
   delay(500);
   digitalWrite(blue,HIGH);
   delay(500);
   digitalWrite(blue,LOW);
   delay(500);
   digitalWrite(blue,HIGH);
   delay(500);
   digitalWrite(blue,LOW);
   delay(500);
   digitalWrite(white,HIGH);
   delay(500);
   digitalWrite(white,LOW);
   delay(500);
   digitalWrite(red,HIGH);
   delay(500);
   digitalWrite(red,LOW);
   delay(500);
   digitalWrite(green,HIGH);
   delay(500);
   digitalWrite(green,LOW);
   delay(500);
   digitalWrite(yellow,HIGH);
   delay(500);
   digitalWrite(yellow,LOW);
   delay(500);
  }
// If the number equals 3
  else if(randNumber == 3) {
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    delay(750);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    delay(750);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    delay(750);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);
    delay(750);
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    delay(750);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    delay(750);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);
    delay(750);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    delay(750);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    delay(750);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    delay(750);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    delay(750);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    delay(750);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);
    delay(750);
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    delay(750);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    delay(750);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);
    delay(750);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    delay(750);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    delay(750);
  }
// If the number equals 4
  else if(randNumber == 4) {
    digitalWrite(blue, HIGH);
    delay(750);
    digitalWrite(white, HIGH);
    delay(750);
    digitalWrite(red, HIGH);
    delay(750);
    digitalWrite(green, HIGH);
    delay(750);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    delay(250);
  }
}
