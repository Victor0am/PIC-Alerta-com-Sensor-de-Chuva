// ----------- Nomenclatura das entradas e saídas ------------//
#define SensordeChuva A0
#define FimdeCursoJanelaFechada 3
#define FimdeCursoJanelaAberta 4
#define BotaoManualAutomatico 5
#define BotaoFechaManual 6
#define BotaoAbreManual 7
#define LedAutomatico 8
#define LedManual 9
#define FechaJanela 10
#define AbreJanela 11


// ----------- Declaração de variáveis ------------//
short PARA = 0;
short CLIQUES = 0 ;

short EstadoJanela = 0;
short FechandoaJanela = 0;
short AbrindoaJanela = 0;

void setup() {


// ----------- Definições de entradas e saídas ------------//
pinMode(FimdeCursoJanelaFechada, INPUT);
pinMode(FimdeCursoJanelaAberta, INPUT);
pinMode(BotaoManualAutomatico, INPUT);
pinMode(BotaoFechaManual, INPUT);
pinMode(BotaoAbreManual, INPUT);


pinMode(LedAutomatico, OUTPUT);
pinMode(LedManual, OUTPUT);
pinMode(FechaJanela, OUTPUT);
pinMode(AbreJanela, OUTPUT);


// ----------- Iniciando a comunicação serial com velocidade de 9600 bits/segundo ------------//
Serial.begin(9600);
}

void loop() {

// ----------- Escrevendo no monitor serial ------------//
Serial.print("Valor Sensor:  ");
Serial.print(analogRead(SensordeChuva));

Serial.print("   Estado da Janela:  ");
Serial.print(EstadoJanela);

Serial.print("   Fechado a Janela:  ");
Serial.print(FechandoaJanela);

Serial.print("   Abrindo a Janela:  ");
Serial.println(AbrindoaJanela);


// ----------- Estratégia para incrementar CLIQUES a cada clique ------------//
if( digitalRead(BotaoManualAutomatico) == HIGH && PARA == 0){
PARA = 1; 
}

if( digitalRead(BotaoManualAutomatico) == LOW && PARA == 1){
CLIQUES++;
PARA = 0;
}


// Se cliques for igual a 0
if (CLIQUES == 0){// Automático
  
// Liga LED Automático e desliga Manual 
digitalWrite( LedAutomatico, HIGH); 
digitalWrite( LedManual, LOW); 


if(analogRead(SensordeChuva) <= 800  ){// Se chover
FechandoaJanela = 1;
// Manda fechar a janela
digitalWrite( FechaJanela, HIGH); 
digitalWrite( AbreJanela, LOW); 
}



if (FechandoaJanela == 1 && EstadoJanela == 0){// Se a janela chegar no fim de curso da janela fechada
 //Desliga o motor
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, LOW); 
FechandoaJanela = 0 ;
 
}


if(analogRead(SensordeChuva) > 900 ){// Se parar de chover
AbrindoaJanela = 1;
// Manda abrir a janela
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, HIGH); 
}



if (AbrindoaJanela == 1 && EstadoJanela == 1){// Se a janela chegar no fim de curso da janela aberta

// Desliga o motor
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, LOW); 
AbrindoaJanela = 0 ;
 
}


}


// Se cliques for igual a 1
if (CLIQUES == 1){// Manual

// Liga LED Manual e desliga Automático  
digitalWrite( LedAutomatico, LOW); 
digitalWrite( LedManual, HIGH); 


if(digitalRead(BotaoAbreManual) == HIGH){ // Se o botão para abrir a janela for precionado
// Manda abrir a janela
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, HIGH); 
}


if(digitalRead(BotaoFechaManual) == HIGH  ){ // Se o botão para fechar a janela for precionado
// Manda fechar a janela  
digitalWrite( FechaJanela, HIGH); 
digitalWrite( AbreJanela, LOW); 
}


if(digitalRead(BotaoAbreManual) == LOW && digitalRead(BotaoFechaManual) == LOW ){// Se os dois botões estiverem solto

// Desliga o motor  
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, LOW);  
}

if (digitalRead(BotaoFechaManual) == LOW && EstadoJanela == 1){// Se a janela chegar no fim de curso da janela aberta
// Desliga o motor    
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, LOW); 
}

if (digitalRead(BotaoAbreManual) == LOW && EstadoJanela == 0){// Se a janela chegar no fim de curso da janela fechada
// Desliga o motor    
digitalWrite( FechaJanela, LOW); 
digitalWrite( AbreJanela, LOW); 
}
 
}


if (CLIQUES == 2){// Se cliques for igual a 2 ele mesmo se volta para 0

CLIQUES = 0;
 
}




// ----------- Mapeando estados dos fim de cursos ------------//

if( digitalRead(FimdeCursoJanelaFechada) == HIGH && digitalRead(FimdeCursoJanelaAberta) == LOW){

EstadoJanela = 0; // 0 Fechada  1 Aberta  2 Em movimento
}

if( digitalRead(FimdeCursoJanelaFechada) == LOW && digitalRead(FimdeCursoJanelaAberta) == HIGH){

EstadoJanela = 1; // 0 Fechada  1 Aberta  2 Em movimento

}

if( digitalRead(FimdeCursoJanelaFechada) == LOW && digitalRead(FimdeCursoJanelaAberta) == LOW){

EstadoJanela = 2; // 0 Fechada  1 Aberta  2 Em movimento

}

}
