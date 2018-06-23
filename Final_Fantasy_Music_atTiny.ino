
int melody[]=       {262, 262, 262, 262, 208, 233, 262,0, 233, 262,196,174,196,174,
                     233,233,220,233,220,220,196,174,165,174,147,0,
                     196,174,196,174,233,233,220,233,220,220,196,174,196,233,262,0,
                     196,174,196,174,233,233,220,233,220,220,196,174,165,174,147,0,
                     196,174,196,174,233,233,220,233,220,220,196,174,196,233,262};
                     
int noteDurations[]={ 6,6,6,2,2,2,6,6,6,1,2,2,2,4,2,6,
                      2,6,2,6,2,2,2,6,1,2,
                      2,2,2,4,2,6,2,6,2,6,2,2,2,6,1,2,
                      2,2,2,4,2,6,2,6,2,6,2,2,2,6,1,2,
                      2,2,2,4,2,6,2,6,2,6,2,2,2,6,1};  
                   
 int buttonPin= 4;
 int speakerPin=3;
void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(speakerPin, OUTPUT);
}
void loop(){
int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){

    for (int thisNote=0; thisNote < 73; thisNote++){
      int noteDuration = 1000 / noteDurations [thisNote];
      tone(speakerPin, melody [thisNote], noteDuration);             
      int pauseBetweenNotes = noteDuration * 0.85;
      delay(pauseBetweenNotes); 
      noTone(speakerPin);
    } }      
    else
    {
      noTone(speakerPin);
    }   
  }

