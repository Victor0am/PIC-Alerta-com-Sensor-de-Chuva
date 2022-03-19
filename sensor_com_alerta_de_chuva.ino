#define buzzer 3
#define sensor A0
#define ledChuva 5
#define ledSemChuva 6
#define fimdecurso 7


// ----------- Declaração de variáveis ------------
 int valor = 0;

 short FechandoaJanela = 0;
 short EstadoJanela = 0;
 
void setup() {


// ----------- Definição de entradas e saídas ------------
pinMode(buzzer, OUTPUT);
pinMode(ledChuva, OUTPUT);
pinMode(ledSemChuva, OUTPUT);

pinMode(fimdecurso, INPUT);

// ----------- Iniciando a comunicação serial com velocidade de 9600 bits/segundo ------------
Serial.begin(9600);
}

void loop() {

 valor = analogRead(sensor); // lendo o valor do sensor ------------

 if(valor <= 750 && digitalRead(fimdecurso) == LOW){
  digitalWrite(ledChuva, HIGH);
  digitalWrite(ledSemChuva, LOW);
  
  tone(buzzer,530,300);
  delay(2000);
  noTone(buzzer);
 }else if(valor <= 750 && digitalRead(fimdecurso) == HIGH){
  digitalWrite(ledChuva, HIGH);
  digitalWrite(ledSemChuva, LOW);
 }
if(valor > 850){
  digitalWrite(ledChuva, LOW);
  digitalWrite(ledSemChuva, HIGH);

}
}
