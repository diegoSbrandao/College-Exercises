	/* Programa Desafio LHW02C
 	    Diego de Sousa Brandão */
      

/*   ---DECLARAÇÃO DE BIBLIOTECA--- */

#include <LiquidCrystal.h>

/*   ---VARIÁVEIS GLOBAIS--- */

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 13;
int led2 = 10;
int led3 = 9;
int buzzer = 8;
int botao1 = 7;
int botao2 = 6;
int ldr = A0;
int tmp = A1;
int pot = A2;

/*   ---SETUP--- */

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(pot, INPUT);
  
  
/*   ---VISOR LCD--- */
  lcd.begin(16, 2);
  lcd.setCursor (0,0);
  lcd.print("LD     L1:  L2: ");
  lcd.setCursor (0,1);
  lcd.print("TP:       PT:   ");
}


/*   ---DECLARAÇÃO DE FUNÇÃO--- */

//LD
int LDR();
void LDR_VALOR(int ldrValor);

//TP
float TEMPERATURA();
void BUZZER(float temp);
void TEMPERATURA_VALOR(float temp);

//L1
int BOTAO1();
int BOTAO1_DECISAO(int buttonState1);
void BOTAO1_LCD(int botaoLed);

//L2
int BOTAO2();    
int BOTAO2_DECISAO(int buttonState2);
void BOTAO2_LCD(int botaoLed2);

//PT
int POTENCIOMETRO(); 
int POTENCIOMETRO_CALCULO(int potValor);
void POTENCIOMETRO_VALOR(int voltagem); 
   

    /*   ---------********---------   */
   /*   ---------PROGRAMA---------   */
  /*   ---------********---------   */

  void loop() {
      
	// VARIÁVEIS LOCAIS
    int ldrValor=0;
    float temp=0;  
    int buttonState1=0;
    int botaoLed =0;
    int buttonState2 = 0;    
    int botaoLed2 =0;
    int potValor = 0;
    int voltagem = 0;

   
	// FUNÇÕES
    
    	//LD
    ldrValor = LDR();    
    LDR_VALOR(ldrValor);      
    
    	//TP 
    temp=TEMPERATURA();
    BUZZER(temp);
    TEMPERATURA_VALOR(temp);       
   
    	//L1
    buttonState1 = BOTAO1();    
    botaoLed =  BOTAO1_DECISAO(buttonState1);                           
    BOTAO1_LCD(botaoLed);
   
       //L2
    buttonState2 = BOTAO2(); 
    botaoLed2 = BOTAO2_DECISAO(buttonState2);
    BOTAO2_LCD(botaoLed2);      
    
  	  //PT 
    potValor = POTENCIOMETRO();
    voltagem = POTENCIOMETRO_CALCULO(potValor);
    POTENCIOMETRO_VALOR(voltagem);    
}


/*   ---ESCOPO FUNÇÕES--- */


//Função(LD)- LDR 

int LDR(){
   int ldrValor = 0;
	ldrValor = analogRead(ldr);
 	 return ldrValor;
}

void LDR_VALOR(int ldrValor){
 
   lcd.setCursor(2,0);
    lcd.print(ldrValor); 
  
   if (ldrValor<1000){
    lcd.setCursor(5,0);
     lcd.print(" ");
   }  
}

//Função(TP)- SENSOR TEMPERATURA + BUZZER 

float TEMPERATURA(){
 float temp; 
  temp = (float(analogRead(tmp))*5/(1023))/0.01;
   return temp;
}

void BUZZER(float temp){   
 if (temp>100.00)
  tone(buzzer, 260);
 else 
  noTone(buzzer);
}

void TEMPERATURA_VALOR(float temp){
  lcd.setCursor(3,1);
   lcd.print(temp);
}


//Função(L1) - BOTÃO 1 

  int BOTAO1(){
    
    int buttonState1 = 0;
     buttonState1 = digitalRead(botao1);
      Serial.println(buttonState1);        
       return buttonState1;    
  }

   int BOTAO1_DECISAO(int buttonState1){  
 	 int botaoLed=0;
      if(buttonState1==HIGH) {
       digitalWrite(led1, LOW);
        botaoLed=0;
        return botaoLed;
      }

      else{
       digitalWrite(led1, HIGH);
        botaoLed = 1;
        return botaoLed;
      }
    }

    void BOTAO1_LCD(int botaoLed){

      if(botaoLed==0){
       lcd.setCursor(10,0);
        lcd.print("D");
      }
      else{
       lcd.setCursor(10,0);
        lcd.print("L");
      }  
    }


//Função(L2) - BOTÃO 2 

  int BOTAO2(){
   int buttonState2 = 0;
    buttonState2 = digitalRead(botao2);
     Serial.println(buttonState2);  
      return buttonState2;
  }
    
	int BOTAO2_DECISAO(int buttonState2){

      int botaoLed2=0;
      if(buttonState2==HIGH){
       digitalWrite(led2, LOW);
        botaoLed2=0;
        return botaoLed2;
      }
      else{
       digitalWrite(led2, HIGH); 
        botaoLed2 = 1;
        return botaoLed2;
      } 
    }

    void BOTAO2_LCD(int botaoLed2){

      if(botaoLed2==0){
       lcd.setCursor(15,0);
        lcd.print("D");
      }

      else{
       lcd.setCursor(15,0);
        lcd.print("L");
      }

    }

//Função(PT) - POTENCIÔMETRO 

  int POTENCIOMETRO(){
    int potValor = 0;
     potValor = analogRead(pot);
      return potValor;
  }

    int POTENCIOMETRO_CALCULO(int potValor){
      int voltagem = 0;
        voltagem = map(potValor, 0, 1023, 0, 255);
         return voltagem;
    }

    void POTENCIOMETRO_VALOR(int voltagem){  
      lcd.setCursor(13,1);
       lcd.print(voltagem);
        analogWrite(led3,voltagem);        
    
      if(voltagem>255)
        lcd.setCursor(15,0);
     	 lcd.print(" ");        
    }