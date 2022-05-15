# Εισαγωγικό Εργαστήριο

Το περιεχόμενο του εισαγωγικού εργαστηρίου είναι το εξής:

- Εξοικείωση µε το περιβάλλον του DEV C++
- Συγγραφή προγράµµατος
- Αποθήκευση
- Εκτέλεση προγράµµατος
- Εκτελέσιµα αρχεία

## Το ολοκληρωµένο περιβάλλον (IDE) του DEV C++

Για να δηµιουργήσουµε ένα νέο πηγαίο αρχείο κώδικα επιλέγουµε: **Αρχείο** &rarr; **∆ηµιουργία** &rarr; **Πηγαίος κώδικας**.

### Βήμα 1

Πληκτρολογείστε τον κώδικα του προγράµµατος. Προσέχουμε τις εσοχές ώστε ο κώδικας να είναι ευανάγνωστος.

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ar,ta;
    srand(time(NULL));
    ta=rand()%1000+1;
    do
    {
    cout<<"Dose enan arithmo apo to 1 mexri to 1000 >";
    cin>>ar;
    if (ar>ta) cout<<"Pio mikros"<<endl;
    else if (ar<ta) cout<<"Pio megalos"<<endl;
    } while (ta!=ar);
    cout<<"BRAVO to brikes"<<endl;
    return 0;
}
```

### Βήμα 2

Από το **Αρχείο** &rarr; **Αποθήκευση** αποθηκεύουµε το αρχείο µε όνοµα της αρεσκείας µας και τύπο **C++ source files**. Το αρχείο µας αποκτά προέκταση `.cpp`. Να θυµάστε επίσης, το όνοµα του φακέλου στον οποίο το αποθηκεύσατε (π.χ, My documents).

### Βήμα 3

Κάνοντας κλικ επάνω στο εικονίδιο **Μεταγλώττιση & Εκτέλεση**, µεταγλωττίζεται και εκτελείται το πρόγραµµά µας! Σε ένα παράθυρο κονσόλας εμφανίζονται τα αποτελέσματα του προγράμματος! Στο τέλος πατάμε οποιοδήποτε πλήκτρο για να επιστρέψουμε.

### Βήμα 4

Τώρα θέλω να βγείτε από το περιβάλλον του DEV C++ και να **εντοπίστε** το εκτελέσιµο αρχείο που δηµιουργήσατε. Το αρχείο θα έχει όνοµα **xxxx.exe** όπου xxxx το όνοµα που δώσατε στο πηγαίο .cpp αρχείο του προγράµµατος σας. Το εκτελέσιµο αρχείο θα βρίσκεται στον **ίδιο** φάκελο µε αυτόν που αποθηκεύσατε το πηγαίο αρχείο. ΕΚΤΕΛΕΣΤΕ ΤΟ!

### Βήμα 5

Χωρίς ακόµα να το έχετε διδαχθεί, µελετήστε το πρόγραµµα και σκεφτείτε µια πρόταση που αν την προσθέσετε στο πρόγραµµα σας θα εµφανίζει στην αρχή το όνοµά σας. Προσθέστε την στη κατάλληλη θέση, µεταγλωττίσετε και εκτελέστε το πρόγραµµα.

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ar,ta;
    srand(time(NULL));
    ta=rand()%1000+1;
    cout<<"Yoda"<<endl;
    do
    {
    cout<<"Dose enan arithmo apo to 1 mexri to 1000 >";
    cin>>ar;
    if (ar>ta) cout<<"Pio mikros"<<endl;
    else if (ar<ta) cout<<"Pio megalos"<<endl;
    } while (ta!=ar);
    cout<<"BRAVO to brikes"<<endl;
    return 0;
}
```

### Βήμα 6

∆ιαγράψτε την πρόταση `return 0;` και τον τύπο `int` από την `main()`. Αποθηκεύστε, µεταγλωττίσετε και εκτελέστε το πρόγραµµα. Τι παρατηρήσατε;

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

main()
{
    int ar,ta;
    srand(time(NULL));
    ta=rand()%1000+1;
    cout<<"Yoda"<<endl;
    do
    {
    cout<<"Dose enan arithmo apo to 1 mexri to 1000 >";
    cin>>ar;
    if (ar>ta) cout<<"Pio mikros"<<endl;
    else if (ar<ta) cout<<"Pio megalos"<<endl;
    } while (ta!=ar);
    cout<<"BRAVO to brikes"<<endl;
}
```

### Βήμα 7

∆ιαγράψτε την πρόταση `using namespace std;`. Αποθηκεύστε, µεταγλωττίσετε και εκτελέστε το πρόγραµµα. Τι παρατηρήσατε; Κάντε τις απαραίτητες προσθήκες ώστε το πρόγραµµα να µεταγλωττίζεται σωστά χωρίς τη πρόταση `using namespace std;`.

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

main()
{
    int ar,ta;
    srand(time(NULL));
    ta = rand()%1000+1; 
    std::cout<<"Yoda"<<std::endl; 
    do
    {
        std::cout<<"Dose enan arithmo apo to 1 mexri to 1000 >";
        std::cin>>ar;
        if (ar>ta) std::cout<<"Pio mikros"<<std::endl;
        else if (ar<ta) std::cout<<"Pio megalos"<<std::endl;
    } while (ta!=ar);
    std::cout<<"BRAVO to brikes"<<std::endl;
}
```
