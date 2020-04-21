/* Controle PWM de motores DC */
//AUTOR: Bruno Ribeiro de Almeida 
//Data: 20/04/2020

int pinos[4] = {3, 5, 6, 9};

int pwm = 0;

void initMotores(){

    for(int i = 0; i < 4; i++){
	
	pinMode(pinos[i], OUTPUT);

    }

}

void channel3(int valor){

	
    if(valor > 1485){
	pwm = map(valor, 1485, 1984, 0, 255);
	analogWrite(3, 0);
	analogWrite(5, pwm);
	analogWrite(6, 0);
	analogWrite(9, pwm);  

    }else if(valor > 990 && valor <= 1430){
      
      	pwm = map(valor, 1430, 990, 0, 255);
      	analogWrite(3, pwm);
      	analogWrite(5, 0);
      	analogWrite(6, pwm);
      	analogWrite(9, 0);
    }


}

void channel1(int valor){
  
    if(valor > 1485){
      	pwm = map(valor, 1485, 1984, 0, 255);
      
      	analogWrite(6, 0);
      	analogWrite(9, pwm);  
      	analogWrite(3, 0);
      	analogWrite(5, 0);
      
    }else if(valor < 1480){
      
      	pwm = map(valor, 1485, 996, 0, 255);
      
      	analogWrite(6, 0);
      	analogWrite(9, 0);
      	analogWrite(3, 0);
      	analogWrite(5, pwm);
      
    }
  
  
}
