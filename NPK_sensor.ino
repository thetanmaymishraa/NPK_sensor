#include <Wire.h>               // For I2C communication
#include <LiquidCrystal_I2C.h>  // Library for LCD with I2C module

// Initialize the LCD with the I2C address
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define the analog pins for NPK sensor
#define N_PIN A0
#define P_PIN A1
#define K_PIN A2

void setup() {
  // Initialize the LCD
  lcd.begin();
  lcd.backlight();  // Turn on the backlight

  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Display initial message
  lcd.setCursor(0, 0);
  lcd.print("NPK Sensor Ready");
  delay(2000);
}

void loop() {
  // Read values from the NPK sensor
  int nitrogen = analogRead(N_PIN);
  int phosphorus = analogRead(P_PIN);
  int potassium = analogRead(K_PIN);

  // Convert analog values to a percentage (example)
  int n_value = map(nitrogen, 0, 1023, 0, 100);
  int p_value = map(phosphorus, 0, 1023, 0, 100);
  int k_value = map(potassium, 0, 1023, 0, 100);

  // Display NPK values on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("N:");
  lcd.print(n_value);
  lcd.print(" P:");
  lcd.print(p_value);
  
  lcd.setCursor(0, 1);
  lcd.print("K:");
  lcd.print(k_value);

  // Print the values to the Serial Monitor
  Serial.print("Nitrogen: ");
  Serial.print(n_value);
  Serial.print("%  Phosphorus: ");
  Serial.print(p_value);
  Serial.print("%  Potassium: ");
  Serial.print(k_value);
  Serial.println("%");

  // Wait before the next reading
  delay(2000);
}
