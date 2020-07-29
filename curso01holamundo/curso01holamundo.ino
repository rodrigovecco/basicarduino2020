int otroPinLed=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(otroPinLed,OUTPUT);
  pinMode(7,OUTPUT);
  luz(1000);
}

void loop() {
  luz(100);

}
void luz(int tiempo){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(tiempo);
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(otroPinLed,HIGH);
  delay(tiempo);
  digitalWrite(otroPinLed,LOW);
  digitalWrite(7,HIGH);
  delay(tiempo);
  digitalWrite(7,LOW);
  delay(tiempo);
  
}
int sumar(int a, int b){
  int c;
  c=a+b;
  return c;
}
