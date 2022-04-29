// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT) ; 
  pinMode(2,OUTPUT);
  Serial.println("enter number ");
}

void loop()
{
  while(Serial.available()!=0)
  {
    
    int counter= Serial.parseInt();
    Serial.println(counter);
    
    if(counter <100)
    {
      digitalWrite(13, HIGH);
     // delay(1000); // Wait for 1000 millisecond(s)
    }
    else if(counter >=101 && counter <= 200)
    {
      
      digitalWrite(8, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
    }
    else if(counter >200)  
    {
    digitalWrite(2, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
    }
  }
}
  