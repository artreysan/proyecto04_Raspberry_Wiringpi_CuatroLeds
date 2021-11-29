/*	Color	|  BCM	| PIN
 *	=====================
 *	Green 	| gpio19 | 24
 *	Blue	| gpio12 | 26
 *	Yellow	| gpio20 | 28
 *	Red	| gpio23 |  4
 * */

#include <wiringPi.h>
#define GREEN 24
#define BLUE 26
#define YELLOW 28
#define RED 4

int main(){
	wiringPiSetup();
	pinMode(GREEN, OUTPUT);
	pinMode(BLUE, OUTPUT);
	pinMode(YELLOW, OUTPUT);
	pinMode(RED, OUTPUT);
	int i=0;
	while(++i,i<4){
		digitalWrite(GREEN,HIGH);
		delay(500);
		digitalWrite(GREEN,LOW);
		digitalWrite(BLUE,HIGH);
		delay(500);
		digitalWrite(BLUE,LOW);
		digitalWrite(YELLOW,HIGH);
		delay(500);
		digitalWrite(YELLOW,LOW);
		digitalWrite(RED,HIGH);
		delay(500);
		digitalWrite(RED,LOW);
	
	}

	digitalWrite(BLUE,LOW);
	digitalWrite(GREEN,LOW);
	digitalWrite(YELLOW,LOW);
	digitalWrite(RED,LOW);

	pinMode(GREEN, INPUT);
	pinMode(BLUE, INPUT);
	pinMode(YELLOW, INPUT);
	pinMode(RED, INPUT);

	return 0;
}
