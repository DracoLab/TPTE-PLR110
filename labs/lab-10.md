[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 10

Το περιεχόμενο του 10ου εργαστηρίου είναι το εξής:

- Διαχείριση αρχείων κειμένου
- Εγγραφή και ανάγνωση αρχείων κειμένου

## 10.1 - Εγγραφή και ανάγνωση των στοιχείων σας σε αρχείο 

### Βήμα 1

- Να γραφεί πρόγραμμα **lab10_1a.cpp** το οποίο θα εγγράφει τα προσωπικά σας στοιχεία σε ένα **αρχείο κειμένου** με όνομα **info.txt**
- Στη **πρώτη** γραμμή θα πρέπει να εγγραφεί το **ονοματεπώνυμο** σας(σε greeklish)
- Στη **δεύτερη** γραμμή θα πρέπει να εγγραφεί ο **κωδικός** σας (ct...)
- Στη **τρίτη** γραμμή η **ηλικία** σας
- Στη **τέταρτη** γραμμή το **βάρος** και το **ύψος** σας
- Μόλις εγγραφούν τα στοιχεία θα πρέπει να **κλείσετε** το αρχείο
- **Εκτελέστε** το πρόγραμμα σας και ελέγξτε αν **δημιουργήθηκε** το αρχείο info.txt. Ανοίξτε το με το **σημειωματάριο**(notepad)

 ```cpp
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ofstream stoixeia;
	
	stoixeia.open("info.txt");
	
	stoixeia << "Kazi Efstratia" << endl;
	stoixeia << "ct20044" << endl;
	stoixeia << "19" << endl;
	stoixeia << "39 1.54" << endl;
	
	stoixeia.close();
	
	return 0;
}
 ```
 
### Βήμα 2
 
Στη συνέχεια γράψτε ένα νέο πρόγραμμα **lab10_1b.cpp** το οποίο να ανοίγει τώρα το αρχείο **info.txt** για ανάγνωση. Να διαβάζει τα στοιχεία (ονοματεπώνυμο,κωδικό,ηλικία,βάρος και ύψος) που βρίσκονται στο αρχείο και να τα εμφανίζει στην οθόνη. Προσθέστε στο πρόγραμμα τις κατάλληλες δηλώσεις μεταβλητών και αντικειμένων που χρειάζονται για την αποθήκευση των στοιχείων που θα αναγνωστούν.

```cpp
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	string name, eponimo, ct;
	int age;
	float kg, ypsos;
	
	ifstream stoixeia;
	
	stoixeia.open("info.txt");
	
	stoixeia >> name >> eponimo;
	cout << name << " " << eponimo << endl;
	
	stoixeia >> ct;
	cout << ct << endl;
	
	stoixeia >> age;
	
	cout << age << endl; 
	
	stoixeia >> kg >> ypsos;
	cout << kg << " " << ypsos;
	
	stoixeia.close();
	
	return 0;
}
```

## Άσκηση 10.2 - Εγγραφή/ανάγνωση  μορφοποιημένων στοιχείων

### Βήμα 1

- Να γραφεί πρόγραμμα **lab10_2α.cpp** το οποίο θα ζητάει να πληκτρολογούμε τα **ονοματεπώνυμα** φοιτητών (ως μία συμβολοσειρά το καθένα). και να τα **εγγράφει** σε ένα **αρχείο κειμένου** με όνομα **onom.txt**.
- Η επαναληπτική διαδικασία να τερματιστεί μόλις πληκτρολογήσουμε τη λέξη TELOS η οποία ΔΕΝ θα πρέπει να εγγράφεται στο αρχείο.
- Να **κλείνει** το αρχείο **onom.txt**
- **Εκτελέστε** το πρόγραμμα σας και **ελέγξτε** αν δημιουργήθηκε το αρχείο **onom.txt**. **Ανοίξτε** το με το **σημειωματάριο**(notepad)

```cpp
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	string names;
	
	ofstream onomata;
	
	onomata.open("onom.txt");
	
	do{
		
		cout << "Dwse onomateponimo: ";
		getline(cin, names);
		
		if(names != "TELOS")
			onomata << names << endl;
		else
			exit(1);
		
	}while(1);
	
	onomata.close();
	
	return 0;
}
```

## Άσκηση 10.3 - Ανάγνωση μορφοποιημένων στοιχείων από αρχείο

### Βήμα 1

- Ανοίξτε το σημειωματάριο (Notepad) και πληκτρολογήστε διάφορα ποσά (π.χ. που σας οφείλουν). Τα ποσά δεν πρέπει να είναι ίδια με αυτά του πλαισίου και το πλήθος τους όσο θέλετε αλλά να είναι περισσότερα από 7!
- **Αποθηκεύστε** το αρχείο με όνομα **posa.txt** στο φάκελο **My Documents**

```cpp
10.5
120.0
0.4
80.5
....
....
```

### Βήμα 2

Να γραφεί **ΝΕΟ** πρόγραμμα **lab10_3.cpp** το οποίο να το αποθηκεύσετε **επίσης** στο φάκελο **My Documents**. Το πρόγραμμα θα ανοίγει το αρχείο **posa.txt**, θα διαβάζει τα ποσά, **χωρίς** όμως να γνωρίζει το πλήθος τους, και θα εμφανίζει το συνολικό τους άθροισμα στην οθόνη.

```cpp
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{	
	float poso, athroisma = 0;
	
	ifstream sum1;
	
	sum1.open("posa.txt");
	
	while(!sum1.eof()){
		
		sum1 >> poso;
		athroisma += poso;
	}
	sum1.close();
	cout << "To athroisma einai: " << athroisma;
	
	ofstream sum2;
	
	sum2.open("posa.txt", ios::app);
	sum2 << endl << "Efstratia";
	
	sum2.close();
	
	return 0;
}
```
