void setup()
{
// configura o pino do motor DC como saída
pinMode(9, OUTPUT);
// configura o pino do botão como entrada com pull-up ativado
pinMode(10, INPUT_PULLUP);

}

void loop()
{
  // se o botão estiver sendo apertado, o motor DC liga
  if (digitalRead(10) == LOW) {
     analogWrite(9, 255);
  }
  // se não, o motor DC desliga
  else {
     analogWrite(9,0);  
}
}
