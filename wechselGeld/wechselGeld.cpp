#include<iostream>
#include<array>
using namespace std;
double betrag;
double münzTypen[]= { 2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };
int münzAnzahl = 0;
string a = "er Muenzen ";
void münzWechsel(double betrag)
{
	
	for (size_t i = 0; i < sizeof(münzTypen); i++)
	{
		int münzAnzahl = 0;
		while (betrag > münzTypen[i])
		{
			
			münzAnzahl ++;
			betrag -= münzTypen[i];
			
		}
		
		cout << münzTypen[i] << a << münzAnzahl<< endl;
	} 
	
}
int main() 
{
	cout << "Bitte den Betrag eingeben!\n";
	cin >> betrag;
	münzWechsel(betrag);
}