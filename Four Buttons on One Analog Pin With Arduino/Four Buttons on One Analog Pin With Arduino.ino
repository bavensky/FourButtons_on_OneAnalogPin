  void setup() 
  {
    Serial.begin(9600);
  }
  
  void loop() {
    int sensorValue = analogRead(A0);
    if(sensorValue > 500 && sensorValue < 600)        //  509
    {
       Serial.println("Button 1");  
    }
    else if(sensorValue > 600 && sensorValue < 700)    //  681
    {
       Serial.println("Button 2");
    }
    else if(sensorValue > 700 && sensorValue < 800)    //  767 
    {
       Serial.println("Button 3");
    }
    else if(sensorValue > 800 && sensorValue < 900)    //  818
    {
       Serial.println("Button 4");
    }
    else
    {
      Serial.println("No push");
    }  
    delay(50);
  }

