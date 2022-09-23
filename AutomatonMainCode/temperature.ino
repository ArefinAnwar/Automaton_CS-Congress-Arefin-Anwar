void Display_Temp() {
  lcd.setCursor(5, 0);
  lcd.print("AUTOMATON");
  lcd.setCursor(1, 1);
  lcd.print("Temperature(C): ");
  lcd.print(mlx.readObjectTempC() + suffix); // Displaying object temperature
}
