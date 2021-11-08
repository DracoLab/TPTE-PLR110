[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 3

Το περιεχόμενο του 3ου εργαστηρίου είναι το εξής:

- Ορισµός και κλήση συναρτήσεων
- Υπερφόρτωση συναρτήσεων

## Άσκηση 3.1 - SMS

Μια εταιρεία κινητής τηλεφωνίας χρεώνει τα SMS που στέλνουµε σύµφωνα µε τον πίνακα που ακολουθεί.

|SMS το µήνα|Τιµή ανά SMS|
|:-|:-:|
|µέχρι 1000|1 λεπτό|
|περισσότερα από 1000 και µέχρι 3000|0.8 λεπτά|
|περισσότερα από 3000 και µέχρι 5000|0.65 λεπτά|
|πάνω από 5000|0.5 λεπτά|

### Βήμα 1

Να γραφεί πρόγραµµα το οποίο θα ζητάει να πληκτρολογούµε το πλήθος των SMS που στείλαµε και θα υπολογίζει το ποσό που πρέπει να πληρώσουµε σε ευρώ. Ο υπολογισµός του ποσού πρέπει να υλοποιείται από µια συνάρτηση στην οποία θα µεταβιβάζεται το πλήθος των SMS. Η χρέωση δεν θα είναι κλιµακωτή!

```c++
#include <iostream>

float poso(int s);

using namespace std;

int main()
{
    float poso_sms;
    int sms;
    cout << "Dose plithos SMS : ";
    cin >> sms;
    poso_sms=poso(sms);
    cout << "POSO XREOSIS : " << poso_sms << endl;
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}
```

Το ποσό που θα πληρώσουµε επιβαρύνεται µε φόρο επικοινωνίας ανάλογα µε το ύψος του και σύµφωνα µε τον ακόλουθο πίνακα:

|Ποσό πληρωµής|Ποσοστό φόρου|
|:-|:-:|
|µέχρι 5€|10%|
|περισσότερα από 5€ και µέχρι 10€|15%|
|πάνω από 10€|20%|

### Βήμα 2

Ο υπολογισµός του φόρου θα πρέπει να υλοποιηθεί από µια δεύτερη συνάρτηση στην οποία θα µεταβιβάζεται το ποσό πληρωµής.

```c++
#include <iostream>

float poso(int s);
float foros(float p);

using namespace std;

int main()
{
    float poso_sms,foros_sms;
    int sms;
    cout << "Dose plithos SMS : ";
    cin >> sms;
    poso_sms=poso(sms);
    foros_sms=foros(poso_sms);
    cout << "======================================" << endl;
    cout << "POSO XREOSIS : " << poso_sms << endl;
    cout << "POSO FOROY   : " << foros_sms << endl;
    cout << "======================================" << endl;
    cout << "SYNOLO       : " << poso_sms + foros_sms << endl;
    cout << "**************************************" <<endl;
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}

float foros(float p)
{
    float f;
    if (p<=5)
        f=p*10/100;
    else if (p<=10)
        f=p*15/100;
    else
        f=p*20/100;
    return f;
}
```

### Βήμα 3

Το πρόγραµµα κατά την εµφάνιση των αποτελεσµάτων εµφανίζει µια γραµµή µε 40  αστεράκια. Τροποποιήστε το πρόγραµµα ώστε να καλεί την παρακάτω συνάρτηση για να εµφανίσει τη γραµµή µε τα 40 αστεράκια!

```c++
#include <iostream>

float poso(int s);
float foros(float p);
void print_line();

using namespace std;

int main()
{
    float poso_sms,foros_sms;
    int sms;
    cout << "Dose plithos SMS : ";
    cin >> sms;
    poso_sms=poso(sms);
    foros_sms=foros(poso_sms);
    cout << "======================================" << endl;
    cout << "POSO XREOSIS : " << poso_sms << endl;
    cout << "POSO FOROY   : " << foros_sms << endl;
    cout << "======================================" << endl;
    cout << "SYNOLO       : " << poso_sms + foros_sms << endl;
    print_line();
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}

float foros(float p)
{
     float f;
     if (p<=5)
         f=p*10/100;
     else if (p<=10)
         f=p*15/100;
     else
         f=p*20/100;
     return f;
}

void print_line()
{
    int i;
    for (i=1;i<=40;i++) cout << "*";
    cout << endl;
}
```

### Βήμα 4

Υπερφορτώστε τη συνάρτηση print_line() ώστε όταν καλείται µε µία παράµετρο τύπου `char` να εµφανίζει 40 φορές τον χαρακτήρα της παραµέτρου.

```c++
#include <iostream>

float poso(int s);
float foros(float p);
void print_line();
void print_line(char ch);

using namespace std;

int main()
{
    float poso_sms,foros_sms;
    int sms;
    cout << "Dose plithos SMS : ";
    cin >> sms;
    poso_sms=poso(sms);
    foros_sms=foros(poso_sms);
    cout << "======================================" << endl;
    cout << "POSO XREOSIS : " << poso_sms << endl;
    cout << "POSO FOROY   : " << foros_sms << endl;
    cout << "======================================" << endl;
    cout << "SYNOLO       : " << poso_sms + foros_sms << endl;
    print_line();
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}

float foros(float p)
{
     float f;
     if (p<=5)
         f=p*10/100;
     else if (p<=10)
         f=p*15/100;
     else
         f=p*20/100;
     return f;
}

void print_line()
{
    int i;
    for (i=1;i<=40;i++) cout << "*";
    cout << endl;
}

void print_line(char ch)
{
    int i;
    for (i=1;i<=40;i++) cout << ch;
    cout << endl;
}
```

### Βήμα 5

Τροποποιήστε το πρόγραµµα ώστε και η εµφάνιση της γραµµής µε τον χαρακτήρα `=` να γίνεται µε κλήση της υπερφορτωµένης συνάρτησης `print_line()`.

```c++
#include <iostream>

float poso(int s);
float foros(float p);
void print_line();
void print_line(char ch);

using namespace std;

int main()
{
    float poso_sms,foros_sms;
    int sms;
    cout << "Dose plithos SMS : ";
    cin >> sms;
    poso_sms=poso(sms);
    foros_sms=foros(poso_sms);
    print_line('=');
    cout << "POSO XREOSIS : " << poso_sms << endl;
    cout << "POSO FOROY   : " << foros_sms << endl;
    print_line('=');
    cout << "SYNOLO       : " << poso_sms + foros_sms << endl;
    print_line();
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}

float foros(float p)
{
     float f;
     if (p<=5)
        f=p*10/100;
     else if (p<=10)
         f=p*15/100;
     else
         f=p*20/100;
     return f;
}

void print_line()
{
    int i;
    for (i=1;i<=40;i++) cout << "*";
    cout << endl;
}

void print_line(char ch)
{
    int i;
    for (i=1;i<=40;i++) cout << ch;
    cout << endl;
}
```

### Βήμα 6

Τροποποιήστε το πρόγραµµα ώστε να έχει επαναληπτική λειτουργία η οποία θα σταµατάει όταν το συνολικό ποσό που έχουµε ξοδέψει υπερβεί τα 100€!

```c++
#include <iostream>

float poso(int s);
float foros(float p);
void print_line();
void print_line(char ch);

using namespace std;

int main()
{
    float poso_sms,foros_sms;
    float synolo=0;
    int sms;
    do
    {
        cout << "Dose plithos SMS : ";
        cin >> sms;
        poso_sms=poso(sms);
        foros_sms=foros(poso_sms);
        print_line('=');
        cout << "POSO XREOSIS : " << poso_sms << endl;
        cout << "POSO FOROY   : " << foros_sms << endl;
        print_line('=');
        cout << "SYNOLO       : " << poso_sms + foros_sms << endl;
        print_line();
        synolo = synolo +  poso_sms + foros_sms;
    } while (synolo<=100);
    return 0;
}

float poso(int s)
{
     float p;
     if (s<=1000)
         p=s*1;
     else if (s<=3000)
         p=s*0.8;
     else if (s<=5000)
         p=s*0.65;
     else
         p=s*0.5;
     return p/100;
}

float foros(float p)
{
     float f;
     if (p<=5)
         f=p*10/100;
     else if (p<=10)
         f=p*15/100;
     else
         f=p*20/100;
     return f;
}

void print_line()
{
    int i;
    for (i=1;i<=40;i++) cout << "*";
    cout << endl;
}

void print_line(char ch)
{
    int i;
    for (i=1;i<=40;i++) cout << ch;
    cout << endl;
}
```

### Προσέξτε τα παρακάτω ...

- Το ποσό πληρωµής πρέπει να είναι σε ευρώ. Όταν βρούµε το συνολικό κόστος των SMS σε λεπτά πρέπει να το µετατρέψουµε σε ευρώ.
- Το πλήθος των SMS θα ζητείται από την main(). H main() επίσης θα εµφανίζει και τα αποτελέσµατα.
- Φτιάξτε πρώτα τις συναρτήσεις και µετά το υπόλοιπο πρόγραµµα. Αυτό θα σας βοηθήσει να καταλάβετε ότι µια συνάρτηση είναι ένα ανεξάρτητο και αυτόνοµο τµήµα κώδικα.
- Μην ξεχάστε την πρόσθια δήλωση. Αν οι συναρτήσεις σας ορίζονται µετά από τη main(), θα πρέπει να δηλωθούν και πριν από αυτή (µόνο το πρότυπο της συνάρτησης χωρίς το σώµα της).

## Άσκηση 3.2 - Φοιτητές

Θέλουµε να φτιάξουµε ένα πρόγραµµα το οποίο θα διαχειρίζεται τα ονόµατα και τους βαθµούς φοιτητών. Το πλήθος των φοιτητών θα καθορίζεται από τη σταθερά SIZE η οποία θα ορίζεται µε την οδηγία #define και θα έχει αρχικά τη τιµή 10.

### Βήμα 1

Να γραφεί πρόγραµµα το οποίο θα ζητάει να πληκτρολογούµε το όνοµα και τον βαθµό κάθε φοιτητή. Τα στοιχεία αυτά θα πρέπει να τα καταχωρίζει σε κατάλληλους πίνακες τους οποίους θα πρέπει να δηλώσετε στη συνάρτηση main().

```c++
#include <iostream>
#define SIZE 10
using namespace std;

int main()
{
    string onoma[SIZE];
    float bath[SIZE];
    int i;
    for (i=0;i<SIZE;i++)
    {
        cout << "Dose onoma : ";
        cin >> onoma[i];
        cout << "Dose bathmo : ";
        cin >> bath[i];
        cout <<"-------------------"<<endl;
    }
    return 0;
}
```

### Βήμα 2

Τέλος το πρόγραµµα θα πρέπει να εµφανίζει τα ονόµατα και τους βαθµούς όλων των φοιτητών. Κάτω από τη λίστα των φοιτητών θα πρέπει να εµφανίζει τον συνολικό µέσο όρο τους, τον µεγαλύτερο και τον µικρότερο βαθµό.

```c++
#include <iostream>
#define SIZE 10
using namespace std;

int main()
{
    string onoma[SIZE];
    float bath[SIZE],mx,mn,mo,sum=0;
    int i;
    for (i=0;i<SIZE;i++)
    {
        cout << "Dose onoma : ";
        cin >> onoma[i];
        cout << "Dose bathmo : ";
        cin >> bath[i];
        cout <<"-------------------"<<endl;
    }
    mx=mn=bath[0];
    for (i=0;i<SIZE;i++)
    {
        cout<<onoma[i]<<" "<<bath[i]<<endl;
        sum=sum+bath[i];
        if (bath[i]>mx)
            mx=bath[i];
        if (bath[i]<mn)
            mn=bath[i];
    }
    mo=sum/SIZE;
    cout << "================================================" << endl;
    cout << "Mesos oros : " << mo << " Megistos : "<<mx<<" Elaxistos : "<<mn << endl;
    cout << "================================================" << endl;
    return 0;
}
```
