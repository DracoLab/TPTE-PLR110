[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 4

Το περιεχόμενο του 4ου εργαστηρίου είναι το εξής:

- Κλάσεις και αντικείµενα
- Ορισµός κλάσης και δηµιουργία αντικειµένων
- Μεταβλητές-µέλη και µέθοδοι της κλάσης
- Πρόσβαση στα µέλη µιας κλάσης

## Άσκηση 4.1 - Καφετιέρα

Αντικείµενο του σηµερινού προγράµµατος είναι η µοντελοποίηση αντικειµένων **ΚΑΦΕΤΙΕΡΑΣ**. Θα προσπαθήσουµε να προσοµοιάσουµε τη λειτουργία µιας καφετιέρας µέσω των εργαλείων που διαθέτει η C++. Οι καφετιέρες που θα φτιάξουµε θα κάνουν σκέτο, µέτριο και γλυκό καφέ!
Κάθε καφετιέρα θα έχει τα ακόλουθα χαρακτηριστικά:

- **Χρώµα**: Προσδιορίζει το χρώµα της π.χ Ροζ.
- **Μάρκα**: Προσδιορίζει τη µάρκα της π.χ Philips.
- **Νερό**: Προσδιορίζει σε γραµµάρια τη ποσότητα του νερού που έχει µέσα η καφετιέρα.
- **Ζάχαρη**: Προσδιορίζει σε γραµµάρια τη ποσότητα της ζάχαρης που έχει µέσα η καφετιέρα.
- **Καφές**: Προσδιορίζει σε γραµµάρια τη ποσότητα του καφέ που έχει µέσα η καφετιέρα.

Επίσης, η καφετιέρα θα διαθέτει τις ακόλουθες λειτουργίες:

- **Γέµισµα**: Γεµίζει την καφετιέρα µε υλικά: 1000γρ νερό, 200γρ ζάχαρη και 100γρ καφέ.
- **Σκέτος**: Φτιάχνει έναν ή περισσότερους σκέτους καφέδες. Κάθε σκέτος καφές χρησιµοποιεί 100γρ νερού και 15γρ καφέ.
- **Μέτριος**: Φτιάχνει έναν ή περισσότερους µέτριους καφέδες. Κάθε µέτριος καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 10 γρ ζάχαρη.
- **Γλυκός**: Φτιάχνει έναν ή περισσότερους γλυκούς καφέδες. Κάθε γλυκός καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 20 γρ ζάχαρη.
- **Κατάσταση**: Μας εµφανίζει τις ποσότητες υλικών που έχουν µείνει στη καφετιέρα.

### Βήμα 1

Φτιάξτε µια **κλάση** µε όνοµα **kafetiera** η οποία θα προσδιορίζει τόσο τα χαρακτηριστικά όσο και τις λειτουργίες των αντικειµένων αυτής της κλάσης. Τα χαρακτηριστικά (Χρώµα, Μάρκα, Νερό, Ζάχαρη και Καφές) θα πρέπει να υλοποιούνται από µεταβλητές-µέλη κατάλληλου τύπου.
Οι **λειτουργίες** της κλάσης θα υλοποιούνται από **µεθόδους**. Θα φτιάχνουµε τις µεθόδους σταδιακά ώστε να τις δοκιµάζουµε. Αρχικά θα φτιάξουµε τις παρακάτω µεθόδους:

**gemisma()**: Θα γεµίζει τις µεταβλητές-µέλη που αντιστοιχούν στα υλικά, µε τις ποσότητες: 1000γρ νερό, 200γρ ζάχαρη και 100γρ καφέ
**katastasi()**: Θα εµφανίζει στην οθόνη τις **ποσότητες υλικών** που υπάρχουν στη καφετιέρα στην ακόλουθη µορφή:

```c++
Philips Ροζ
================
Νερό: 800
Καφές: 80
Ζάχαρη: 170
================
```

ΠΡΟΣΟΧΗ !!! όλα τα µέλη της κλάσης να είναι ΔΗΜΟΣΙΑ

```c++
#include <iostream>
using namespace std;

class kafetiera
{
    public:
        int kafes;
        int zaxari;
        int nero;
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

int main()
{

    return 0;
}
```

### Βήμα 2

Ώρα να φτιάξουµε δύο αντικείµενα-καφετιέρες, και µετά θα συνεχίσουµε µε την υλοποίηση των υπόλοιπων µεθόδων της κλάσης.
Στη συνάρτηση main() δηµιουργήστε δύο αντικείµενα καφετιέρες µε ονόµατα kaf1 και kaf2 αντίστοιχα:

- Η καφετιέρα **kaf1** να είναι µάρκας **Philips** και να έχει χρώµα **ροζ** (roz).
- Η καφετιέρα **kaf2** να είναι µάρκας **Kenwood** και να έχει χρώµα **µπλέ** (Blue).
- Γεµίστε και τις δύο καφετιέρες µε υλικά.
- Εµφανίστε τη κατάσταση κάθε καφετιέρας.

```c++
#include <iostream>
using namespace std;

class kafetiera
{
    public:
        int kafes;
        int zaxari;
        int nero;
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

int main()
{
    kafetiera kaf1,kaf2;
    kaf1.marka="Philips";
    kaf1.xroma="Roz";
    kaf2.marka="Kenwood";
    kaf2.xroma="Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();  
    
    return 0;
}
```

### Βήμα 3

Αφού δούλεψε το προηγούµενο στάδιο, πάµε τώρα να συµπληρώσουµε τη κλάση **kafetiera** µε τις υπόλοιπες µεθόδους:

**sketos()**: Θα **δέχεται ως παράµετρο** το πλήθος των καφέδων και θα φτιάχνει τόσους **σκέτους** καφέδες όσο η τιµή της παραµέτρου. Θα πρέπει να αφαιρεί από τα υλικά τις ποσότητες που κατανάλωσε και να εµφανίζει στο τέλος το πλήθος των καφέδων που έφτιαξε στη µορφή: **Έφτασαν οι 3 σκέτοι !!!**. Η παράµετρος να έχει προκαθορισµένη τιµή 1, ώστε όταν η µέθοδος κληθεί χωρίς παράµετρο να φτιάχνει έναν µόνο καφέ.
**metrios()**: Ίδιο µε το προηγούµενο αλλά για **µέτριους** καφέδες!
**glykos()**: Ίδιο µε το προηγούµενο αλλά για **γλυκούς** καφέδες!

```c++
#include <iostream>

using namespace std;
class kafetiera
{
    public:
        int kafes;
        int zaxari;
        int nero;
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
        void sketos(int ar);
        void metrios(int ar);
        void glykos(int ar);
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

void kafetiera::sketos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-15*ar;
    cout<<"eftasan oi "<<ar<<" sketoi ....."<<endl;
}

void kafetiera::glykos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-20*ar;
    cout<<"eftasan oi "<<ar<<" glykoi ....."<<endl;
}

void kafetiera::metrios(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-10*ar;
    cout<<"eftasan oi "<<ar<<" metrioi ....."<<endl;
}

int main()
{
    kafetiera kaf1,kaf2;
    kaf1.marka="Philips";
    kaf1.xroma="Roz";
    kaf2.marka="Kenwood";
    kaf2.xroma="Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();

    return 0;
}
```

### Βήμα 4

Ώρα να πιούµε κανένα καφεδάκι! Δύο µέτριους ένα σκέτο και τρείς γλυκούς παρακαλώ!
Στη συνάρτηση main() χρησιµοποιείστε τα αντικείµενα **kaf1** και **kaf2** ως εξής:

- Στην καφετιέρα **kaf1** να κάνετε δύο µέτριους.
- Στην καφετιέρα **kaf2** να κάνετε έναν σκέτο και τρείς γλυκούς
- Εµφανίστε τη κατάσταση κάθε καφετιέρας.

```c++
#include <iostream>

using namespace std;
class kafetiera
{
    public:
        int kafes;
        int zaxari;
        int nero;
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
        void sketos(int ar);
        void metrios(int ar);
        void glykos(int ar);
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

void kafetiera::sketos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-15*ar;
    cout<<"eftasan oi "<<ar<<" sketoi ....."<<endl;
}

void kafetiera::glykos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-20*ar;
    cout<<"eftasan oi "<<ar<<" glykoi ....."<<endl;
}

void kafetiera::metrios(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-10*ar;
    cout<<"eftasan oi "<<ar<<" metrioi ....."<<endl;
}

int main()
{
    kafetiera kaf1,kaf2;
    kaf1.marka="Philips";
    kaf1.xroma="Roz";
    kaf2.marka="Kenwood";
    kaf2.xroma="Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();

    return 0;
}
```

### Βήμα 5

**Προσθέστε** 50 γραμμάρια **καφέ** στη καφετιέρα **kaf1** και **αφαιρέστε** 30 γραμμάρια **ζάχαρη** από τη καφετιέρα **kaf2**. Εμφανίστε τη κατάσταση κάθε καφετιέρας.
Αν τα καταφέρατε μπράβο αλλά αυτό δεν θα πρέπει να μας επιτρέπεται να το κάνουμε. Δεν θα πρέπει η κλάση να μας αφήνει να βάζουμε και να βγάζουμε ανεξέλεγκτα υλικά μέσα από τις καφετιέρες.
Πρέπει λοιπόν τις μεταβλητές-μέλη που αφορούν στα υλικά να τις **προστατεύσουμε** από δημόσια χρήση και να έχουμε πρόσβαση σε αυτές **μόνο** με την μέθοδο gemisma().
Σκεφτείτε τι πρέπει να κάνετε και κάντε το!
Μόλις το κάνετε προσπαθήστε να κάνετε ότι και πριν: Π.χ να προσθέστε 50 γραμμάρια καφέ στη καφετιέρα kaf1. Τι παρατηρείτε ?

```c++
#include <iostream>

using namespace std;
class kafetiera
{
    private:
        int kafes;
        int zaxari;
        int nero;
    
    public:
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
        void sketos(int ar);
        void metrios(int ar);
        void glykos(int ar);
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

void kafetiera::sketos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-15*ar;
    cout<<"eftasan oi "<<ar<<" sketoi ....."<<endl;
}

void kafetiera::glykos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-20*ar;
    cout<<"eftasan oi "<<ar<<" glykoi ....."<<endl;
}

void kafetiera::metrios(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-10*ar;
    cout<<"eftasan oi "<<ar<<" metrioi ....."<<endl;
}

int main()
{
    kafetiera kaf1,kaf2;
    kaf1.marka="Philips";
    kaf1.xroma="Roz";
    kaf2.marka="Kenwood";
    kaf2.xroma="Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    
    //kaf1.kafes = kaf1.kafes + 50;
    //kaf1.zaxari = kaf1.zaxari + 30;
    //kaf1.katastasi();

    return 0;
}
```

### Βήμα 6

Να φτιάξετε μια μέθοδο της κλάσης με όνομα **kostos()** η οποία να επιστρέφει ως τιμή το κόστος των υλικών (σε €) που έχουν **καταναλωθεί** μέχρι στιγμής σε μια καφετιέρα. Το νερό είναι δωρεάν, ο καφές στοιχίζει 5€ το κιλό και η ζάχαρη 2€ το κιλό. Στη συνάρτηση main() το πρόγραμμα να εμφανίζει το κόστος των υλικών για κάθε καφετιέρα

```c++
#include <iostream>

using namespace std;
class kafetiera
{
    private:
        int kafes;
        int zaxari;
        int nero;
    
    public:
        string marka;
        string xroma;

        void gemisma();
        void katastasi();
        void sketos(int ar);
        void metrios(int ar);
        void glykos(int ar);
        float kostos();
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

void kafetiera::sketos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-15*ar;
    cout<<"eftasan oi "<<ar<<" sketoi ....."<<endl;
}

void kafetiera::glykos(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-20*ar;
    cout<<"eftasan oi "<<ar<<" glykoi ....."<<endl;
}

void kafetiera::metrios(int ar=1)
{
    nero=nero-100*ar;
    kafes=kafes-10*ar;
    zaxari=zaxari-10*ar;
    cout<<"eftasan oi "<<ar<<" metrioi ....."<<endl;
}

float kafetiera::kostos(){
    float kostos_zaxaris = (200-zaxari)/1000.0 * 2;
    float kostos_kafe = (100-kafes)/1000.0 * 5;
    return kostos_zaxaris + kostos_kafe;
}

int main()
{
    kafetiera kaf1,kaf2;
    kaf1.marka="Philips";
    kaf1.xroma="Roz";
    kaf2.marka="Kenwood";
    kaf2.xroma="Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    
    //kaf1.kafes = kaf1.kafes + 50;
    //kaf1.zaxari = kaf1.zaxari + 30;
    //kaf1.katastasi();
    
    cout << "Kostos kaf1: " << kaf1.kostos() << " Euro." << endl;
    cout << "Kostos kaf2: " << kaf2.kostos() << " Euro." << endl;

    return 0;
}
```

### Βήμα 7

Όπως δουλεύουν οι καφετιέρες μας μέχρι στιγμής, μπορούμε να κάνουμε καφέδες ακόμα και όταν δεν έχουμε υλικά, και οι ποσότητες να αποκτήσουν αρνητικές τιμές! Αυτό φυσικά δεν πρέπει να συμβαίνει. Για να αντιμετωπίσουμε το πρόβλημα αυτό θα πρέπει τροποποιήσουμε τη κλάση ως εξής:
Να δημιουργήστε μια μέθοδο με όνομα **elegxos()** η οποία θα δέχεται **τρεις** παραμέτρους: τις ποσότητες του νερού, του καφέ και της ζάχαρης που θα χρειαστούμε για να φτιάξουμε τους καφέδες που μας παρήγγειλαν. Η μέθοδος θα ελέγχει αν τα υλικά που υπάρχουν επαρκούν για να φτιαχτούν οι καφέδες και θα επιστρέφει ανάλογα τιμή **true** ή **false**! Η μέθοδος elegxos() να είναι **ιδιωτική**.
Θα πρέπει τώρα να τροποποιήστε τις μεθόδους sketos(), metrios() και glykos() ώστε πριν φτιάξουν τους καφέδες να ελέγχουν αν υπάρχουν τα απαιτούμενα υλικά χρησιμοποιώντας την μέθοδος **elegxos()**. ΑΝ δεν επαρκούν, δεν θα φτιάχνουν κανέναν καφέ και θα εμφανίζουν το μήνυμα: **** Δεν φτιάχτηκε κανένας καφές γιατί δεν επαρκούν τα υλικά ****

```c++
#include <iostream>
using namespace std;

class kafetiera
{
private:
    int kafes;
    int zaxari;
    int nero;
    bool elegxos(int k, int z, int n);
public:
    string marka;
    string xroma;

    void gemisma();
    void katastasi();
    void sketos(int ar);
    void glykos(int ar);
    void metrios(int ar);
    float kostos();
};

void kafetiera::gemisma()
{
    nero=1000;
    kafes=100;
    zaxari=200;
}

void kafetiera::katastasi()
{
    cout << marka << " "<<xroma<<endl;
    cout << "================"<<endl;
    cout<<"Nero:"<<nero<<endl;
    cout<<"Kafes:"<<kafes<<endl;
    cout<<"Zaxari:"<<zaxari<<endl;
    cout << "================"<<endl;
}

bool kafetiera::elegxos(int k, int z, int n)
{
	if (k<=kafes && z<=zaxari && n<=nero)
		return true;
	else
		return false;
}

void kafetiera::sketos(int ar=1)
{
	if (!elegxos(15*ar,0,100*ar))
	{
		cout<<"**** den egine kanenas sketos kafes - den yparxoyn ta ylika ****"<<endl;
		return;
	}
		nero=nero-100*ar;
		kafes=kafes-15*ar;
		cout<<"eftasan oi "<<ar<<" sketoi ....."<<endl;
}

void kafetiera::glykos(int ar=1)
{
	if (!elegxos(10*ar,20*ar,100*ar))
	{
		cout<<"**** den egine kanenas glykos kafes - den yparxoyn ta ylika ****"<<endl;
		return;
	}
	nero=nero-100*ar;
	kafes=kafes-10*ar;
	zaxari=zaxari-20*ar;
	cout<<"eftasan oi "<<ar<<" glykoi ....."<<endl;
}

void kafetiera::metrios(int ar=1)
{
	if (!elegxos(10*ar,10*ar,100*ar))
	{
		cout<<"**** den egine kanenas metrios kafes - den yparxoyn ta ylika ****"<<endl;
		return;
	}
	nero=nero-100*ar;
	kafes=kafes-10*ar;
	zaxari=zaxari-10*ar;
	cout<<"eftasan oi "<<ar<<" metrioi ....."<<endl;
}

float kafetiera::kostos(){
	float kostos_zaxaris = (200-zaxari)/1000.0 * 2;
	float kostos_kafe = (100-kafes)/1000.0 * 5;
	return kostos_zaxaris + kostos_kafe;
}

int main()
{
	kafetiera kaf1,kaf2;
	kaf1.marka="Philips";
	kaf1.xroma="Roz";
	kaf2.marka="Kenwood";
	kaf2.xroma="Blue";
	kaf1.gemisma();
	kaf2.gemisma();
	kaf1.katastasi();
	kaf2.katastasi();
	kaf1.metrios(2);
	kaf2.sketos();
	kaf2.glykos(3);
	kaf1.katastasi();
	kaf2.katastasi();

	//kaf1.kafes = kaf1.kafes + 50;
	//kaf1.zaxari = kaf1.zaxari + 30;
	//kaf1.katastasi();

	cout << "Kostos kaf1: " << kaf1.kostos() << " Euro." << endl;
	cout << "Kostos kaf2: " << kaf2.kostos() << " Euro." << endl;

	return 0;
}
```

### Προσέξτε τα παρακάτω ...

- Ακολουθήστε βήμα-βήμα τα στάδια της άσκησης και μετά από κάθε βήμα δοκιμάζετε το πρόγραμμά σας ώστε να διαπιστώστε ότι τουλάχιστον μέχρι το σημείο αυτό δουλεύει!
- ΠΡΟΣΟΧΗ: Οι κλάσεις ορίζονται πριν από τη main() και μετά από την using namespace std;
- Καλό είναι τις μεθόδους των κλάσεων να τις ορίζετε **αμέσως** μετά τη κλάση και **έξω** από τη κλάση. Σε αυτή τη περίπτωση πριν από το όνομα της συνάρτησης πρέπει να μπαίνει το προσδιοριστικό **ΟνομαΚλάσης::** όπου **ΟνομαΚλάσης** το όνομα της κλάσης στην οποία ανήκει η μέθοδος
- Οι μέθοδοι που ορίζονται εκτός της κλάσης πρέπει να δηλωθούν και μέσα στη κλάση (μόνο το πρότυπο τους).
- Η δήλωση αντικειμένων μιας κλάσης γίνεται με πρόταση της μορφής
**κλάση αντικείμενο1, αντικείμενο2**, ... ;
- Η πρόσβαση σε ένα μέλος ενός αντικειμένου γίνεται με πρόταση της μορφής **αντικείμενο.μέλος** όπου αντικείμενο το όνομα του αντικειμένου και μέλος το όνομα της μεταβλητής ή της μεθόδου της κλάσης.
- Το προσδιοριστικό **public**: διαχωρίζει τα δημόσια από τα ιδιωτικά μέλη. Το προσδιοριστικό **private**: είναι **προαιρετικό** και μπορεί να χρησιμοποιηθεί για να δηλώσει με σαφήνεια το τμήμα των ιδιωτικών μελών.
