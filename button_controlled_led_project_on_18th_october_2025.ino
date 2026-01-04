int led_pin = 9;
int switch_pin = 7;
int ledstate = 0;
int oldstate = 0;
int newstate = 0;
int delay_time = 250;

int incre_button = 4;
int decre_button = 5;
int incre_state;
int decre_state;
int bright_level = 0;
int buzzpin = 6;


void setup() {
  // put your setup code here, to run once:
pinMode(led_pin, OUTPUT);
pinMode(switch_pin, INPUT);
pinMode(incre_button, INPUT);
pinMode(decre_button, INPUT);
pinMode(buzzpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

newstate = digitalRead(switch_pin);

Serial.print("The current display of the led is \t ");
Serial.print("oldstate is ");
Serial.print(oldstate);
Serial.print("\t ledstate is ");
Serial.print(ledstate);
Serial.print("\t newstate is ");
Serial.println(newstate);

if(oldstate == 0 && newstate == 1){
  if(ledstate == 0){
    digitalWrite(led_pin, HIGH);
    ledstate = 1;
  }
  else if(ledstate == 1){
  digitalWrite(led_pin, LOW);
  ledstate = 0;
}  

delay(delay_time);
}
oldstate = newstate;


incre_state = digitalRead(incre_button);
decre_state = digitalRead(decre_button);



if(incre_state == 1){
  bright_level = bright_level + 25;
  analogWrite(led_pin, bright_level);
  if(bright_level > 255){
    digitalWrite(buzzpin, HIGH);
    bright_level = 255;
  }
}
if(decre_state == 1){
  bright_level = bright_level - 25;
  analogWrite(led_pin, bright_level);
  if(bright_level < 0){
    digitalWrite(buzzpin, HIGH);
    bright_level = 0;
  }
}

Serial.print("The current level of the light brightness is: \t");
Serial.println(bright_level);



}
