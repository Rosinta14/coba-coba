#include <iostream>
#include <windows.h>

using namespace std;
COORD coordinate;
void gotoxy(int x,int y){
    coordinate.X=x; coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}

void tabel(){

    //atas bawah
    gotoxy(2,3);cout<<"|-------------|";
    gotoxy(4,23);cout<<"|-------------|"<<endl;

    //kiri
    gotoxy(2,4);cout<<"|";
    gotoxy(2,5);cout<<"|---------|";
    gotoxy(2,6);cout<<"|";
    gotoxy(2,7);cout<<"|---------|";
    gotoxy(2,8);cout<<"|";
    gotoxy(2,9);cout<<"|---------|";
    gotoxy(2,10);cout<<"|";
    gotoxy(2,11);cout<<"|---------|";
    gotoxy(2,12);cout<<"|";
    gotoxy(2,13);cout<<"|---------|";
    gotoxy(2,14);cout<<"|";
    gotoxy(2,15);cout<<"|---------|";
    gotoxy(2,16);cout<<"|";
    gotoxy(2,17);cout<<"|---------|";
    gotoxy(2,18);cout<<"|";
    gotoxy(2,19);cout<<"|---------|";
    gotoxy(2,20);cout<<"|";
    gotoxy(2,21);cout<<"|---------|";
    gotoxy(2,22);cout<<"|";

    //tengah
    gotoxy(6,4);cout<<"|";
    gotoxy(6,5);cout<<"|---------|";
    gotoxy(6,6);cout<<"|";
    gotoxy(6,7);cout<<"|---------|";
    gotoxy(6,8);cout<<"|";
    gotoxy(6,9);cout<<"|---------|";
    gotoxy(6,10);cout<<"|";
    gotoxy(6,11);cout<<"|---------|";
    gotoxy(6,12);cout<<"|";
    gotoxy(6,13);cout<<"|---------|";
    gotoxy(6,14);cout<<"|";
    gotoxy(6,15);cout<<"|---------|";
    gotoxy(6,16);cout<<"|";
    gotoxy(6,17);cout<<"|---------|";
    gotoxy(6,18);cout<<"|";
    gotoxy(6,19);cout<<"|---------|";
    gotoxy(6,20);cout<<"|";
    gotoxy(6,21);cout<<"|---------|";
    gotoxy(6,22);cout<<"|";

    //kanan
    gotoxy(16,4);cout<<"|";
    gotoxy(16,5);cout<<"|";
    gotoxy(16,6);cout<<"|";
    gotoxy(16,7);cout<<"|";
    gotoxy(16,8);cout<<"|";
    gotoxy(16,9);cout<<"|";
    gotoxy(16,10);cout<<"|";
    gotoxy(16,11);cout<<"|";
    gotoxy(16,12);cout<<"|";
    gotoxy(16,13);cout<<"|";
    gotoxy(16,14);cout<<"|";
    gotoxy(16,15);cout<<"|";
    gotoxy(16,16);cout<<"|";
    gotoxy(16,17);cout<<"|";
    gotoxy(16,18);cout<<"|";
    gotoxy(16,19);cout<<"|";
    gotoxy(16,20);cout<<"|";
    gotoxy(16,21);cout<<"|";
    gotoxy(16,22);cout<<"|";
}

void data(){
    gotoxy(4,4);cout<<"1";
    gotoxy(4,6);cout<<"2";
    gotoxy(4,8);cout<<"3";
    gotoxy(4,10);cout<<"4";
    gotoxy(4,12);cout<<"5";
    gotoxy(4,14);cout<<"6";
    gotoxy(4,16);cout<<"7";
    gotoxy(4,18);cout<<"8";
    gotoxy(4,20);cout<<"9";
    gotoxy(4,22);cout<<"10";

    gotoxy(8,4);cout<<"Score";
    gotoxy(8,6);cout<<"Score";
    gotoxy(8,8);cout<<"Score";
    gotoxy(8,10);cout<<"Score";
    gotoxy(8,12);cout<<"Score";
    gotoxy(8,14);cout<<"Score";
    gotoxy(8,16);cout<<"Score";
    gotoxy(8,18);cout<<"Score";
    gotoxy(8,20);cout<<"Score";
    gotoxy(8,22);cout<<"Score";

}
int main(){

        tabel();
        data();

}

