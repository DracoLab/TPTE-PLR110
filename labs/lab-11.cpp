#include <iostream>

using namespace std;

class robot
{
	private:
		int sfaires;
		bool anoixto;
		int apostasi;
		bool kleisto();
	public:
		string onoma;
		string apostoli;
		string xroma;
		float varos;
		robot();
		void on();
		void off();
		void gemisma(int s);
		void pyr(int s);
		void mprosta(int m);
		void pisw(int m);
		void aristera(int m);
		void deksia(int m);
		void katastasi();
};

robot::robot()
{
	sfaires = 10;
	apostasi = 0;
	onoma = "NONAME";
	varos = 0;
	xroma = "NOCOLOR";
	anoixto = false;

	
}

void robot::gemisma(int s)
{
	if (s > 0)
	{
		sfaires += s;
		cout << "Prostheses " << s << " sfaires  sto " << onoma << endl;
	}		
}

void robot::pyr(int s)
{
	int i;
	if (kleisto())
		return;
	if (s <= sfaires)
	{
		for (i = 1; i <= s; i++)
			cout << i <<"o mpam apo to " << onoma << endl;
		sfaires -= s;
	}
	else
		cout << "To " << onoma << " den exei " << s << " sfaires." << endl;
}

void robot::on()
{
	anoixto = true;
	cout << "To robot " << onoma << " einai pleon anoixto." << endl;
}

void robot::off()
{
	anoixto = false;
	cout << "Sorry, eimai to robot me onoma " << onoma << " kai eimai pleon off." <<endl;
}

void robot::mprosta(int m)
{
	if (kleisto())
		return;
	if (m > 0)
	{
		apostasi += m;
		cout << "Eimai to robot me onoma " <<onoma << " kai piga mprosta " << m << " metra." << endl;
	}
}

void robot::pisw(int m)
{
	if (kleisto())
		return;
	if (m > 0)
	{
		apostasi += m;
		cout << "Eimai to robot me onoma " <<onoma << " kai piga pisw " << m << " metra." << endl;
	}
}

void robot::aristera(int m)
{
	if (kleisto())
		return;
	if (m > 0)
	{
		apostasi += m;
		cout << "Eimai to robot me onoma " <<onoma << " kai piga aristera " << m << " metra." << endl;
	}
}

void robot::deksia(int m)
{
	if (kleisto())
		return;
	if (m > 0)
	{
		apostasi += m;
		cout << "Eimai to robot me onoma " <<onoma << " kai piga deksia " << m << " metra." << endl;
	}
}

void robot::katastasi()
{
	cout << endl << "STOIXEIA " << endl;
	cout << "Onoma: " << onoma << endl;
	if (anoixto)
		cout << onoma << " einai on." << endl;
	else
		cout <<  onoma << " einai off." << endl;
	cout << "Xroma: " << xroma << endl;
	cout << "Baros: " << varos << endl;
	cout << "Apostoli: " << apostoli << endl;
	cout << "Sfaires: " << sfaires << endl;
	cout << "Apostasi: " << apostasi << endl;
}

bool robot::kleisto()
{
    if (anoixto == false)
		cout << onoma << " ---> " << " kleisto" << endl;
	return !anoixto;	
}

int main()
{
	/*robot1*/
	robot r1;
	r1.onoma = "robot1";
	r1.xroma = "Mauro";
	r1.apostoli = "Na petuxw tous stoxous sto kentro.";
	r1.varos = 250;
	r1.on();
	r1.pyr(200);
	r1.aristera(30);
	r1.pyr(6);
	r1.katastasi();
	
	/*robot2*/
	robot r2;
	r2.onoma = "robot2";
	r2.xroma = "Gkri";
	r1.apostoli = "Na purovolisw ston aera.";
	r2.varos = 200;
	r2.pyr(7);
	r2.on();
	r2.katastasi();
	r2.gemisma(8);
	r2.mprosta(15);
	r2.aristera(30);
	r2.off();
	r2.katastasi();
	return 0;
}
