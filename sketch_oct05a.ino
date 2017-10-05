#define DCIN 30
#define PBOUT 2
#define PBOUT2 3
boolean DCIN_val = LOW;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(DCIN,INPUT_PULLUP);
  pinMode(PBOUT,OUTPUT);  
  pinMode(PBOUT2,OUTPUT);

  digitalWrite(PBOUT,HIGH);
  digitalWrite(PBOUT2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  DCIN_val=digitalRead(DCIN);

  /*if(DCIN_val==LOW)
  {
    digitalWrite(PBOUT,HIGH);
  }
  else
    digitalWrite(PBOUT,LOW);
  */
}
