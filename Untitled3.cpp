#include <string.h>
#include <windows.h>
#include <time.h>
#include <ncurses.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int koyakY;
int speed = 40;
int gameover = 0;

void player(){
	
	int y= 7;
	int x= 2;
	
	char kotak[100] = "<>";
	 
	 move(y,x);
	 printw("%s", kotak);
	
}

void rintangan(){
	
	init_pair(1,COLOR_RED,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_WHITE);
	
	//sumbu y = 7 & 9
	//sumbu x = 60 sampai 116
	
	int a=9;
	int b=116;
	int c=7;
	int d=90;
	int e=7;
	int f=100;
	int g=7;
	int h=130;
	
	int time=50;//time
	
	attron(COLOR_PAIR(1));
	mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	attroff(COLOR_PAIR(1));
	
	mvprintw(a,b,"00");//kotak
	mvprintw(c,d,"00");//kotak2
	mvprintw(e,f,"00");//kotak3
	mvprintw(g,h,"00");
	
	
	int tombol;
	
	
	for(int i = 0;;i++){
		for(int i = 0;i<140;i++){
		clear();
		attron(COLOR_PAIR(2));
		mvprintw(8,0,"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		

		mvprintw(a,b-i,"00"); // bawah
		mvprintw(c,d-i,"00"); // kotak tengh
		mvprintw(e,f-i,"00"); //kotak depan 
		mvprintw(g,h-i,"00");
		Sleep(time);refresh();
		attroff(COLOR_PAIR(1));refresh();
		}
	}
}


void exit(){
	
	
	
	
	
	
}

void instruksi(){
	
	
	
	
}

int main(){
	
	keypad(stdscr,TRUE);
	
	initscr();
	
	curs_set(0);
	
	nodelay(stdscr, TRUE);
	
	noecho();
	
	start_color();
	
	while(true) {
	 
	 
	player();
	rintangan();
	
		
		
}

	
	
//	for(int i = 0;i<120;i++){
//	Sleep(100);refresh();clear();mvprintw(c,b+i,"0");refresh();
//	}
	
	getch();
	refresh();
	endwin();}
