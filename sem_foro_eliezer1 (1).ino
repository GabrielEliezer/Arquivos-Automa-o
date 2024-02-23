  int vermelhopedestre,vermelhocarros;
  int verdepedestre, verdecarros;
  int amarelocarros, botaoinicio;

bool estadobotao;

void setup()
{
    vermelhopedestre= 7;
    vermelhocarros= 3;
    verdepedestre=6;
    verdecarros=5;
    amarelocarros =4;
    botaoinicio =2;
  
  
    pinMode(botaoinicio, INPUT);
    pinMode(vermelhocarros, OUTPUT);
    pinMode(amarelocarros, OUTPUT);
    pinMode(verdecarros, OUTPUT);
    pinMode(verdepedestre, OUTPUT);
    pinMode(vermelhopedestre, OUTPUT);
 
  
  /*
  	 piscaramelo(1, 500);
  	 piscaramelo(0, 500);
     piscaramelo(1, 500);
  	 piscaramelo(0, 500);
     piscaramelo(1, 500);
  	 piscaramelo(0, 500);
  
  */
}



void loop()
{
    botaoinicio = false;
    estadobotao = digitalRead(2);
  
  if(estadobotao == 1){
    ciclosemaforo(1,0,0,1,0,10000);
    ciclosemaforo(1,0,0,0,1,5000);
    ciclosemaforo(0,1,1,0,0,7000);
  }
}
    


void ciclosemaforo(bool a, bool b, bool c, bool d, bool e, int tempo){

	digitalWrite(7, a);
	digitalWrite(3, b);
	digitalWrite(6, c);
	digitalWrite(5, d);
	digitalWrite(4, e);
	delay(tempo);  

}
/*

void piscaramelo (bool piscaramelo123, int tempofix){

  digitalWrite(4,piscaramelo123);
  delay(tempofix);

}

  
  */
  
  