void emergencySystem()
{
  int buttonState = digitalRead(emergency_button);
  int sound_level = analogRead(sound_level_sensor);

  if (buttonState == LOW) {
   bluetooth.println("Help Help Help!!!");
   delay(1000);

 }
  else {
    ////dsdsadasd
  }
}
