void setup()

{
	Serial.begin(9600);
}

void loop()
{
  for(float c = 0; c < 10000; c = c + 0.01)
  	Serial.println(exp(c));
}
