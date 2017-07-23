 int speakerPin = 11;

int length = 17; // the number of notes
//char notes[] = "ccggaagffeeddc "; // a space represents a rest
//char notes[] = "fedcggfedcggfaafeggedfedcc "; //жили у бабуси
char notes[] = "eg ge agagagagab "; //жили у бабуси
double beats[] = { 1.5, 6, 4, 1.5, 6,4, 1.5, 1.5, 1.5, 1.5,1.5,1.5, 1.5, 1.5, 1.5, 6,4};
int tempo = 145;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, 1);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i]/4, duration/1.1);
    }
  }
}

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }

    // pause between notes
    
    //delay(tempo / 2);
  }
}
