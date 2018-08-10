/*-----Declaracion de variables para cada color R G B-----*/
int rled = 6; // Pin PWN 11 para led rojo
int bled = 11; // Pin PWM 10 para led azul
int gled = 10;  // Pin PWM 9  para led verde
 
/*----Declaracion de variables auxiliares-----*/
int i; // Variable para ciclos repetitivos
int repeat = 5; // Variables para cantidad limite de repeticiones
 
 
void setup() {
/*----- Se inicializan pines PWM como salida*/  
  pinMode(rled, OUTPUT);
  pinMode(bled, OUTPUT);
  pinMode(gled, OUTPUT);
}

 
void loop() {
  

 analogWrite(rled,255); // Si color == 'y' se enciende color amarillo
            analogWrite(gled,255); // Mezclando r = 255 / g = 255 / b = 0
            analogWrite(bled,0);
 delay(1000);

}
 
/*-----Funcion para mostrar colores principales cada 500 ms-----*/
void rgbon(){
  analogWrite(rled,255); // Se enciende color rojo
  delay(500);            // Se esperan 500 ms
  analogWrite(rled,0);   // Se apaga color rojo 
  analogWrite(bled,255); // Se enciende color azul
  delay(500);            // Se esperan 500 ms
  analogWrite(bled,0);   // Se apaga color azul
  analogWrite(gled,255); // Se enciende color verde
  delay(500);            // Se esperan 500 ms
  analogWrite(gled,0);   // Se apaga colo verde
}
 
/*-----Funcion que permite escoger entre color amarillo, naranjo o rosado-----*/
void colors(char color){ //La funcion recibe un parametro que se guarda en variable color
  
  switch(color){ //Se compara variable color con dato guardado
    case 'y': analogWrite(rled,255); // Si color == 'y' se enciende color amarillo
            analogWrite(gled,255); // Mezclando r = 255 / g = 255 / b = 0
            analogWrite(bled,0);
    break;
    case 'o': analogWrite(rled,255); // Si color == 'o' se enciende color naranjo
            analogWrite(gled,180); // Mezclando r = 255 / g = 180 / b = 0
            analogWrite(bled,0);
    break;
    case 'p': analogWrite(rled,255); // Si color == 'p' se enciende color rosado
          analogWrite(gled,0);   // Mezclando r = 255 / g = 0 / b = 255
            analogWrite(bled,255);
    break;
  } 
}
