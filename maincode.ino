#include <IRLibSendBase.h>
#include <IRLib_P01_NEC.h>     
#include <IRLibCombo.h>

#define sw A1 //name for analog pin A1
#define ledPin 2
// Pin 3 for IR sender


IRsend mySender; //connected to pin 3

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT); digitalWrite(ledPin,LOW); //setting led1 pin LOW ie LED will be off according to our circuit

}

void loop() 
{
  Serial.println(analogRead(sw)); // reading and printing the values from analog pin A1

if(analogRead(sw) == 1023){  
 mySender.send(NEC,0xFDB04F,32);//NEC TV power button
  delay(100);
  }


/*
if(analogRead(sw) == ???){  
  mySender.send(NEC,0x77E15080,32);        
  digitalWrite(ledPin,HIGH);        // UP
  delay(100);
  digitalWrite(ledPin,LOW);
  }
*/


if(analogRead(sw) == 299){  
  mySender.send(NEC,0x77E16080,32);        
  digitalWrite(ledPin,HIGH);        // RIGHT
  delay(100);
  digitalWrite(ledPin,LOW);
  }




else if(analogRead(sw) == 344){  
  mySender.send(NEC,0x77E19080,32);        
  digitalWrite(ledPin,HIGH);        // LEFT
  delay(100);
  digitalWrite(ledPin,LOW);
  }



else if(analogRead(sw) == 320){  
  mySender.send(NEC,0x77E13A80,32);        
  digitalWrite(ledPin,HIGH);        // OK
  delay(100);
  digitalWrite(ledPin,LOW);
  }


else if(analogRead(sw) == 371){  
  mySender.send(NEC,0x19B51AE,32);        
  digitalWrite(ledPin,HIGH);        // VOLUME UP
  delay(100);
  digitalWrite(ledPin,LOW);
  }

else if(analogRead(sw) == 281){  
  mySender.send(NEC,0x19B11EE,32);        
  digitalWrite(ledPin,HIGH);        // VOLUME DOWN
  delay(100);
  digitalWrite(ledPin,LOW);
  }


else if(analogRead(sw) == 265){  
  mySender.send(NEC,0xFDB04F,32);        
  digitalWrite(ledPin,HIGH);      // MUTE not yet known
  delay(100);
  digitalWrite(ledPin,LOW);
  }

  else if(analogRead(sw) >250 && analogRead(sw) <251){  
  mySender.send(NEC,0x19B11EE,32);        // DOWN
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }

else if(analogRead(sw) == 237){  
  mySender.send(NEC,0xA7E1A480,32);        // RRW
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }

else if(analogRead(sw) == 226 ){  
  mySender.send(NEC,0xA7E13880,32);        // RW
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }

else if(analogRead(sw) == 215){  
  mySender.send(NEC,0x77E1FA80,32);        // PLAY/PAUSE
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }

else if(analogRead(sw) == 206){  
  mySender.send(NEC,0xA7E15880,32);        // FF
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }
else if(analogRead(sw) == 197){  
  mySender.send(NEC,0xA7E1C480,32);       // FFF
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  }
    
delay(500);


}
