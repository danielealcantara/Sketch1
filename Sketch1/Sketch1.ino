/*
 Name:		Sketch1.ino
 Created:	3/29/2016 7:56:41 AM
 Author:	Daniele
*/

// the setup function runs once when you press reset or power the board
void setup() {


	pinMode(13,OUTPUT);
	Serial.begin(9600);

}

// the loop function runs over and over again until power down or reset
void loop() {


	
	char v = Serial.read();

	if (v == '1') digitalWrite(13, HIGH);
	if (v == 'A') digitalWrite(13,LOW);

	

	delay(1000);
  
}
