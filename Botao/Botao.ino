// DECLARAÇÃO DE VARIÁVEIS

const byte ledPin = 9;

const byte buttonPin = 2;

volatile byte state = LOW;

// FUNÇÃO SETUP ()


void setup(){
	Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(buttonPin) , blink1 , CHANGE);

}

//FUNÇÃO LOOP()

void loop(){
	digitalWrite(ledPin, state);
  
  	Serial.println(state);

}

//FUNÇÃO BLINK ()

void blink1()
{
  state = !state;
}