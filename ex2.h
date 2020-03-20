#pragma once
#include <iostream>


using namespace std;

//minimal size
struct Seminar2_1
{
	bool ok = false;
	char* c = new char[99];
	int i = 1;
	long j = 1;
	double d = 1;
	long double l = 1;

}v;

//maximal size
struct Seminar2_2
{
	bool not_ok;
	int not_i;
	long not_b;
	double not_d;
	char not_c[99];
	long double not_l;


}w;

//test
void testare()
{
	Seminar2_1 a;
	cout << sizeof(v) << " < ";
	cout << sizeof(w) << "\n";
}