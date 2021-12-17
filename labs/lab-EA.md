[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Ενδιάµεσο επαναληπτικό Εργαστήριο

Το περιεχόμενο του εργαστηρίου ανακεφαλαίωσης είναι το εξής:

- Αντικειµενοστρεφής σχεδιασµός προγράµµατος

## Άσκηση Ε.1 – Αντικειµενοστρεφής σχεδίαση

Θέλουµε να διαχειριζόµαστε κουµπαράδες που ανήκουν σε κάποια παιδιά. Οι κουµπαράδες µπορεί να έχουν διάφορα σχήµατα (π.χ. γουρουνάκι, τενεκαδάκι, χρηµατοκιβώτιο, κ.λπ.) και χρώµατα. Επίσης περιέχουν κάποιο ποσό χρηµάτων. Θέλουµε να µπορούµε να ρίχνουµε χρήµατα στον κουµπαρά αλλά και να βγάζουµε. Θέλουµε επίσης να βλέπουµε τα στοιχεία του (το σχήµα, το χρώµα το ποσό που περιέχει).

Θα πρέπει όταν κατασκευάζεται ένα κουµπαράς να µην έχει µέσα του χρήµατα. Θέλουµε όµως όταν δηµιουργούµε έναν κουµπαρά να µπορούµε αν θέλουµε να καθορίζουµε το αρχικό ποσό που θα περιέχει. Θέλουµε και κάτι ακόµα: Να µπορούµε όταν δηµιουργούµε έναν κουµπαρά να καθορίζουµε το σχήµα και το χρώµα του. Ίσως να θέλουµε να προστατεύσουµε κάποιο από τα στοιχεία του ώστε να µην µπορεί ο οποιοσδήποτε να έχει πρόσβαση και να το τροποποιεί ανεξέλεγκτα. Σκεφτείτε ποιο. Φυσικά δεν θα µπορούµε να πάρουµε από τον κουµπαρά περισσότερα χρήµατα από όσα περιέχει.

Τώρα αφού ελπίζω να κάνατε όλα τα απαραίτητα θα πρέπει να φτιάξετε ένα πρόγραµµα στο οποίο θα δηµιουργούνται τρεις κουµπαράδες µε διαφορετικό τρόπο ο καθένας. Ο ένας θα είναι «Γουρουνάκι» κίτρινο, ο άλλος «Χρηµατοκιβώτιο» χρυσό και ο τρίτος «Τενεκεδάκι» ασηµί. Οι δύο πρώτοι δεν θα περιέχουν αρχικά καθόλου χρήµατα ενώ ο τρίτος θα περιέχει 10€. Βάλτε και βγάλτε λεφτά και από τους τρείς κουµπαράδες και τελικά εµφανίστε τα στοιχεία και των τριών. Γράψτε ακόµα µια πρόταση που να προσπαθεί να βγάλει περισσότερα χρήµατα από αυτά που περιέχει ένας κουµπαράς.

Τέλος, φτιάξετε µια συνάρτηση που να επιστρέφει ως τιµή έναν κουµπαρά µε στοιχεία που θα δίνει ο χρήστης (σχήµα, χρώµα, ποσό που περιέχει). Καλέστε τη συνάρτηση από τη main() και εµφανίστε τα στοιχεία του κουµπαρά που επιστρέφει.

```c++
#include <iostream>

using namespace std;

class koumparas{
    private:
        float xrimata;

    public:
        string sxima;
        string xroma;

        koumparas();
        koumparas(float poso);
        koumparas(string p_sxima, string p_xroma);

        void vale(float p_xrimata);
        void vgale(float p_xrimata);
        void display();

};

koumparas::koumparas()
{
    xrimata = 0;
}

koumparas::koumparas(float poso)
{
    xrimata = poso;
}

koumparas::koumparas(string p_sxima, string p_xroma)
{
    sxima = p_sxima;
    xroma = p_xroma;
    xrimata = 0;
}

void koumparas::vale(float p_xrimata)
{
    xrimata += p_xrimata;
}

void koumparas::vgale(float p_xrimata)
{
    if(p_xrimata > xrimata)
        cout << "De mporeite na vgalete " << p_xrimata << " Euro apo ton koumpara " << sxima << endl << endl;
    else
        xrimata -= p_xrimata;
}

void koumparas::display()
{
    cout << "Koumparas: " << sxima << endl;
    cout << "Xroma: " << xroma << endl;
    cout << "Periexei " << xrimata << " Euro." << endl << endl;
}

koumparas my_koumparas();

int main()
{

    /* 1os Koumparas */
    koumparas k1("Gourounaki", "Kitrino");

    /* 2os Koumparas */
    koumparas k2("Xrimatokibotio", "Xruso");

    /* 3os Koumparas */
    koumparas k3(10);
    k3.sxima = "Tenekedaki";
    k3.xroma = "Asimi";

    k1.vale(250);
    k1.vgale(20);

    k2.vale(100);
    k2.vgale(35);

    k1.display();
    k2.display();
    k3.display();

    k3.vgale(15);

    koumparas k4 = my_koumparas();
    k4.display();

    return 0;
}

koumparas my_koumparas()
{
    koumparas k;
    float poso;

    cout << "Dwse sxima gia ton koumpara sou: ";
    cin >> k.sxima;

    cout << "Dwse xroma gia ton koumpara sou: ";
    cin >> k.xroma;

    cout << "Dwse to arxiko poso pou periexei o koumparas sou: ";
    cin >> poso;

    k.vale(poso);

    return k;
}
```
