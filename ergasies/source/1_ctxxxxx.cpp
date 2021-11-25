// Onomatepwnymo1 ctxxxxx
// Onomatepwnymo2 ctxxxxx

#include <iostream>

using namespace std;

void calcDay(int day, int month, int year);
void myInfo(string name, string ct);
void dispChar(int num, char ch);
void dispChar(int stars);
bool leapYear(int etos);
void dispChar();

int main()
{
    int H, M, E;
    do
    {
        cout << "Dwse Hmera: ";
        cin >> H;
        if (H <= 0) exit(1);
        cout << "Dwse Mina: ";
        cin >> M;
        cout << "Dwse Etos: ";
        cin >> E;
        calcDay(H, M, E);
    }while(H > 0);
    myInfo("Onomatepwnymo", "ctxxxxx");
    dispChar(40);
    dispChar();
    return 0;
}

bool leapYear(int etos)
{
    if ((etos % 4 == 0 && etos % 100 != 0) || etos % 400 == 0)
        return true;
    else
        return false;
}

void calcDay(int day, int month, int year)
{
    int D, x;
    int A = 365 * (year - 1);
    int B1 = (year - 1) / 4;
    int B2 = -(year - 1) / 100;
    int B3 = (year - 1) / 400;
    int C = (367 * month - 362) / 12;
    if (month <= 2)
        D = 0;
    else if (month > 2 && leapYear(year))
        D = -1;
    else
        D = -2;
    int S = A + B1 + B2 + B3 + C + D + day;
    x = S % 7;
    dispChar(40, '=');
    if (x == 0) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Kyriaki.\n";
    else if (x == 1) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Deutera.\n";
    else if (x == 2) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Triti.\n";
    else if (x == 3) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Tetarti.\n";
    else if (x == 4) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Pempti.\n";
    else if (x == 5) cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Paraskeui.\n";
    else cout << "Stis " << day << "/" << month << "/" << year << " h imera einai Savvato.\n";
    dispChar(40, '-');
}

void myInfo(string name, string ct)
{
    dispChar(38, '#');
    cout << "Kwdikos: " << ct << endl;
    cout << "Onoma: " << name << endl;
    dispChar(38, '#');
}

void dispChar(int num, char ch)
{
    int i;
    for(i = 0; i < num; i++)
        putchar(ch);
    putchar('\n');
}

void dispChar(int stars)
{
    int i;
    for(i = 0; i < stars; i++)
        putchar('*');
    putchar('\n');
}

void dispChar()
{
    int i;
    for(i = 0; i < 50; i++)
        putchar('!');
}
