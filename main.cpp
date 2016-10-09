#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include "tamagochi.h"
#include "menu.h"
//#include "database.h"
using namespace std;

/* reads from keypress, doesn't echo */
int getch(void){
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

int main(int argc, char *argv[]){
tamagochi tam1;
Menu menu;

tam1.set_nome();
tam1.get_eta(1);
tam1.set_mangia();
tam1.set_bevi();

while(true){
	int ch;
	system("clear");
	menu.show();
	ch=getch()-48;
	//cin>>ch;
	cout<<"inviato "<<ch<<endl;
	if(ch==0){system("clear");
				break;
				}
		system("clear");
		menu.control(ch,tam1);
		//cin>>ch;
		fflush(stdin);
		//cout<<tam1.get_mangia();
		getch();
	}
return 0;
}
