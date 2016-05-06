#include <Smartcar.h>

Odometer encoderLeft(190), encoderRight(190); //Βάλτε τους δικούς σας παλμούς ανά μέτρο
Gyroscope gyro(13); //Βάλτε την κατάλληλη τιμή σύμφωνα με το γυροσκόπιό σας
Gyroscope gyro(7);
Car folkracer;

SR04 front;
const int TRIGGER_PIN = 3; //Βάλτε την κατάλληλη τιμή για το pin που είναι συνδεδεμένο στο trigger
const int ECHO_PIN = 2; //Βάλτε την κατάλληλη τιμή για το pin που είναι συνδεδεμένο στο echo
const int TRIGGER_PIN = A2; //Βάλτε την κατάλληλη τιμή για το pin που είναι συνδεδεμένο στο trigger
const int ECHO_PIN = A3; //Βάλτε την κατάλληλη τιμή για το pin που είναι συνδεδεμένο στο echo

void setup() {
  front.attach(TRIGGER_PIN, ECHO_PIN); //αρχικοποιεί τον υπέρηχο
  @@ -27, 7 + 27, 7 @@ void loop() {
    int distance = front.getDistance(); //μέτρησε την απόσταση και αποθήκευσέ την στη μεταβλητή distance

    //TO-DO: Κάντε το αυτοκινητάκι να στρίβει 90 μοίρες προς τα αριστερά όταν βρίσκει ένα κοντινό εμπόδιο και να συνεχίζει την πορεία του
    if (distance < 30 && distance > 0) {
      if (distance < 20 && distance > 0) {
        folkracer.stop();
        folkracer.rotate(-90);
        folkracer.setSpeed(0.5);
