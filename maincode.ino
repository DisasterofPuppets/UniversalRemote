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

else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 2
  delay(100);
  }

else if(analogRead(sw) == 340){  
  mySender.send(NEC,/*codehere*/,32);     // 3
  delay(100);
  }

  else if(analogRead(sw) == 254){  
  mySender.send(NEC,/*codehere*/,32);     // 4
  delay(100);
  }

else if(analogRead(sw) == 203){  
  mySender.send(NEC,/*codehere*/,32);     // 5
  delay(100);
  }

else if(analogRead(sw) == 169){  
  mySender.send(NEC,/*codehere*/,32);     // 6
  delay(100);
  }

  else if(analogRead(sw) == 144){  
  mySender.send(NEC,/*codehere*/,32);     // 7
  delay(100);
  }

    else if(analogRead(sw) == 126){  
  mySender.send(NEC,/*codehere*/,32);     // 8
  delay(100);
  }

//wiring issue here!!!!!

  else if(analogRead(sw) == ){  
  mySender.send(NEC,/*codehere*/,32);     // Direction Up
  delay(100);
  }

  else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Volume Up
  delay(100);
  }

  else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Channel Up
  delay(100);
  }

    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Direction LEft
  delay(100);
  }
    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // OK
  delay(100);
  }

    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Direction Right
  delay(100);
  }

    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Volume Down
  delay(100);
  }

    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Direction Down
  delay(100);
  }
  
    else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // Channel Down
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 9
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 10
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 11
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 12
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 13
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 14
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 15
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 16
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 17
  delay(100);
  }
      else if(analogRead(sw) == 501){  
  mySender.send(NEC,/*codehere*/,32);     // 18
  delay(100);
  }
  

/*
copy these to their rightful places
else if(analogRead(sw) == 299){  
  mySender.send(NEC,0x77E16080,32);     // RIGHT
  delay(100);
  }




else if(analogRead(sw) == 344){  
  mySender.send(NEC,0x77E19080,32);      // LEFT
  delay(100);
  }



else if(analogRead(sw) == 320){  
  mySender.send(NEC,0x77E13A80,32);       // OK
  delay(100);
  }


else if(analogRead(sw) == 371){  
  mySender.send(NEC,0x19B51AE,32);  // VOLUME UP
  delay(100);
  }

else if(analogRead(sw) == 281){  
  mySender.send(NEC,0x19B11EE,32);  // VOLUME DOWN
  delay(100);
  }


else if(analogRead(sw) == 265){  
  mySender.send(NEC,0xFDB04F,32);  // MUTE not yet known
  delay(100);
  }

  else if(analogRead(sw) >250 && analogRead(sw) <251){  
  mySender.send(NEC,0x19B11EE,32);        // DOWN
  delay(100);
  }

else if(analogRead(sw) == 237){  
  mySender.send(NEC,0xA7E1A480,32);        // RRW
  delay(100);
  }

else if(analogRead(sw) == 226 ){  
  mySender.send(NEC,0xA7E13880,32);        // RW
  delay(100);
  }

else if(analogRead(sw) == 215){  
  mySender.send(NEC,0x77E1FA80,32);        // PLAY/PAUSE
  delay(100);
  }

else if(analogRead(sw) == 206){  
  mySender.send(NEC,0xA7E15880,32);        // FF
  delay(100);
  }
else if(analogRead(sw) == 197){  
  mySender.send(NEC,0xA7E1C480,32);       // FFF
  delay(100);
  }

*/

delay(500);


}
