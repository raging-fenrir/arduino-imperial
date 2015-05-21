#include <notes.h>

const int switchPin = 9;
const int piezo = 13;
int switchState = 0;

void setup() {     

pinMode(switchPin, INPUT);   
pinMode(piezo, OUTPUT);       

}

// the loop routine runs over and over again forever:
void loop() {
  switchState = digitalRead (switchPin);
  if (switchState == 1)
    {
      //tone(pin, note, duration)
      tone(piezo,LA3,Q); 
      delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
      tone(piezo,LA3,Q);
      delay(1+Q);
      tone(piezo,LA3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      
      tone(piezo,LA3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,LA3,H);
      delay(1+H);
      
      tone(piezo,E4,Q); 
      delay(1+Q); 
      tone(piezo,E4,Q);
      delay(1+Q);
      tone(piezo,E4,Q);
      delay(1+Q);
      tone(piezo,F4,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      
      tone(piezo,Ab3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,LA3,H);
      delay(1+H);
      
      tone(piezo,LA4,Q);
      delay(1+Q);
      tone(piezo,LA3,E+S);
      delay(1+E+S);
      tone(piezo,LA3,S);
      delay(1+S);
      tone(piezo,LA4,Q);
      delay(1+Q);
      tone(piezo,Ab4,E+S);
      delay(1+E+S);
      tone(piezo,G4,S);
      delay(1+S);
      
      tone(piezo,Gb4,S);
      delay(1+S);
      tone(piezo,E4,S);
      delay(1+S);
      tone(piezo,F4,E);
      delay(1+E);
      delay(1+E);//PAUSE
      tone(piezo,Bb3,E);
      delay(1+E);
      tone(piezo,Eb4,Q);
      delay(1+Q);
      tone(piezo,D4,E+S);
      delay(1+E+S);
      tone(piezo,Db4,S);
      delay(1+S);
      
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,B3,S);
      delay(1+S);
      tone(piezo,C4,E);
      delay(1+E);
      delay(1+E);//PAUSE QUASI FINE RIGA
      tone(piezo,F3,E);
      delay(1+E);
      tone(piezo,Ab3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,LA3,S);
      delay(1+S);
      
      tone(piezo,C4,Q);
      delay(1+Q);
      tone(piezo,LA3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,E4,H);
      delay(1+H);
      
      tone(piezo,LA4,Q);
      delay(1+Q);
      tone(piezo,LA3,E+S);
      delay(1+E+S);
      tone(piezo,LA3,S);
      delay(1+S);
      tone(piezo,LA4,Q);
      delay(1+Q);
      tone(piezo,Ab4,E+S);
      delay(1+E+S);
      tone(piezo,G4,S);
      delay(1+S);
      
      tone(piezo,Gb4,S);
      delay(1+S);
      tone(piezo,E4,S);
      delay(1+S);
      tone(piezo,F4,E);
      delay(1+E);
      delay(1+E);//PAUSE
      tone(piezo,Bb3,E);
      delay(1+E);
      tone(piezo,Eb4,Q);
      delay(1+Q);
      tone(piezo,D4,E+S);
      delay(1+E+S);
      tone(piezo,Db4,S);
      delay(1+S);
      
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,B3,S);
      delay(1+S);
      tone(piezo,C4,E);
      delay(1+E);
      delay(1+E);//PAUSE QUASI FINE RIGA
      tone(piezo,F3,E);
      delay(1+E);
      tone(piezo,Ab3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      
      tone(piezo,LA3,Q);
      delay(1+Q);
      tone(piezo,F3,E+S);
      delay(1+E+S);
      tone(piezo,C4,S);
      delay(1+S);
      tone(piezo,LA3,H);
      delay(1+H);
      
      delay(2*H);
      
    }
}
