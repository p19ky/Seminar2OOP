#include <iostream>
#include <string>
#include <fstream>
#include "ex1.h"
#include "ex2.h"
#include "ex4.h"
#include "ex6.h"
#include <assert.h>

using namespace std;


int main()
{   //test1
    cout << "test ex1 start>>>\n";
    char s[10] = "ea";
    char v[10] = "neam";
    char* r = strfind(s, v);
    cout << " " << r << "\n";
    cout << "test ex1 end>>>\n";

    //test2
    cout << "test ex2 start>>>\n";
    testare();
    cout << "test ex2 end>>>\n";

    //test4
    cout << "test ex4 start>>>\n";
    char a[10] = "xyz123456";
    new_strlen(a);
    cout << "a before copy: " << a << "\n";
    char b[10] = "abcdefg";
    new_strcpy(a, b);
    cout << "a after copy: " << a << "\n";
    cout << "test ex4 end>>>\n";
    
    //test6,7,8
    cout << "test ex6 start>>>\n";
    Konto BRD;
    BRD.Einzahlen(50);
    BRD.InReader();
    BRD.Bezahlen(10);
    BRD.Restbetrag();

    cout << "test ex6 end>>>\n";


}

