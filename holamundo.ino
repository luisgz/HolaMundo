/*
Blink
El LED enciende y apaga por intervalos de 1 segundoEste codigo es tomado del area de ejemplos de arduino
*/

// Vamos a Darle un nombre al PIN 13

int led = 13;

// Ahora vamos a proceder a configurar los puertos como entradas o salidas
void setup() {
// Iniciamos el PIN 13 o led como lo llamamos como salida
pinMode(led, OUTPUT);
}

// Ahora vamos a crear la rutina que siempre se repetira
void loop() {
digitalWrite(led, HIGH);   // Enciende el LED
delay(1000);               // Espera de 1 seg
digitalWrite(led, LOW);    //Apaga el LED
delay(1000);               // Espera de 1 seg
}
