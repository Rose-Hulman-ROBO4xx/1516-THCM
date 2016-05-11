boolean isSnake = false;
boolean isElephant = false;
boolean isFrog = false;
boolean isTiny = false;
int animalSpeed = 0;

// Define IO pins.
const int ledPinL1 = 30;
const int ledPinL2 = 29;
const int ledPinL3 = 28;
const int ledPinL4 = 27;
const int ledPinL5 = 26;
const int ledPinL6 = 25;
const int ledPinL7 = 24;
const int ledPinL8 = 23;
const int ledPinLOff = 31;
const int ledPinR1 = 46;
const int ledPinR2 = 45;
const int ledPinR3 = 44;
const int ledPinR4 = 43;
const int ledPinR5 = 42;
const int ledPinR6 = 41;
const int ledPinR7 = 40;
const int ledPinR8 = 39;
const int ledPinROff = 47;
const int signalPin = 2;
const int outputPin = 3;
byte segmentClock = 10;
byte segmentLatch = 8;
byte segmentData = 9;

void setup() {
  // Opens the serial port. The number here and the number in line 9 of the JavaScript code should be the same.
  // Please do not change this number unless you know what you're doing and have a good reason.
  Serial.begin(9600);
  // Set pin modes.
  pinMode(ledPinL1, OUTPUT);
  pinMode(ledPinL2, OUTPUT);
  pinMode(ledPinL3, OUTPUT);
  pinMode(ledPinL4, OUTPUT);
  pinMode(ledPinL5, OUTPUT);
  pinMode(ledPinL6, OUTPUT);
  pinMode(ledPinL7, OUTPUT);
  pinMode(ledPinL8, OUTPUT);
  pinMode(ledPinLOff, OUTPUT);
  pinMode(ledPinR1, OUTPUT);
  pinMode(ledPinR2, OUTPUT);
  pinMode(ledPinR3, OUTPUT);
  pinMode(ledPinR4, OUTPUT);
  pinMode(ledPinR5, OUTPUT);
  pinMode(ledPinR6, OUTPUT);
  pinMode(ledPinR7, OUTPUT);
  pinMode(ledPinR8, OUTPUT);
  pinMode(ledPinROff, OUTPUT);
  pinMode(outputPin, OUTPUT);
  pinMode(signalPin, INPUT);

  digitalWrite(ledPinLOff, HIGH);
  digitalWrite(ledPinROff, HIGH);
  
  pinMode(segmentClock, OUTPUT);
  pinMode(segmentData, OUTPUT);
  pinMode(segmentLatch, OUTPUT);

  digitalWrite(segmentClock, LOW);
  digitalWrite(segmentData, LOW);
  digitalWrite(segmentLatch, LOW);
}

void firstPattern(int delayTime) {
  digitalWrite(ledPinL1, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR2, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL3, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR4, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL5, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR6, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL7, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR8, HIGH);
  delay(delayTime);
  digitalWrite(outputPin, HIGH);
  // Wait until the animal finishes running.
  delay(delayTime * 8);
}

void snakePattern(int delayTime) {
  digitalWrite(ledPinL1, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL2, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR2, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR3, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR4, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL4, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL5, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL6, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR6, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR7, HIGH);
  delay(delayTime);
  digitalWrite(ledPinR8, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL8, HIGH);
  delay(delayTime);
  digitalWrite(outputPin, HIGH);
  delay(delayTime * 12);
}

void elephantPattern(int delayTime){
  digitalWrite(ledPinL1, HIGH);
  digitalWrite(ledPinL2, HIGH);
  digitalWrite(ledPinR1, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPinR2, HIGH);
  digitalWrite(ledPinR3, HIGH);
  digitalWrite(ledPinR4, HIGH);
  digitalWrite(ledPinL3, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPinL4, HIGH);
  digitalWrite(ledPinL5, HIGH);
  digitalWrite(ledPinL6, HIGH);
  digitalWrite(ledPinR5, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPinR6, HIGH);
  digitalWrite(ledPinR7, HIGH);
  digitalWrite(ledPinR8, HIGH);
  digitalWrite(ledPinL7, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPinL8, HIGH);
  digitalWrite(outputPin, HIGH);
  delay(delayTime * 8);  
}

void fastPattern(int delayTime) {
  digitalWrite(ledPinL1, HIGH);
  digitalWrite(ledPinR1, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL2, HIGH);
  digitalWrite(ledPinR2, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL3, HIGH);
  digitalWrite(ledPinR3, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL4, HIGH);
  digitalWrite(ledPinR4, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL5, HIGH);
  digitalWrite(ledPinR5, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL6, HIGH);
  digitalWrite(ledPinR6, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL7, HIGH);
  digitalWrite(ledPinR7, HIGH);
  delay(delayTime);
  digitalWrite(ledPinL8, HIGH);
  digitalWrite(ledPinR8, HIGH);
  delay(delayTime);
  digitalWrite(outputPin, HIGH);
  // Wait until the animal finishes running.
  delay(delayTime * 8);
}

void frogPattern(int delayTime){
  digitalWrite(ledPinL1, HIGH);
  delay(delayTime*2);
  digitalWrite(ledPinR3, HIGH);
  delay(delayTime*2);
  digitalWrite(ledPinL5, HIGH);
  delay(delayTime*2);  
  digitalWrite(ledPinR7, HIGH);
  delay(delayTime*2);
  digitalWrite(outputPin, HIGH);
  // Wait until the animal finishes running.
  delay(delayTime * 8);
}

void tinyPattern(int delayTime){
  digitalWrite(ledPinL1, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR1, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR2, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL2, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL3, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR3, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR4, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL4, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL5, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR5, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR6, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL6, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL7, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR7, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinR8, HIGH);
  delay(delayTime/2);
  digitalWrite(ledPinL8, HIGH);
  delay(delayTime/2);
  digitalWrite(outputPin, HIGH);
  delay(delayTime * 8);
}

void turnAllPinsOff() {
  digitalWrite(ledPinL1, LOW);
  digitalWrite(ledPinR1, LOW);
  digitalWrite(ledPinL2, LOW);
  digitalWrite(ledPinR2, LOW);
  digitalWrite(ledPinL3, LOW);
  digitalWrite(ledPinR3, LOW);
  digitalWrite(ledPinL4, LOW);
  digitalWrite(ledPinR4, LOW);
  digitalWrite(ledPinL5, LOW);
  digitalWrite(ledPinR5, LOW);
  digitalWrite(ledPinL6, LOW);
  digitalWrite(ledPinR6, LOW);
  digitalWrite(ledPinL7, LOW);
  digitalWrite(ledPinR7, LOW);
  digitalWrite(ledPinL8, LOW);
  digitalWrite(ledPinR8, LOW);
  digitalWrite(outputPin, LOW);
  digitalWrite(ledPinLOff, HIGH);
  digitalWrite(ledPinROff, HIGH);
}

int delayTimeCalculator(int speedInputted) {
  float tileLength = 12.0;
  // 15 and 264 are magic numbers that come from converting from miles per hour to inches per second.
  float intermediateDelayTime = (15.0 * tileLength) / (264 * (float)speedInputted);
  return (1000 * intermediateDelayTime);
}

void loop() {
  // Sets the animal speed whenever new information is received from the serial port.
  while (Serial.available() > 0) {
    animalSpeed = Serial.parseInt();
  }

  // Checks to see if the breaker has been tripped.
  int signalState = digitalRead(signalPin);
  // If the breaker has been tripped and an animal was selected, light up the track!
  if ((animalSpeed > 0) && (signalState == HIGH)) {
    if (animalSpeed > 500) {
      isTiny = true;
      animalSpeed = animalSpeed - 500;
    }
    if (animalSpeed > 400) {
      isFrog = true;
      animalSpeed = animalSpeed - 400;
    }
    if (animalSpeed > 300) {
      isElephant = true;
      animalSpeed = animalSpeed - 300;
    }
    if (animalSpeed > 200) {
      isSnake = true;
      animalSpeed = animalSpeed - 200;
    }

    int delayTime = delayTimeCalculator(animalSpeed);
    if (animalSpeed > 99){
      animalSpeed = 99;
    }
    showNumber(animalSpeed, false);
    // Light up the lights
    digitalWrite(ledPinLOff, LOW);
    digitalWrite(ledPinROff, LOW);
    if (isTiny) {
      tinyPattern(delayTime);
      isTiny = false;
    } else if (isFrog) {
      frogPattern(delayTime);
      isFrog = false;
    } else if (isElephant) {
      elephantPattern(delayTime);
      isElephant = false;
    } else if (isSnake) {
      snakePattern(delayTime);
      isSnake = false;
    } else if (animalSpeed > 30) {
      fastPattern(delayTime);
    } else {
      firstPattern(delayTime);
    }
    // Wait five seconds, then turn everything off
    delay(5000);
    animalSpeed = 0;
    turnAllPinsOff();
    showNumber(0, true);
  }
}

void showNumber(float value, bool blankDisplay)
{
  int number = abs(value); //Remove negative signs and any decimals

  //Serial.print("number: ");
  //Serial.println(number);

  if (blankDisplay) {
    postNumber(' ',false);
    postNumber(' ',false);
  } else {
    for (byte x = 0 ; x < 2 ; x++)
    {
      int remainder = number % 10;
  
      postNumber(remainder, false);
  
      number /= 10;
    }   
  }


  //Latch the current segment data
  digitalWrite(segmentLatch, LOW);
  digitalWrite(segmentLatch, HIGH); //Register moves storage register on the rising edge of RCK
}

void postNumber(byte number, boolean decimal)
{
  //    -  A
  //   / / F/B
  //    -  G
  //   / / E/C
  //    -. D/DP

#define a  1<<0
#define b  1<<6
#define c  1<<5
#define d  1<<4
#define e  1<<3
#define f  1<<1
#define g  1<<2
#define dp 1<<7

  byte segments;

  switch (number)
  {
    case 1: segments = b | c; break;
    case 2: segments = a | b | d | e | g; break;
    case 3: segments = a | b | c | d | g; break;
    case 4: segments = f | g | b | c; break;
    case 5: segments = a | f | g | c | d; break;
    case 6: segments = a | f | g | e | c | d; break;
    case 7: segments = a | b | c; break;
    case 8: segments = a | b | c | d | e | f | g; break;
    case 9: segments = a | b | c | d | f | g; break;
    case 0: segments = a | b | c | d | e | f; break;
    case ' ': segments = 0; break;
    case 'c': segments = g | e | d; break;
    case '-': segments = g; break;
  }

  if (decimal) segments |= dp;

  //Clock these bits out to the drivers
  for (byte x = 0 ; x < 8 ; x++)
  {
    digitalWrite(segmentClock, LOW);
    digitalWrite(segmentData, segments & 1 << (7 - x));
    digitalWrite(segmentClock, HIGH); //Data transfers to the register on the rising edge of SRCK
  }
}
