const int ledpin=13;
const int flamepin=A0;
const int buzpin=11;
const int threshold=750;// sets threshold value for flame sensor
int flamesensvalue=0; // initialize flamesensor reading
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(flamepin,INPUT);
pinMode(buzpin,OUTPUT);
}
void loop() {
flamesensvalue=analogRead(flamepin); // reads analog data from flame sensor
if (flamesensvalue<=threshold) { // compares reading from flame sensor with the threshold value
digitalWrite(ledpin,LOW); //turns led off led and buzzer
noTone(buzpin);//stops program for 1 second
Serial.print("Gas Sensor Value: ");
Serial.println (flamesensvalue); // Print value to Serial Monitor
delay(1000); // Delay for readability
}
else{
digitalWrite(ledpin,HIGH); //turns on led and buzzer
tone(buzpin,10);
delay(1000); 
Serial.print("Gas Sensor Value: ");
Serial.println (flamesensvalue); // Print value to Serial Monitor
delay(1000); 
}
}
