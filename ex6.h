#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



class Konto
{
public:
	Konto();
	Konto(const double& m);
	void Bezahlen(const double& preis);
	void Einzahlen(const double& incoming);
	void Restbetrag();
	void InReader();

private:
	double current;
};

Konto::Konto()
{
	current = 0;
}

Konto::Konto(const double& m)
{
	current = m;
}

void Konto::Bezahlen(const double& preis)
{
	if (preis <= current)
	{
		current -= preis;

		fstream f;
		fstream ff;

		f.open("outFile.txt", ios::app);
		ff.open("inFile.txt", ios::app);

		f << "OUT " << preis << " " << current << endl;
		ff << current << endl;
		
		f.close();
		ff.close();
		cout << "Funds sufficiently decreaased with this amount: " << to_string(preis) << "\n";
	}

	else
		cout << "Insufficient Funds!\n";
}

void Konto::Einzahlen(const double& incoming)
{
	current += incoming;
	fstream f;
	fstream ff;

	f.open("outFile.txt", ios::app);
	ff.open("inFile.txt", ios::app);

	f << "IN " << incoming << " " << current << endl;
	ff << current << endl;

	f.close();
	ff.close();

	cout << "Funds sufficiently increased with this amount: " << to_string(incoming) << "\n";
}


void Konto::Restbetrag()
{
	cout << "Current Sold: " << to_string(current) << "\n";
}

void Konto::InReader()
{
	ifstream READ;
	READ.open("inFile.txt");

	int var = 0;
	char data[100];
	if (READ.is_open())
		while (!READ.eof())
		{
			READ >> data;
			if (atoi(data) > 0)
				var = atoi(data);
		}

	current = var;
	READ.close();
}