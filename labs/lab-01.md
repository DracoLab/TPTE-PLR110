[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 1

Το περιεχόμενο του 1ου εργαστηρίου είναι το εξής:

- To πρώτο πρόγραµµα σε C++
- Υπολογισµός και εµφάνιση µέσου όρου βαθµών
- Τροποποίηση του προγράµµατος
- ∆ηλώσεις µεταβλητών
- Χρήση βιβλιοθηκών
- Έξοδος στην οθόνη. Χρήση του αντικειµένου `cout`
- Είσοδος από το πληκτρολόγιο. Χρήση του αντικειµένου `cin`
- Εντολή `if`

## Άσκηση 1.1 - Υπολογισμός μέσου όρου τριών βαθμών

Πληκτρολογήστε των κώδικα του προγράµµατος και αποθηκεύστε τον σε ένα αρχείο µε όνοµα `lab1.cpp` στον φάκελο "τα έγγραφά µου". Mεταγλωττίστε και εκτελέστε το πρόγραµµα.

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3;
    float mo;
    b1=8;
    b2=5.5;
    b3=6.5;
    mo=(b1+b2+b3)/3;
    cout << "o mesos oros einai:" << mo << endl;
    return 0;
}
```

### Βήμα 1

Να βρίσκει και να υπολογίζει τον µέσο όρο τεσσάρων βαθµών. Χρησιµοποιήστε ένα κατάλληλο όνοµα και τύπο µεταβλητής στην οποία να καταχωρήστε ως τέταρτο βαθµό το 10. Αποθηκεύστε και εκτελέστε το!

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3,b4;
    float mo;
    b1=8;
    b2=5.5;
    b3=6.5;
    b4=10;
    mo=(b1+b2+b3+b4)/4;
    cout << "o mesos oros einai:" << mo << endl;
    return 0;
}
```

### Βήμα 2

Να εµφανίζει κάτω από τα αποτελέσµατα το όνοµά σας µε λατινικούς χαρακτήρες. Αποθηκεύστε και εκτελέστε το!

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3,b4;
    float mo;
    b1=8;
    b2=5.5;
    b3=6.5;
    b4=10;
    mo=(b1+b2+b3+b4)/4;
    cout << "o mesos oros einai:" << mo << endl;
    cout << "Yoda" << endl;
    return 0;
}
```

### Βήμα 3

Χρησιµοποιήστε ένα κατάλληλο όνοµα και τύπο µεταβλητής στην οποία να καταχωρήστε το έτος γέννησής σας. Σε µια άλλη µεταβλητή να υπολογίζεται και να καταχωρίζεται η ηλικία σας. Τροποποιήστε κατάλληλα το πρόγραµµα ώστε δίπλα από το όνοµά σας (µε ένα κενό διάστηµα) να εµφανίζεται η ηλικία σας!

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3,b4;
    float mo;
    int etos_gennisis,ilikia;
    b1=8;
    b2=5.5;
    b3=6.5;
    b4=10;
    mo=(b1+b2+b3+b4)/4;
    etos_gennisis=2002;
    ilikia=2021-etos_gennisis;
    cout << "o mesos oros einai:" << mo << endl;
    cout << "Yoda - H ilikia moy einai :" << ilikia << endl;
    return 0;
}
```

### Βήμα 4

Τροποποιήστε τώρα το πρόγραµµα ώστε οι τέσσερις βαθµοί να µην δίδονται µέσα στον κώδικα µε τον τελεστή ανάθεσης `=` αλλά να τους δίνει ο χρήστης από το πληκτρολόγιο. Αποθηκεύστε και εκτελέστε το!

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3,b4;
    float mo;
    int etos_gennisis,ilikia;
    cout << "Dose tesseris bathmous :";
    cin >> b1 >> b2 >> b3 >> b4;
    mo=(b1+b2+b3+b4)/4;
    etos_gennisis=2002;
    ilikia=2021-etos_gennisis;
    cout << "o mesos oros einai:" << mo << endl;
    cout << "Yoda - H ilikia moy einai :" << ilikia << endl;
    return 0;
}
```

### Βήμα 5

Προσθέστε των κατάλληλο κώδικα ώστε στην περίπτωση που ο µέσος όρος είναι μικρότερος του 5 να εµφανίζει `Perases` διαφορετικά να εµφανίζει `Kopikes`.

```c++
#include <iostream>
using namespace std;

int main()
{
    float b1,b2,b3,b4;
    float mo;
    int etos_gennisis,ilikia;
    cout << "Dose tesseris bathmous :";
    cin >> b1 >> b2 >> b3 >> b4;
    mo=(b1+b2+b3+b4)/4;
    etos_gennisis=2002;
    ilikia=2021-etos_gennisis;
    cout << "o mesos oros einai:" << mo << endl;
    if (mo>=5)
        cout<<"Perases"<<endl;
    else
        cout<<"Kopikes"<<endl;
    cout << "Yoda - H ilikia moy einai :" << ilikia << endl;
    return 0;
}
```

### Βήμα 6

Αφαιρέστε την πρόταση `using namespace std;`. Τροποποιήστε κατάλληλα το πρόγραµµα ώστε να εξακολουθεί να δουλεύει. Αποθηκεύστε και εκτελέστε το!

```c++
#include <iostream>

int main()
{
    float b1,b2,b3,b4;
    float mo;
    int etos_gennisis,ilikia;
    std::cout << "Dose tesseris bathmous :";
    std::cin >> b1 >> b2 >> b3 >> b4;
    mo=(b1+b2+b3+b4)/4;
    etos_gennisis=2002;
    ilikia=2021-etos_gennisis;
    std::cout << "o mesos oros einai:" << mo << std::endl;
    if (mo>=5)
        std::cout<<"Perases"<<std::endl;
    else
        std::cout<<"Kopikes"<<std::endl;
    std::cout << "Yoda - H ilikia moy einai :" << ilikia << std::endl;
    return 0;
}
```
