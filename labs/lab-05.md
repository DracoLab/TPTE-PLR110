[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 5

Το περιεχόμενο του 5ου εργαστηρίου είναι το εξής:

- Κλάσεις και αντικείµενα
- Ορισµός κλάσης και δηµιουργία αντικειµένων
- Μεταβλητές-µέλη και µέθοδοι της κλάσης
- Πρόσβαση στα µέλη µιας κλάσης
- Μέθοδοι δόµησης και αποδόµησης
- Υπερφόρτωση µεθόδων δόµησης

## Άσκηση 5.1 - Τροποποίηση της κλάσης Καφετιέρα

Αντικείµενο του σηµερινού προγράµµατος είναι η µοντελοποίηση αντικειµένων **ΚΑΦΕΤΙΕΡΑΣ**. Θα προσπαθήσουµε να προσοµοιάσουµε τη λειτουργία µιας καφετιέρας µέσω των εργαλείων που διαθέτει η C++. Οι καφετιέρες που θα φτιάξουµε θα κάνουν σκέτο, µέτριο και γλυκό καφέ!
Κάθε καφετιέρα θα έχει τα ακόλουθα χαρακτηριστικά:

Η κλάση kafetiera έχει τις ακόλουθες µεταβλητές-µέλη:

**Χρώµα**: Προσδιορίζει το χρώµα της π.χ Ροζ
**Μάρκα**: Προσδιορίζει τη µάρκα της π.χ Philips
**Νερό**: Προσδιορίζει σε γραµµάρια τη ποσότητα
του νερού που έχει µέσα η καφετιέρα
**Ζάχαρη**: Προσδιορίζει σε γραµµάρια τη ποσότητα
της ζάχαρης που έχει µέσα η καφετιέρα
**Καφές**: Προσδιορίζει σε γραµµάρια τη ποσότητα
του καφέ που έχει µέσα η καφετιέρα

και τις ακόλουθες µεθόδους:

**Γέµισµα**: Γεµίζει την καφετιέρα µε υλικά: 1000γρ νερό, 200γρ ζάχαρη και 100γρ καφέ
**Σκέτος**: Φτιάχνει έναν ή περισσότερους σκέτους καφέδες. Κάθε σκέτος καφές χρησιµοποιεί 100γρ νερού και 15γρ καφέ.
**Μέτριος**: Φτιάχνει έναν ή περισσότερους µέτριους καφέδες. Κάθε µέτριος καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 10 γρ ζάχαρη.
**Γλυκός**: Φτιάχνει έναν ή περισσότερους γλυκούς καφέδες. Κάθε γλυκός καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 20 γρ ζάχαρη
**Κατάσταση**: Μας εµφανίζει τις ποσότητες υλικών που έχουν µείνει στη καφετιέρα

### Βήμα 1

Κατεβάστε το αρχείο **kodikas5.zip** και αντιγράψτε όλα τα αρχεία που περιέχει στην επιφάνεια εργασίας σας. Το αρχείο **Lab5_1.cpp** περιέχει τη κλάση **kafetiera** την οποία πρέπει να τροποποιήσουµε Ανοίξτε το µε το περιβάλλον του DEV C++.
Μελετήστε τη κλάση **kafetiera**, τις µεθόδους της καθώς και τη χρήση της στη συνάρτηση main(). Εκτελέστε το πρόγραµµα και κατανοήστε τα αποτελέσµατα που εµφανίζει.

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
    void glykos(int ar);
    void metrios(int ar);
};

void kafetiera::gemisma()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma << endl;
    cout << "================" << endl;
    cout << "Nero:" << nero << endl;
    cout << "Kafes:" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera kaf1, kaf2;
    kaf1.marka = "Philips";
    kaf1.xroma = "Roz";
    kaf2.marka = "Kenwood";
    kaf2.xroma = "Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    cout << "***********************************" << endl << endl;
    return 0;
}
```

### Βήμα 2

Η κλάση **kafetiera** δεν διαθέτει µέθοδο δόµησης πράγµα που σηµαίνει ότι µόλις δηµιουργηθεί ένα νέο αντικείµενο-καφετιέρα οι µεταβλητές-µέλη του έχουν απροσδιόριστες τιµές.
Προσθέστε στη κλάση **kafetiera** µια µέθοδο **δόµησης**, η οποία θα πρέπει να γεµίζει την καφετιέρα µε υλικά, και συγκεκριµένα : 1000γρ νερό, 200γρ ζάχαρη και 100γρ καφέ.
Επιλέξτε το κατάλληλο όνοµα για τη µέθοδο δόµησης.
Στη συνάρτηση main(), κάτω από τον υπάρχοντα κώδικα, δηµιουργήστε ένα νέο αντικείµενο **kafetiera** µε όνοµα **kaf3**. Αµέσως µετά εµφανίστε τη κατάσταση του αντικειµένου kaf3 εφαρµόζοντας την κατάλληλη µέθοδο. Δούλεψε η µέθοδος δόµησης?

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
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::gemisma()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma<< endl;
    cout << "================" << endl;
    cout << "Nero:" << nero << endl;
    cout << "Kafes:" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera kaf1, kaf2;
    kaf1.marka = "Philips";
    kaf1.xroma = "Roz";
    kaf2.marka = "Kenwood";
    kaf2.xroma = "Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    kafetiera kaf3;
    kaf3.katastasi();
    cout << "***********************************" << endl << endl;
    return 0;
}
```

### Βήμα 3

Τώρα θα υπερφορτώσουµε τη µέθoδο δόµησης ακόµα δύο φορές:

**Με δύο παραµέτρους τύπου string**.
*Αυτή η έκδοση της µεθόδου δόµησης θα καταχωρίζει τη πρώτη παράµετρο ως µάρκα της καφετιέρας και τη δεύτερη ως χρώµα. Θα γεµίζει επίσης τη καφετιέρα µε ποσότητες όπως αναφέρθηκαν στο βήµα 2.*
**Με τρεις παραµέτρους ακέραιους αριθµούς**
*Αυτή η έκδοση της µεθόδου δόµησης θα καταχωρίζει τις τιµές των παραµέτρων ως ποσότητες των υλικών της καφετιέρας µε τη σειρά: νερό, ζάχαρη και καφές*
Στη συνάρτηση main(), κάτω από τον υπάρχοντα κώδικα, δηµιουργήστε δύο νέα αντικείµενα **kafetiera** µε ονόµατα **kaf4** και **kaf5** µε τρόπο ώστε να καλούνται οι δύο παραπάνω εκδόσεις της υπερφορτωµένης µεθόδου δόµησης. Επιλέξτε εσείς τις τιµές που θα δώσετε. Αµέσως µετά εµφανίστε τη κατάσταση των δύο αντικειµένων. Δούλεψαν οι υπερφορτωµένες εκδόσεις της µεθόδου δόµησης?

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
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
    kafetiera(string p_marka, string p_xroma);
    kafetiera(int p_nero, int p_zaxari, int p_kafes);
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera::kafetiera(string p_marka, string p_xroma)
{
    marka = p_marka;
    xroma = p_xroma;
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera::kafetiera(int p_nero, int p_zaxari, int p_kafes)
{
    nero = p_nero;
    zaxari = p_zaxari;
    kafes = p_kafes;
}

void kafetiera::gemisma()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma<< endl;
    cout << "================" << endl;
    cout << "Nero:" << nero << endl;
    cout << "Kafes:" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera kaf1, kaf2;
    kaf1.marka = "Philips";
    kaf1.xroma = "Roz";
    kaf2.marka = "Kenwood";
    kaf2.xroma = "Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    kafetiera kaf3;
    kaf3.katastasi();
    kafetiera kaf4("Bosch", "Mauro"), kaf5(1800, 450, 350);
    kaf4.katastasi();
    kaf5.katastasi();
    cout << "***********************************" << endl << endl;
    return 0;
}
```

### Βήμα 4

Προσθέστε στη κλάση **kafetiera** µια µέθοδο αποδόµησης. Η µέθοδος θα πρέπει να εµφανίζει τη µάρκα της καφετιέρας ακολουθούµενη από το µήνυµα: `"Kafetiera is now dead!"`. Τρέξτε το πρόγραµµα και δείτε τι εµφανίζει. Εξηγήστε το

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
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
    kafetiera(string p_marka, string p_xroma);
    kafetiera(int p_nero, int p_zaxari, int p_kafes);
    ~kafetiera();
};

kafetiera::kafetiera()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera::kafetiera(string p_marka, string p_xroma)
{
    marka = p_marka;
    xroma = p_xroma;
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

kafetiera::kafetiera(int p_nero, int p_zaxari, int p_kafes)
{
    nero = p_nero;
    zaxari = p_zaxari;
    kafes = p_kafes;
}

kafetiera::~kafetiera()
{
    cout << marka << " Kafetiera is now dead!" << endl;
}

void kafetiera::gemisma()
{
    nero = 1000;
    kafes = 100;
    zaxari = 200;
}

void kafetiera::katastasi()
{
    cout << marka << " " << xroma<< endl;
    cout << "================" << endl;
    cout << "Nero:" << nero << endl;
    cout << "Kafes:" << kafes << endl;
    cout << "Zaxari:" << zaxari << endl;
    cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 15 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " sketoi ....." << endl;
    else
        cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 20 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " glykoi ....." << endl;
    else
        cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
    nero = nero - 100 * ar;
    kafes = kafes - 10 * ar;
    zaxari = zaxari - 10 * ar;
    if (ar > 1)
        cout << "eftasan oi " << ar << " metrioi ....." << endl;
    else
        cout << "eftase o metrios ....." << endl;
}

int main()
{
    kafetiera kaf1, kaf2;
    kaf1.marka = "Philips";
    kaf1.xroma = "Roz";
    kaf2.marka = "Kenwood";
    kaf2.xroma = "Blue";
    kaf1.gemisma();
    kaf2.gemisma();
    kaf1.katastasi();
    kaf2.katastasi();
    kaf1.metrios(2);
    kaf2.sketos();
    kaf2.glykos(3);
    kaf1.katastasi();
    kaf2.katastasi();
    kafetiera kaf3;
    kaf3.katastasi();
    kafetiera kaf4("Bosch", "Mauro"), kaf5(1800, 450, 350);
    kaf4.katastasi();
    kaf5.katastasi();
    cout << "***********************************" << endl << endl;
    return 0;
}
```

## Άσκηση 5.2 - Ας παίξουµε χαρτιά

Χρονιάρες µέρες έρχονται και όλο θα παίξουµε καµιά 31, καµιά 21, κανένα ποκεράκι! Ο Άγιος Βασίλης της Πολιτισµικής Τεχνολογίας µας λυπήθηκε και µας έφερε ένα δώρο ... την κλάση **trapoula**!

Η κλάση **trapoula** έχει την ακόλουθη διεπαφή:

µια µεταβλητή-µέλος:
xroma : Προσδιορίζει το χρώµα της π.χ Ροζ
και τις ακόλουθες µεθόδους:
**suffle(n)** : Ανακατεύει την τράπουλα **n** φορές
**display()** : Εµφανίζει τα χαρτιά που έχουν µείνει στην τράπουλα
**get_card(n)** : Τραβάει **n** χαρτιά από την τράπουλα. Επιστρέφει ως τιµή το άθροισµα των πόντων των χαρτιών

### Βήμα 1

Το αρχείο κεφαλίδας **trapoula.h**, που φυσιολογικά έχετε αντιγράψει στην επιφάνεια εργασίας σας, περιέχει τον ορισµό της κλάσης **trapoula**. Δηµιουργήστε ένα νέο πηγαίο αρχείο και κάνετε **include** το συγκεκριµένο αρχείο κεφαλίδας Χρησιµοποιείστε εισαγωγικά `""` και όχι `<>` για να περικλείσετε το όνοµα του αρχείου. Δεδοµένου ότι το αρχείο κεφαλίδας πρέπει να βρίσκεται στον ίδιο φάκελο µε το πηγαίο αρχείο, αποθηκεύστε το πηγαίο αρχείο επίσης στην επιφάνεια εργασίας σας. Στη συνάρτηση main() δηµιουργήστε ένα αντικείµενο κλάσης **trapoula** µε όνοµα **pack1**. Εµφανίστε τα χαρτιά της τράπουλας. Ανακατέψτε την 10 φορές και ξαναεµφανίστε τα χαρτιά που περιέχει. Ανακατέψτε ξανά την τράπουλα 5 φορές

```c++

```

### Βήμα 2

Θα παίξουµε τώρα 31 (ε σχεδόν τριανταµία) ! Υποθέτουµε ότι ο άσσος (Α) µετράει πάντα 1 πόντο. Υποθέτουµε επίσης ότι κάνουµε τη µάνα. Τραβήξτε τρία χαρτιά µαζεµένα. Αν το σύνολο των πόντων είναι µικρότερο ή ίσο µε 24 ξανατραβήξτε ένα-ένα χαρτί µέχρι να βγάλετε άθροισµα πόντων πάνω από 24. Αν βγάλατε πάνω από 31 εµφανίστε "kaika" αν βγάλατε 31 εµφανίστε "Kerdisa" διαφορετικά εµφανίστε "Exo xx pontous" όπου xx οι πόντοι που έχετε.

```c++

```

### Βήμα 3

Φτιάξτε µια συνάρτηση η οποία θα **επιστρέφει ως τιµή ένα αντικείµενο-τράπουλα** (κλάσης trapoula) χρώµατος "red" και ανακατεµένη 50 φορές!. Καλέστε τη συνάρτηση στη main(), καταχωρήστε το αντικείµενο που επιστρέφει, και δείτε τα χαρτιά που περιέχει!

```c++

```
