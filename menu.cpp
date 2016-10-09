#include <iostream>
#include <stdio.h>
#include "menu.h"
#include "tamagochi.h"
using namespace std;

char Menu::show(){
	cout<<"1 Status"<<endl;
	cout<<"2 Mangia"<<endl;
	cout<<"3 Bevi"<<endl;
	cout<<"4 Dormi"<<endl;
	cout<<"5 Lava"<<endl;
	cout<<"6 Bisogni"<<endl;
	cout<<"0 Esci"<<endl;
	char c=1;//2=getchar();
	//cout<<c;
	return c;
	}

void Menu::control(int choice, tamagochi &tam2){
	//cout<<"arrivato:"<<choice<<endl;
	switch (choice){
		case 1:
			tam2.status();
			break;
		case 2:
			tam2.set_mangia();
			break;
		case 3:
			tam2.set_bevi();
			break;
		case 4:
			tam2.set_sonno();
			break;
		case 5:
			tam2.set_bagno();
			break;
		case 6:
			tam2.set_bisogni();
			break;
		case 0:
			break;
		default:
			cout<<"Scelta errata";
		}
	}
