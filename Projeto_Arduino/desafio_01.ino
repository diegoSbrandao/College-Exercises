
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int vermelho1 = 13; //CARRO
int amarelo1 = 10; //CARRO
int verde1 = 9;    //CARRO
int vermelho2 = 8;  //PEDESTRE
int verde2 = 6;    //PEDESTRE

void setup() {
   
 pinMode(vermelho1, OUTPUT);
 pinMode(amarelo1, OUTPUT);
 pinMode(verde1, OUTPUT);
 pinMode(vermelho2, OUTPUT); 
 pinMode(verde2, OUTPUT);
  
 lcd.begin(16, 11);
   
 lcd.setCursor(0,0);
 lcd.print("s1VM:  AM:  VD: "); 
  
 lcd.setCursor(0,1);
 lcd.print("s2VM:       VD: ");

    
}

void loop() {

 digitalWrite(verde1,HIGH); 
 digitalWrite(amarelo1,LOW); 
 digitalWrite(vermelho1,LOW);
 digitalWrite(verde2,LOW); 
 digitalWrite(vermelho2,HIGH); 
 lcd.setCursor(0,0);
 lcd.print("s1VM:  AM:  VD:3 ");  //ABRE, SEMÁFORO CARRO 
 lcd.setCursor(0,1);
 lcd.print("s2VM:4      VD:  "); //FECHA, SEMÁFORO PEDESTRE
 delay(3000);

  
 digitalWrite(verde1,LOW);
 digitalWrite(amarelo1,HIGH); 
 digitalWrite(vermelho1,LOW); 
 digitalWrite(verde2,LOW); 
 digitalWrite(vermelho2,HIGH);
 lcd.setCursor(0,0);
 lcd.print("s1VM:  AM:1 VD:  "); //ATENÇÃO, SEMÁFORO CARRO
 lcd.setCursor(0,1);
 lcd.print("s2VM:4      VD:  "); //FECHA, SEMÁFORO PEDESTRE 
 delay(1000);

 digitalWrite(verde1,LOW); 
 digitalWrite(amarelo1,LOW); 
 digitalWrite(vermelho1,HIGH); 
 digitalWrite(verde2,HIGH);  
 digitalWrite(vermelho2,LOW);
 lcd.setCursor(0,0);
 lcd.print("s1VM:4 AM:  VD:  "); //FECHA, SEMÁFORO CARRO 
 lcd.setCursor(0,1);
 lcd.print("s2VM:       VD:3 "); //ABRE, SEMÁFORO PEDESTRE
 delay(3000);

 digitalWrite(verde1,HIGH); 
 digitalWrite(amarelo1,LOW); 
 digitalWrite(vermelho1,LOW);
 digitalWrite(verde2,LOW);  
 digitalWrite(vermelho2,HIGH);
 lcd.setCursor(0,0);
 lcd.print("s1VM:  AM:  VD:3 "); //ABRE, SEMÁFORO CARRO
 lcd.setCursor(0,1);
 lcd.print("s2VM:4      VD:  "); //FECHA, SEMÁFORO PEDESTRE 
 delay(1000);
}
 