int incomingByte = 0;
int led_green = 2;
int led_red = 6;


int A = 65;
int B = 66;
int C = 67;
int D = 68;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  

}


void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
      
      incomingByte = Serial.read();
      //Serial.println(incomingByte);

      if (incomingByte == A) {
        digitalWrite(led_green, HIGH); 
      }
      if (incomingByte == B) {
        digitalWrite(led_green, LOW);
      }
      if (incomingByte == C) {
        digitalWrite(led_red, HIGH);
      }
      if (incomingByte == D) {
        digitalWrite(led_red, LOW);
      }
      
  }
}
