//librerias
#include<conio.h>
#include<tchar.h>
#include<process.h>
#include<dos.h>
#include<windows.h>
#include<stdio.h>
#include <time.h>
#include<stdlib.h>
#include<iostream>

//direccion de flechas  
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13

using namespace std;
// funcion gotoxy para posiciones
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
  }

// funcion numero random
int random(int ini, int fin){
	srand(time(NULL));
	  return ini+rand()%( fin+1-ini);
}
// Declaraciones  de variables globales

		char mat[3][3]; 
		void tabla (int,int);
		int gana;
		int partidas=0;
		int win_maq;
		int sum_jug=0,sum_maq=0;
		boolean confirmar_ganador=true;
		boolean maquina_ganadora = true	;
		boolean continuar=true;
		boolean cont_jugador=false;
		boolean cont_part=false;
// opciones de cuando gana el jugador  contiene variables booleanas para ganar el juego
void ganador(){
	int i,j;
		if (gana == mat[0][0] & gana==mat [0][1] & gana== mat[0][2] ){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if (gana== mat[1][0] & gana== mat [1][1] & gana== mat[1][2]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if (gana==mat[2][0] & gana== mat[2][1] & gana== mat[2][2]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if (gana== mat[0][0] & gana== mat[1][0] & gana== mat[2][0]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if(gana==mat[0][1] & gana==mat[1][1] & gana== mat[2][1]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if(gana==mat[0][2] & gana==mat [1][2] & gana==mat[2][2]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if(gana== mat[0][0] & gana== mat[1][1] & gana== mat [2][2]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
		if (gana== mat[2][0] & gana== mat[1][1] & gana== mat [0][2]){
			system("color 2");
			gotoxy (20,20);cout<<"...... ganaste la ronda ..!!!     ";
			system ("pause>null");
			confirmar_ganador=false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			continuar==false;
		}
				
	}
		
		// ingreso de posiciones de jugador 
	void jugador(){
		int pri_posi,i,j;
		gotoxy(3,9);cout<<"----------------------\n ";
					gotoxy(3,10);cout<<"|  1   |   2  |   3  |\n";
					gotoxy(3,11);cout<<"----------------------\n";
					gotoxy(3,12);cout<<"|  4   |   5  |  6   | \n";
					gotoxy(3,13);cout<<"----------------------\n";
					gotoxy(3,14);cout<<"|  7   |   8  |   9  |\n";
					gotoxy(3,15);cout<<"----------------------\n";		
		gotoxy(2,2);cout<<"\n Ingresa tu poscicion: ";
		
		cin>>pri_posi;
		if (pri_posi==1){
			i=0;
			j=0;
		}
		if (pri_posi==2){
			i=0;
			j=1;
		}
		if (pri_posi==3){
			i=0;
			j=2;
		}
		if (pri_posi==4){
			i=1;
			j=0;
		}
		if (pri_posi==5){
			i=1;
			j=1;
		}
		if (pri_posi==6){
			i=1;
			j=2;
		}
		if (pri_posi==7){
			i=2;
			j=0;
		}
		if (pri_posi==8){
			i=2;
			j=1;
		}
		if (pri_posi==9){
			i=2;
			j=2;
		}
		system("cls");
		if(i>2 || j>2 || i<0 || j<0 ){
		cout<<"Las cordenadas no existen>>  es turno de la maquina \n"; 
		system("pause>null"); system("cls");
		}else{
		if(mat[i][j] == 'O' || mat[i][j]=='X' ){
			
		cout<<"las coordenadas ya estan ocupadas >>  <<Turno de la maquina>> \n"; 
		 cout<<"\n presiones un tecla....."; system("pause>null"); system("cls");
		}else{
		mat[i][j]='X';
		gana='X' ;
		tabla(i,j);
		ganador();
			}
		}
	
	}

// opciones sobre cuando gana la maquina

void gana_maquina(){
int i,j;
if (win_maq	 == mat[0][0] & win_maq	==mat [0][1] & win_maq	== mat[0][2] ){
	system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if (win_maq	== mat[1][0] &win_maq	== mat [1][1] & win_maq	== mat[1][2]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if (win_maq	==mat[2][0] & win_maq	== mat[2][1] & win_maq	== mat[2][2]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';system("cls");
			}
		}
		}
		if (win_maq	== mat[0][0] & win_maq	== mat[1][0] & win_maq	== mat[2][0]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if(win_maq	==mat[0][1] &win_maq	==mat[1][1] & win_maq	== mat[2][1]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if(win_maq	==mat[0][2] & win_maq	==mat [1][2] & win_maq	==mat[2][2]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if(win_maq	== mat[0][0] & win_maq	== mat[1][1] &win_maq	== mat [2][2]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system ("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
		}
		if (win_maq	== mat[2][0] & win_maq	== mat[1][1] & win_maq	== mat [0][2]){
			system("color 4");
			gotoxy (20,20);cout<<"......Perdiste..!!!     ";
			system("pause>null");
			maquina_ganadora = false;
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				system("cls");
			}
		}
			system ("pause>null");
		}

}
	// codigo sobre la maquina el rand de numeros para jugar
	void maquina(){
	
		boolean conf_maq=true;
		int vec[2];
		int ran_pri,ran_seg,e,i,j;
		
		
		while (conf_maq==true){
		for(e=0; e<=1;e++){
			vec[e]= 0 + rand() % (2 + 1 - 0) ;
		}
		ran_pri=vec[0];
		ran_seg=vec[1];
		if (mat[ran_pri][ran_seg] =='X' || mat[ran_pri][ran_seg] =='O' ){
			conf_maq=true;
		}else{
			i=ran_pri;
			j=ran_seg;
			mat[i][j]='O';
			win_maq='O';
			tabla(i,j);
			gana_maquina();
			conf_maq=false;
		
		}

}

}
	// tablero de posiciones
	void cuadro(){
	
	 
	 gotoxy(3,9);cout<<"----------------------\n ";
					gotoxy(3,10);cout<<"|  1   |   2  |   3  |\n";
					gotoxy(3,11);cout<<"----------------------\n";
					gotoxy(3,12);cout<<"|  4   |   5  |  6   | \n";
					gotoxy(3,13);cout<<"----------------------\n";
					gotoxy(3,14);cout<<"|  7   |   8  |   9  |\n";
					gotoxy(3,15);cout<<"----------------------\n";
}
	



// score puntaje del juego 
	void score(){
		int i,j;
		if(confirmar_ganador==false){
			sum_jug=sum_jug+2;
			cont_jugador=true;
			cont_part=false;
			partidas=partidas+1;
		}
		if( maquina_ganadora==false){
			sum_maq=sum_maq+2;
			cont_jugador=false;
			cont_part=true;
			partidas=partidas+1;
			
		}
		
		
		
		gotoxy(30,2);cout<<" numero de juego: "<<partidas <<" de 5";
		gotoxy(18,6);cout<<" puntaje jugador "<<sum_jug<<"         "<<"puntaje maquina "<<sum_maq;
		if(partidas==5){
			if(sum_jug>sum_maq){
				system("cls");
				
			gotoxy(20,15);	cout<<"has gando el duelo.... ";
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
				
			}
		}
			system("pause>null");
			system("cls");
			}else{
				system("cls");
			gotoxy(20,15);	cout<<"has perido el duelo....";
			for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				mat[i][j]=' ';
			}
		}
			system("pause>null");
			system("cls");
			}
		}		
		
		
	}

// menu y procesos principales del juego  

void jugar_over(){
	
boolean repetir=true;

int i,j;
int x,y,r;
int f=1;
							
						
int op=0;
system("color 9");
while(repetir==true){
gotoxy(28,7); cout<<" ....BIENVENIDO.... ";
gotoxy(26,9);cout<<" <<...TRES EN RAYA....>> ";
gotoxy (30,13);cout<<"Menu principal";
gotoxy (33,15); cout<<"1.Jugador";
gotoxy (33,16); cout<<"2.Maquina";	
gotoxy (33,17); cout<<"3.salir";	
gotoxy (35,19); cout<<"Op:"; 
	 
	 cin>>op;	
	 system("cls");
	confirmar_ganador=true;
	maquina_ganadora = true;
		switch (op){
	case 1: repetir=false; gotoxy (25,16);cout<<"jugador ha empezado";
	gotoxy(4,5);cout<<"recuerda lo siguiente ....";
	gotoxy(4,6);cout<< "las coordenadas estan remplasadas con numeros de modo que \n";
	gotoxy(4,7);cout<<"tienes que ingresa uno de los numeros como se muestra acontinuacion";   system("pause>null"); system("cls");
		cont_part=true;
		partidas=1;
		while(partidas<=5){
			system("cls");
		confirmar_ganador=true;  maquina_ganadora = true; 
		while(confirmar_ganador==true && maquina_ganadora == true ){
	
				if(cont_jugador==true){
				maquina();
				jugador();
				cuadro();
				score();
				
			
			}
			if(cont_part==true){
				jugador();
				maquina();
				cuadro();
				score();
				
			}
		
}
}
		system ("cls");
			gotoxy(20,13); cout<<"1. Menu Principal";
			cin>>r;
			system("cls");
			if(r==1){
				jugar_over();
			}
	break;
	
system("color 9");
		case 2: repetir=false; gotoxy (25,16); cout<<"la maquina a empesado"; system("pause>null");
		system("cls");
		gotoxy(4,5);cout<<"recuerda lo siguiente ....";
	gotoxy(4,6);cout<< "las coordenadas estan remplasadas con numeros de modo que \n";
	gotoxy(4,7);cout<<"tienes que ingresa uno de los numeros como se muestra acontinuacion";   system("pause>null"); system("cls");
	cont_jugador=true;
		while(partidas<5){
		confirmar_ganador=true;  maquina_ganadora = true; 
		while(confirmar_ganador==true && maquina_ganadora == true ){
	
			if(cont_part==true){
				jugador();
				maquina();
				cuadro();
				score();	
			}
			
				if(cont_jugador==true){
				maquina();
				jugador();
				cuadro();
				score();
			
			}
		
}
}
		system ("cls");
		system("color 9");
			gotoxy(20,13); cout<<"1. Menu Principal";
			cin>>r;
			system("cls");
			if(r==1){
				jugar_over();
				
			}	
			
	break;
	
	case 3: repetir=false; break;
	default: gotoxy (25,16); cout<<"opcion inexistente"; break; 
	
	}
}

}
		
// solo se llama a jugar over 
void jugar(){
	
jugar_over();
	

	system("pause>null");
	system("cls");
	}

// main funcion principal
main(){
jugar();
system("pause>null");

}

// tabla de posicionamiento de las posiciones 
void tabla(int i, int j){
	void clrscr();
  
system("color 5");
gotoxy (50,10); printf("-------------------\n");
gotoxy (50,11); printf("|  %c  |  %c  |  %c  |\n",mat[0][0],mat[0][1],mat[0][2]);
gotoxy (50,12); printf("-------------------\n");
gotoxy (50,13); printf("|  %c  |  %c  |  %c  |\n",mat[1][0],mat[1][1],mat[1][2]);
gotoxy (50,14); printf("-------------------\n");
gotoxy (50,15); printf("|  %c  |  %c  |  %c  |\n",mat[2][0],mat[2][1],mat[2][2]);
gotoxy (50,16); printf("-------------------\n");

}
