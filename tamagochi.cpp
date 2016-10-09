#include <iostream>
#include "tamagochi.h"
using namespace std;

/* Set methods*/
void tamagochi::set_nome(){
	cout<<"Dammi un nome: \t";
	cin>>nome;
	}
void tamagochi::set_mangia(){
	this->fame++;
	cout<<"Gnam!!"<<endl;
	}
void tamagochi::set_bevi(){
	sete++;
	cout<<"Rinfrescante!!"<<endl;
	}
void tamagochi::set_bagno(){
	pulizia=10;
	cout<<"Sono Pulito!!"<<endl;
	}
void tamagochi::set_sonno(){
	sonno=0;
	cout<<"Che dormita!!"<<endl;
	}
void tamagochi::set_bisogni(){
	bisogni=0;
	cout<<"Che liberazione!!"<<endl;
	}

/* Get methods*/
string tamagochi::get_nome(){return nome;}
int tamagochi::get_mangia(){return this->fame;}
int tamagochi::get_bevi(){return this->sete;}
int tamagochi::get_sonno(){return this->sonno;}
int tamagochi::get_bisogni(){return this->bisogni;}
int tamagochi::get_bagno(){return this->pulizia;}
int tamagochi::get_peso(){return this->peso;}
int tamagochi::get_altezza(){return this->altezza;}
int tamagochi::get_eta(bool modo){
			time_t now;
			double seconds;
			time(&now);  /* get current time; same as: now = time(NULL)  */
			seconds = difftime(now,data);
			if (modo==1){
				char* dt = ctime(&data);// convert now to string form
				cout<<"Sono passati "<<seconds<<" secondi dalla mia nascita :"<<dt<<endl;
				return 0;
			}
			else
			return seconds;
	}


void tamagochi::status(){
	cout<<"***********Salute***********"<<endl;
	cout<<"Fame:\t"<<get_mangia()<<endl;
	cout<<"Sete:\t"<<get_bevi()<<endl;
	cout<<"Sonno:\t"<<get_sonno()<<endl;
	cout<<"Bisogno:\t"<<get_bisogni()<<endl;
	cout<<"Pulizia:\t"<<get_bagno()<<endl;
	cout<<"*********Anagrafica*********"<<endl;
	cout<<"Nome:\t"<<get_nome()<<endl;
	cout<<"Eta':\t"<<get_eta(0)<<endl;
	cout<<"Peso:\t"<<get_peso()<<endl;
	cout<<"Altezza:\t"<<get_altezza()<<endl;
	cout<<"****************************"<<endl;
}


	
