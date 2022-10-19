#define PIN_BOMBA 12

void setup()
{
    pinMode(PIN_BOMBA, OUTPUT);
    digitalWrite(PIN_BOMBA, HIGH);
    Serial.begin(9600);
}

void loop()
{
    Serial.println(1);
}
