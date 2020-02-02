// Play of light

int time = 30;
int pin;

void setup() {
  for (pin = 8; pin <= 12; pin++)
  {
    pinMode(pin, OUTPUT);
  }

}

// Game one
void game_one(){
  for (pin = 8; pin <= 12; pin++)
  {
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    delay(time);
  }
}

// Game two

void game_two(){
  for (pin = 12; pin >= 8; pin--)
  {
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    delay(time);
  }
}

// Bucle

void loop(){
  game_one();
  game_two();
}



  
