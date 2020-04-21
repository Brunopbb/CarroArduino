/*Codigo principal do robo controlado por radio controle */
//AUTOR: Bruno Ribeiro de Almeida
//Data: 20/04/2020

int pin2 = 2;
int pin7 = 7;


void setup() {
	
    Serial.begin(9600);

    pinMode(pin2, INPUT);
    pinMode(pin7, INPUT);


}

void loop() {
    
    int ch3 = pulseIn(pin7, HIGH, 50000);
    int ch1 = pulseIn(pin2, HIGH, 50000);

    
    
    channel1(ch1);

    channel3(ch3);
    
        

}
