#include <M5StickCPlus.h>

bool isBlack = true; // track screen color

void setup() {
  M5.begin();
}

void loop() {
  M5.update(); 
  
  if (M5.BtnA.wasPressed()) {
    
    isBlack = !isBlack;
    
    if (isBlack) {
      M5.Lcd.fillScreen(PINK);

      M5.Lcd.fillCircle(40, 60, 20, WHITE); //eye
      M5.Lcd.fillCircle(95, 60, 20, WHITE); //eye

      M5.Lcd.fillCircle(40, 60, 8, BLUE); //pupil
      M5.Lcd.fillCircle(95, 60, 8, BLUE); //pupil

      M5.Lcd.fillRect(40, 100, 60, 5, BLACK); // mouth
      
    } else {
      M5.Lcd.fillScreen(ORANGE);

      M5.Lcd.fillCircle(40, 60, 20, WHITE); //eye
      M5.Lcd.fillCircle(95, 60, 20, WHITE); //eye

      M5.Lcd.fillCircle(40, 60, 8, PURPLE); //pupil
      M5.Lcd.fillCircle(95, 60, 8, PURPLE); //pupil

      M5.Lcd.fillRect(40, 100, 60, 5, BLACK); // mouth

    }
  }
  
  delay(100); // responsiveness
}
