#define BUTTONRIGHT 7 //Pines
#define BUTTONLEFT 8
#define IN1 9
#define IN2 10
#define ENA 11

int speedMotor = 255; //Variable velocidad
bool statusRight;
bool statusLeft;

void setup() {
pinMode(BUTTONRIGHT, INPUT);
pinMode(BUTTONLEFT, INPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(ENA, OUTPUT);

//ENCIENDE MOTOR
//digitalWrite (IN1, HIGH);
//digitalWrite (IN2, LOW);
}


void loop(){
statusRight = digitalRead(BUTTONRIGHT);
statusLeft = digitalRead(BUTTONLEFT);
if(statusLeft == HIGH){ //Boton izquierda disminuye en 5 la velocidad
    if (speedMotor <=0) {
        speedMotor = 0;
    }else{
    speedMotor = speedMotor-5;
    }
}

if(statusRight == HIGH){ //Boton derecha aumenta en 5 la velocidad
    if (speedMotor >=255) {
        speedMotor = 255;
    }else{
    speedMotor = speedMotor+5;
    }
}

analogWrite(ENA, speedMotor);
delay(150);

}