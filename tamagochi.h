#include <iostream>
#include <ctime>
using namespace std;
class tamagochi{
	string nome;
	unsigned int eta,peso,altezza;
	unsigned int sete,fame,bisogni,pulizia,sonno;
	time_t data; 
	void set_eta();
	void set_peso();
	void set_altezza();
	public:
		void set_nome();
		string get_nome();
		void set_mangia();
		int  get_mangia();
		void set_bevi();
		int  get_bevi();
		void set_sonno();
		int  get_sonno();
		void set_bagno();
		int  get_bagno();
		void set_bisogni();
		int  get_bisogni();
		int  get_eta(bool modo);
		int  get_peso();
		int  get_altezza();
		void status();
		tamagochi(){
			cout<<"Ciao, sono nato !!  "<<endl;
			data= time(0);// current date/time based on current system
			fame=10;
			sete=10;
			bisogni=0;
			pulizia=1;
			sonno=1;
			peso=1;
			altezza=30;
			}
			
	};
