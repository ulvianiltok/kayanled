int i;
void setup() {
 for(i=2;i<=6;i++) pinMode(i, OUTPUT);
 pinMode(11, INPUT);
}
void loop() {
//Anahtar sürgüsü sola çekildiğinde
if (digitalRead(11)==1){
for(i=2;i<=6;i++){ digitalWrite(i, 1); delay(1000); }
for(i=2;i<=6;i++){ digitalWrite(i, 0); delay(1000); }
 }//if için
//Anahtar sürgüsü sağa çekildiğinde
if (digitalRead(11)==0){
for(i=6;i>=2;i--){ digitalWrite(i, 1); delay(1000); }
for(i=6;i>=2;i--){ digitalWrite(i, 0); delay(1000); }
 }//if için
}//loop için
