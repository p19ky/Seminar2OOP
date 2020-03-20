#pragma once
#include <iostream>
#include <string>

using namespace std;


char* strfind(const char* s, const char* f)
{
    int i = 0;
    while (i < strlen(f))
    {
        int j = 0;
        int aux = i;
        while (f[i] == s[j] && j < strlen(s))
        {
            j++;
            i++;
        }
        if (j == strlen(s))
        {
            return const_cast<char*>(&f[aux]);
        }
        i++;
    }
    return NULL;
}