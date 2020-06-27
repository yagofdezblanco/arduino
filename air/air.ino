int AIR = 11;
char ESTADO = '0';

void setup() {
  Serial.begin(9600);        //comunicacion
  pinMode(AIR, OUTPUT);       //aire
}

void loop() {
  if (Serial.available()>0) {
    ESTADO = Serial.read();
    if (ESTADO == '1') {
       analogWrite(AIR, 254); 
       delay(100000);  
    } else {
       analogWrite(AIR, 0);
       delay(100000);
    }
  }
 

}
