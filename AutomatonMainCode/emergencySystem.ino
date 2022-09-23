void emergencySystem()
{
  int buttonState = digitalRead(emergency_button);

  if (buttonState == LOW) {
   bluetooth.println("Help Help Help!!!");
   delay(1000);

 }
  else {
    ////dsdsadasd
  }
}
