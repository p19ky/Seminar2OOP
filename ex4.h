#pragma once
#include <iostream>

using namespace std;

int new_strlen(const char* s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	cout << "size of given string/char " << s << " is: " << i << "\n";
	return i;
}

char* new_strcpy(char* v, const char* w)
{
	int i = 0;
	const char* stored = w;
	do
	{
		v[i++] = w[i];
	} while (w[i] != '\0');


	cout << "copied\n";
	return v;
}