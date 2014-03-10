#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int change(char a)
{
     int ascii = (int)a;

     if(ascii == 88)
              ascii = 65;
     else if(ascii == 89)
              ascii = 66;
     else if(ascii == 90)
              ascii = 67;

     else if(ascii == 120)
              ascii = 97;
     else if(ascii == 121)
            ascii = 98;
     else if(ascii == 122)
            ascii = 99;
     else if(ascii == 32)
            ascii = 32;
        else
            ascii += 3;

     return ascii;
}

int main()
{
    string input1;

    getline(cin, input1);

    int l1 = input1.size();

    char newa;

    for(int i = 0; i < l1; i++)
    {
            newa = change(input1[i]);
            cout << newa;
    }

    getch();
    return 0;
}
