#include <Keypad.h>

const int buzzerPin = 12; // Pin for the active buzzer

const byte ROWS = 4; // 4 rows
const byte COLS = 4; // 4 columns

// Keypad layout
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Keypad pins
byte rowPins[ROWS] = {9, 8, 7, 6};   // Rows
byte colPins[COLS] = {5, 4, 3, 2};   // Columns

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String inputID = ""; // Store entered ID

void setup() {
    Serial.begin(9600); // Initialize serial communication
    pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
    Serial.println("Buzzer control ready"); // Debugging message
}

void loop() {
    // Check for keypad input
    char key = keypad.getKey();
    if (key) {
           // Si une touche est pressée
    if (key >= '0' && key <= '9') {
      // Ajouter uniquement les chiffres
      inputID += key;
      Serial.print(key); // Afficher chaque chiffre au fur et à mesure
    } else if (key == '#') {
      // Touche "#" pour valider l'entrée
      Serial.println("\nID complet : " + inputID);
      Serial.println("Envoi à Qt...");
      delay(100); // Pause pour s'assurer que tout est envoyé
      inputID = ""; // Réinitialiser après envoi
    } else if (key == '*') {
      // Touche "*" pour effacer l'entrée
      inputID = "";
      Serial.println("\nEntrée réinitialisée.");
    }
  }


    // Check for serial commands
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');
        command.trim(); // Trim any whitespace or newline characters
        Serial.print("Received command: "); // Debugging message
        Serial.println(command); // Print the received command

        if (command == "BUZZER_ON") {
            digitalWrite(buzzerPin, HIGH); // Turn on the active buzzer
            Serial.println("Buzzer ON"); // Debugging message
        } else if (command == "BUZZER_OFF") {
            digitalWrite(buzzerPin, LOW); // Turn off the active buzzer
            Serial.println("Buzzer OFF"); // Debugging message
        } else {
            Serial.println("Unknown command"); // Debugging message
        }
    }
}