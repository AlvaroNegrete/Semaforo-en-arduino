/*
  * Funcionamiento: simula un semaforo que enciende y apaga pero con diferecia tanto un zumbador y un led amarillo se enciende repetivamente por 5 veces
  * Fecha de creacion: 26/05/2020
  * */
 


// declaracion de variables de tipo constante entero
const int ledR = 12; // Led rojo asociado al pin 12
const int ledA = 10; // Led amarillo asociado al pin 10
const int ledV = 8; // Led verde asociado al pin 8

const int zumbador = 6; //zumbador asociado al pin 6

// la fucion setup se ejecuta una sola vez
void setup() {
    // inicializa los pines como salidas digitales   
   pinMode (ledR, OUTPUT);
   pinMode (ledA, OUTPUT);
   pinMode (ledV, OUTPUT);
   pinMode (zumbador, OUTPUT);


}

//la funcion loop se ejecuta repetitivamente de forma infinita
void loop() {
  // estado del semaforo verde
   digitalWrite(ledR, LOW);           //establece 0 volt en el pin del led rojo
   digitalWrite(ledA, LOW);           //establece 0 volt en el pin del led amarillo
   digitalWrite(ledV, HIGH);          //establece 5 volt en el pin del led verde
   digitalWrite(zumbador, LOW);       //establece 0 volt en el pin del zumbador
   delay(6000);                       //espera 6 segundos

  //estado del semaforo amarillo
   digitalWrite(ledR, LOW);           //establece 0 volt en el pin del led rojo
   digitalWrite(ledV, LOW);           //establece 0 volt en el pin del led verde
  //bucle de repeticion
  for (int i=0; i<5; i++){ 
   digitalWrite(ledA, HIGH);         //establece 5 volt en el pin del led amarillo
   digitalWrite(zumbador, HIGH);     //establece 5 volt en el pin del zumbador
   delay(200);                       //espera 0,2 segundos
   digitalWrite(ledA, LOW);          //establece 0 volt en el pin del led amarillo
   digitalWrite(zumbador, LOW);      //establece 0 volt en el pin del zumbador
   delay (200);                      //espera 0,2 segundos
  }
   
  //estado del semaforo rojo
   digitalWrite(ledR, HIGH);         //establece 5 volt en el pin del led rojo
   digitalWrite(ledA, LOW);          //establece 0 volt en el pin del led amarillo
   digitalWrite(ledV, LOW);          //establece 0 volt en el pin del led verde
   digitalWrite(zumbador, LOW);      //establece 0 volt en el pin del zumbador
   delay(4000);                      //espera 4 segundos
}
