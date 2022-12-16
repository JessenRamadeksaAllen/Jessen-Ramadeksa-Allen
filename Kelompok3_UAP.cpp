#include<iostream>
#include<conio.h>
#include<dos.h> 
#include <windows.h>
#include <time.h>


#define LEBAR_LAYAR 90
#define PANJANG_LAYAR 26
#define GARIS_POTONG 70 


using namespace std; 
 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Posisi;

char huruf[10];	
int keyPos[10][2];	
int score = 0; 

void gotoxy(int x, int y){
	Posisi.X = x;
	Posisi.Y = y;
	SetConsoleCursorPosition(console, Posisi);
}
void setcursor(bool visible, DWORD size) {
	if(size == 0)
		size = 20;	
	
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
void BORDER(){  
	for(int i=0; i<LEBAR_LAYAR; i++){ 
		gotoxy(i,PANJANG_LAYAR); cout<<"?";
	}
	
	for(int i=0; i<PANJANG_LAYAR; i++){
		gotoxy(0,i); cout<<"?";
		gotoxy(LEBAR_LAYAR,i); cout<<"?";
	}
	for(int i=0; i<PANJANG_LAYAR; i++){
		gotoxy(GARIS_POTONG,i); cout<<"?";
	}
}

void genAlphabet(int ind){
	huruf[ind] = 65+rand()%25;
	keyPos[ind][0] = 1 + rand()%(GARIS_POTONG-2);
	keyPos[ind][1] = 1;
}
void drawAlphabet(int ind){
	if( keyPos[ind][0] != 0 ){
		gotoxy(keyPos[ind][0], keyPos[ind][1]);   cout<<huruf[ind];  
	} 
}
void eraseAlphabet(int ind){
	if( keyPos[ind][0] != 0 ){
		gotoxy(keyPos[ind][0], keyPos[ind][1]);   cout<<" ";  
	}
}
void resetAlphabet(int ind){
	eraseAlphabet(ind);
	genAlphabet(ind);
}

void gameover(){
	system("cls");
	cout<<endl;
	cout<<"\t\t--------------------------"<<endl;
	cout<<"\t\t----- GAME  SELESAI ------"<<endl;
	cout<<"\t\t--------------------------"<<endl<<endl;
	cout<<"\t\tKetik Keyboard Untuk Kembali Ke Menu.";
	getch();
}
void updateScore(){
	gotoxy(GARIS_POTONG + 7, 5);cout<<"Score: "<<score<<endl;
}


void play(){
	score = 0;
	for(int i=0; i<10; i++){
		keyPos[i][0] = keyPos[i][1] = 1;	
	}
	 
	system("cls"); 
	BORDER(); 
	updateScore();
	
	for(int i=0; i<10; i++)
		genAlphabet(i); 
	
	gotoxy(GARIS_POTONG + 5, 2);cout<<"GAME KETIK";
	gotoxy(GARIS_POTONG + 6, 4);cout<<"----------";
	gotoxy(GARIS_POTONG + 6, 6);cout<<"----------";
	
	gotoxy(18, 5);cout<<"Ketik Sembarang Untuk Mulai";
	getch();
	gotoxy(18, 5);cout<<"                           ";
	
	while(1){
		if(kbhit()){
			char ch = getch();
			for(int i=0; i<10; i++){
				if( ch == huruf[i] || ch-32 == huruf[i] ){
					resetAlphabet(i);
					score++;
					updateScore();
				}
			}
			if(ch==27){
				break;
			}
		} 
		
		for(int i=0; i<10; i++)
			drawAlphabet(i);  
			
		Sleep(400); 
		
		for(int i=0; i<10; i++){
			eraseAlphabet(i);  
			keyPos[i][1] += 1;
			if( keyPos[i][1] > PANJANG_LAYAR ){
				gameover();
				return;
			}
		}
	}
}

int main()
{
	setcursor(0,0); 
	srand( (unsigned)time(NULL)); 
	 
	do{
		system("cls");
		gotoxy(10,5); cout<<" IIIIIIIIIIIIIIIIIIIIIIIIII "; 
		gotoxy(10,6); cout<<" I       GAME KETIK       I ";
		gotoxy(10,7); cout<<" IIIIIIIIIIIIIIIIIIIIIIIIII ";
		gotoxy(10,9); cout<<" KETIK 1 UNTUK MEMULAI GAME ";	 
		char op = getche();
		
		if( op=='1') play();
		else if( op=='3') exit(0);
		
	}while(1);
	
	return 0;
}
