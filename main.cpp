#include <IRremote.h>

const int RECV_PIN = 7;
const int MOTOR1 = 2;
const int MOTOR2 = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;
int sensorInput;
double temp;

double first_temp;

double getTemp () {
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024;
  temp = ((temp *5) - 0.5 ) * 100;
  return temp;
}

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop() {
  while (1) {
  	if (irrecv.decode(&results)){
      if (results.value==0XFFFFFFFF){
      	break;
      }
        irrecv.resume();
  	}
  }
  first_temp = getTemp();
  Serial.print("First Temp : ");
  Serial.print(first_temp);
  Serial.print("\n");
  double from = first_temp - 5.0;
  double to   = first_temp + 5.0;
  while (1) {
    double tmp = getTemp();
    if (tmp < from || tmp > to) {
    	break;
    }
  }
  digitalWrite(MOTOR1,HIGH);
  digitalWrite(MOTOR2,HIGH);
  delay(5000);
  digitalWrite(MOTOR1,LOW);
  digitalWrite(MOTOR2,LOW);
  delay(60 * 60 * 1000); // stop program

  
}