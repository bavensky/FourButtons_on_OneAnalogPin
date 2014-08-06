    /*******************************************************************************
     * Project  : Four button on One analogpin                                                     *
     * Compiler : Arduino 1.0.2                                                    *
     * Board    : Arduino Mega 2560                                                *
     * Shield   :                                                                  *
     * Module   :                                                                  *
     * Material : 4 button                                                         *
     *          : 1k ohm x 4
     * Author   : Bavensky :3                                                      *
     * E-Mail   : Aphirak_Sang-ngenchai@hotmail.com                                *
     * Date     : 27/07/2014 [dd/mm/yyyy]                                          *
    *******************************************************************************/  
  void setup() 
    {
      Serial.begin(9600);
    }
  
  void loop() 
  {
    int sensorValue = analogRead(A0);
    if(sensorValue > 500 && sensorValue < 600)        //  analogread 509
    {
       Serial.println("Button 1");  
    }
    else if(sensorValue > 600 && sensorValue < 700)    //  analogread 681
    {
       Serial.println("Button 2");
    }
    else if(sensorValue > 700 && sensorValue < 800)    //  analogread 767 
    {
       Serial.println("Button 3");
    }
    else if(sensorValue > 800 && sensorValue < 900)    //  analogread 818
    {
       Serial.println("Button 4");
    }
    else
    {
      Serial.println("No push");
    }  
    delay(2);
  }
