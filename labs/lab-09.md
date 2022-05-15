# Εργαστήριο 9

Το περιεχόμενο του 9ου εργαστηρίου είναι το εξής:

- Κληρονοµικότητα
- Στατικά µέλη κλάσης

## Άσκηση 9.1 - Η καφετιέρα µας ... γέννησε!

∆υστυχώς η κλάση **kafetiera** που έχουµε φτιάξει δεν µας δίνει τη δυνατότητα να φτιάχνουµε καφέ µε γάλα. Εµείς δεν θέλουµε να χαλάσουµε την υπάρχουσα κλάση αλλά να δηµιουργήσουµε µια νέα κλάση **kafetiera_me_gala** η οποία θα **παραχθεί** από την ήδη υπάρχουσα κλάση **kafetiera**. Η **καφετιέρα µε γάλα** θα κάνει ότι και µια κανονική καφετιέρα και επί πλέον θα µπορεί να φτιάχνει καφέδες µε γάλα.

Η νέα κλάση k**afetiera_me_gala** θα έχει επί πλέον τις ακόλουθες µεταβλητές-µέλη:

- **gala**: Προσδιορίζει σε γραµµάρια τη ποσότητα του γάλακτος που έχει µέσα η καφετιέρα

και τις ακόλουθες µεθόδους:

- **katastasi**: Μας εµφανίζει τις ποσότητες υλικών που έχουν µείνει στη καφετιέρα µε γάλα
- **metrios_me_gala**: Θα φτιάχνει έναν µέτριο µε γάλα. Θα χρησιµοποιεί ότι και ένας µέτριος της βασικής κλάσης και επί πλέον 8γρ γάλα.
- **sketos_me_gala**: Θα φτιάχνει έναν σκέτο µε γάλα. Θα χρησιµοποιεί ότι και ένας σκέτος της βασικής κλάσης και επί πλέον 10γρ γάλα.
- **glykos_me_gala**: Θα φτιάχνει έναν γλυκό µε γάλα. Θα χρησιµοποιεί ότι και ένας γλυκός της βασικής κλάσης και επί πλέον 5γρ γάλα.

### Βήμα 1

Κατεβάστε το αρχείο **kodikas9**.zip και αντιγράψτε όλα τα αρχεία που περιέχει στο φάκελο "My documents". Το αρχείο **Lab9_1.cpp** περιέχει τη κλάση **kafetiera**. Ανοίξτε το αρχείο **Lab9_1.cpp** µε το περιβάλλον του DEV C++. Μελετήστε τη κλάση **kafetiera**, και τις µεθόδους της. ∆ηµιουργήστε µια νέα κλάση µε όνοµα **kafetiera_me_gala** η οποία να παράγεται από την κλάση **kafetiera** µε **δηµόσια** πρόσβαση. Αρχικά η νέα κλάση θα περιέχει µια µόνο δηµόσια µεταβλητή-µέλος **gala** στην οποία θα καταχωρίζεται η ποσότητα του γάλατος που θα περιέχει νέα καφετιέρα.

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;
        
        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= - 10 * ar;
    zaxari -= - 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    return 0;
}
```

### Βήμα 2

∆ηµιουργήστε για τη κλάση **kafetiera_me_gala** µια µέθοδο µε όνοµα **katastasi()** η οποία θα εµφανίζει τις ποσότητες των υλικών που υπάρχουν µέσα σε µια καφετιέρα µε γάλα (θα σας βοηθήσουν οι οδηγίες που φαίνονται στο τέλος).

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;
        
        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        void katastasi();
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    return 0;
}
```

### Βήμα 3

Στη συνάρτηση main() δηµιουργήστε ένα αντικείµενο κλάσης **kafetiera_me_gala** µε όνοµα **kaf1**. Βάλτε στο αντικείµενο ποσότητα γάλατος 80γρ, µάρκα "MEKAPSES" και χρώµα "BLACK". Εµφανίστε τις ποσότητες των υλικών του αντικειµένου µέσω της µεθόδου **katastasi()**.

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;

        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        void katastasi();
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    return 0;
}
```

### Βήμα 4

∆ηµιουργήστε για τη κλάση kafetiera_me_gala τις ακόλουθες µεθόδους:

- **sketos_me_gala()**: Θα δέχεται ως παράµετρο το πλήθος των σκέτων µε γάλα και θα φτιάχνει τόσους καφέδες όσο η τιµή της παραµέτρου. Η παράµετρος να έχει προκαθορισµένη τιµή 1, ώστε όταν η συνάρτηση κληθεί χωρίς παράµετρο να φτιάχνει έναν µόνο καφέ. Η συνάρτηση θα πρέπει να χρησιµοποιεί το υποαντικείµενο κλάσης καφετιέραγια να φτιάχνει έναν απλό σκέτο καφέ και µετά θα .. προσθέτει γάλα. Επίσης θα πρέπει να αφαιρεί από τη ποσότητα γάλατος της **καφετιέρας µε γάλα** το γάλα που ξόδεψε.
- **metrios_me_gala()**: Ίδιο µε το προηγούµενο αλλά για µέτριους µε γάλα καφέδες!
- **glykos_me_gala()**: Ίδιο µε το προηγούµενο αλλά για γλυκούς µε γάλα καφέδες!

Μετά από το φτιάξιµο του αντίστοιχου καφέ, κάθε µια από τις παραπάνω συναρτήσεις να εµφανίζει στην οθόνη τη φράση "me gala".

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;

        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        void katastasi();
        void sketos_me_gala(int ar);
        void metrios_me_gala(int ar);
        void glykos_me_gala(int ar);
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera_me_gala::sketos_me_gala(int ar = 1)
{
    gala -= 10 * ar;
    kafetiera::sketos(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::metrios_me_gala(int ar = 1)
{
    gala -= 8 * ar;
    kafetiera::metrios(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::glykos_me_gala(int ar = 1)
{
    gala -= 5 * ar;
    kafetiera::glykos(ar);
    cout << "me gala" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
    cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
    cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    return 0;
}
```

### Βήμα 5

Στη συνάρτηση **main()** φτιάξτε τρεις καφέδες µέτριους µε γάλα και έναν γλυκό µε γάλα από την καφετιέρα **kaf1**. Από την ίδια καφετιέρα φτιάξτε δύο απλούς σκέτους (χωρίς γάλα). Εµφανίστε τη κατάσταση της καφετιέρας **kaf1**.

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;
        
        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        void katastasi();
        void sketos_me_gala(int ar);
        void metrios_me_gala(int ar);
        void glykos_me_gala(int ar);
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera_me_gala::sketos_me_gala(int ar = 1)
{
    gala -= 10 * ar;
    kafetiera::sketos(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::metrios_me_gala(int ar = 1)
{
    gala -= 8 * ar;
    kafetiera::metrios(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::glykos_me_gala(int ar = 1)
{
    gala -= 5 * ar;
    kafetiera::glykos(ar);
    cout << "me gala" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    kaf1.metrios_me_gala(3);
    kaf1.glykos_me_gala();
    kaf1.sketos(2);
    kaf1.katastasi();

    return 0;
}
```

### Βήμα 6

∆ηµιουργήστε µια µέθοδο δόµησης (χωρίς παραµέτρους) για τη κλάση **kafetiera_me_gala**. Η µέθοδος δόµησης θα καταχωρίζει ως ποσότητα γάλακτος 80γρ.

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;
        
        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        void katastasi();
        void sketos_me_gala(int ar);
        void metrios_me_gala(int ar);
        void glykos_me_gala(int ar);
        
        kafetiera_me_gala();
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera_me_gala::kafetiera_me_gala()
{
    gala = 80;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera_me_gala::sketos_me_gala(int ar = 1)
{
    gala -= 10 * ar;
    kafetiera::sketos(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::metrios_me_gala(int ar = 1)
{
    gala -= 8 * ar;
    kafetiera::metrios(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::glykos_me_gala(int ar = 1)
{
    gala -= 5 * ar;
    kafetiera::glykos(ar);
    cout << "me gala" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    kaf1.metrios_me_gala(3);
    kaf1.glykos_me_gala();
    kaf1.sketos(2);
    kaf1.katastasi();

    return 0;
}
```

### Βήμα 7

Θέλουµε να κρατάµε συνολικά το πλήθος των καφετιέρων που δηµιουργούνται στη κλάση **kafetiera_me_gala**. Για αυτό το σκοπό δηµιουργήστε µία νέα µεταβλητή-µέλος της κλάσης την οποία να 'µοιράζονται' όλα τα αντικείµενα της κλάσης. Ονοµάστε τη µεταβλητή-µέλος **plithos** και σκεφτείτε τι ιδιαιτερότητα πρέπει να έχει. Τροποποιήστε κατάλληλα τη µέθοδο δόµησης ώστε κάθε φορά που δηµιουργείται µια νέα 'καφετιέρα µε γάλα' να αυξάνει τη µεταβλητή **plithos** κατά 1.

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;
        
        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        static int plithos;
        void katastasi();
        void sketos_me_gala(int ar);
        void metrios_me_gala(int ar);
        void glykos_me_gala(int ar);
        
        kafetiera_me_gala();
};

int kafetiera_me_gala::plithos = 0;

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera_me_gala::kafetiera_me_gala()
{
    gala = 80;
    plithos++;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera_me_gala::sketos_me_gala(int ar = 1)
{
    gala -= 10 * ar;
    kafetiera::sketos(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::metrios_me_gala(int ar = 1)
{
    gala -= 8 * ar;
    kafetiera::metrios(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::glykos_me_gala(int ar = 1)
{
    gala -= 5 * ar;
    kafetiera::glykos(ar);
    cout << "me gala" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    kaf1.metrios_me_gala(3);
    kaf1.glykos_me_gala();
    kaf1.sketos(2);
    kaf1.katastasi();

    return 0;
}
```

### Βήμα 8

Στη συνέχεια του κώδικα στη συνάρτηση **main()** εµφανίστε το πλήθος των καφετιέρων µε γάλα που έχουν δηµιουργηθεί (δηλαδή το περιεχόµενο της µεταβλητής-µέλος **plithos**). Αµέσως µετά δηµιουργήστε µια νέα 'καφετιέρα µε γάλα' µε όνοµα **kaf2** και εµφανίστε πάλι τη τιµή της µεταβλητής-µέλος **plithos**!

```c++
#include <iostream>

using namespace std;

class kafetiera
{
        int kafes;
        int zaxari;
        int nero;
    public:
        string marka;
        string xroma;

        void katastasi();
        void sketos(int ar);
        void glykos(int ar);
        void metrios(int ar);
        kafetiera();
};

class kafetiera_me_gala :public kafetiera
{
    public:
        int gala;
        static int plithos;
        void katastasi();
        void sketos_me_gala(int ar);
        void metrios_me_gala(int ar);
        void glykos_me_gala(int ar);
        
        kafetiera_me_gala();
};

int kafetiera_me_gala::plithos = 0;

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera_me_gala::kafetiera_me_gala()
{
    gala = 80;
    plithos++;
}

void kafetiera_me_gala::katastasi()
{
    kafetiera::katastasi();
    cout << "Gala  :" << gala << endl;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero  :" << nero << endl;
    cout << "Kafes :" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================"<< endl;
}

void kafetiera_me_gala::sketos_me_gala(int ar = 1)
{
    gala -= 10 * ar;
    kafetiera::sketos(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::metrios_me_gala(int ar = 1)
{
    gala -= 8 * ar;
    kafetiera::metrios(ar);
    cout << "me gala" << endl;
}

void kafetiera_me_gala::glykos_me_gala(int ar = 1)
{
    gala -= 5 * ar;
    kafetiera::glykos(ar);
    cout << "me gala" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero -= 100 * ar;
    kafes -= 10 * ar;
    zaxari -= 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera_me_gala kaf1;

    kaf1.gala = 80;
    kaf1.marka = "MEKAPSES";
    kaf1.xroma = "BLACK";
    kaf1.katastasi();

    kaf1.metrios_me_gala(3);
    kaf1.glykos_me_gala();
    kaf1.sketos(2);
    kaf1.katastasi();

    cout << "Plithos :" << kafetiera_me_gala::plithos << endl;

    kafetiera_me_gala kaf2;

    cout << "Plithos :" << kafetiera_me_gala::plithos << endl;

    return 0;
}
```

### Προσέξτε τα παρακάτω ...

- Ακολουθήστε βήµα-βήµα τα στάδια κάθε άσκησης και µετά από κάθε βήµα δοκιµάζετε το πρόγραµµά σας ώστε να διαπιστώστε ότι τουλάχιστον µέχρι το σηµείο αυτό δουλεύει!
- Μια **παράγωγη** κλάση πρέπει να δηλώνεται µετά από τη δήλωση της βασικής κλάσης.
- Αν µια παράγωγη κλάση έχει ένα µέλος µε ίδιο όνοµα µε κάποιο µέλος της βασικής, τότε λέµε ότι αυτό το µέλος υποσκελίζει το αντίστοιχο µέλος της βασικής κλάσης.
- Αν θέλουµε από τη παράγωγη κλάση να αναφερθούµε σε κάποιο µέλος της βασικής που έχει ίδιο όνοµα (µε κάποιο της παράγωγης), τότε πρέπει πριν από το όνοµά του να αναφέρουµε το όνοµα της βασικής κλάσης: **ονοµα_βασικής::ονοµα_µέλους**
- Τα µέλη µιας κλάσης µπορούν να δηλωθούν ως **στατικά** µε το πρόθεµα **static**.
- Οι **στατικές µεταβλητές-µέλη** µιας κλάσης δεσµεύουν µνήµη µόνο µία φορά και τις "**µοιράζονται**" όλα τα αντικείµενα αυτής της κλάσης.
- Οι στατικές µεταβλητές-µέλη πρέπει να δηλωθούν **και εκτός** της κλάσης ως καθολικές µεταβλητές αλλά µόνο για τη κλάση για την οποία δηλώθηκαν.
- Το προσδιοριστικό **static** χρησιµοποιείται µόνο στη δήλωση του µέλους µέσα στη κλάση.
