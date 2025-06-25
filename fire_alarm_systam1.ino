// C++ code
//
float temp;
float vout;
float vout1;
int led=13;
int gas;
int piezo=7;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(led, OUTPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  vout=analogRead(A1);
  vout1=(vout/1023)*5000;
  temp=(vout1-500)/10;
  gas=analogRead(A0);
  if(temp>=80)
  {
    
  digitalWrite(led, HIGH);
  }
  else
  {
  digitalWrite(led, LOW);
  }
  if(gas>=100)
  {
   digitalWrite(piezo,HIGH);
  }
  else
  {
digitalWrite(piezo,LOW);
  }
Serial.print(" in degreeC=");
  Serial.print(" ");
  Serial.print(temp);
  Serial.print("/t");
  Serial.print("gas=");
  Serial.print(" ");
  Serial.print(gas);
  Serial.println();
  delay(1000);
  
}