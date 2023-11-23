#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct Opiskelijat
{
	string Etunimi;
	string sukunimi;
	int opiskelijanro;
	int opintopisteet;
};
void tulostaa(Opiskelijat ops)
{
	cout << "Etunimi: " << ops.Etunimi << endl;
	cout << "Sukunimi: " << ops.sukunimi << endl;
	cout << "Opiskelijanumero: " << ops.opiskelijanro << endl;
	cout << "opintopisteet: " << ops.opintopisteet << endl;
}
int main()
{	
	Opiskelijat asd;

	cout << "Anna opiskelijan etunimi: ";
	cin >> asd.Etunimi;
	cout << "Anna opiskelijan sukunimi: ";
	cin >> asd.sukunimi;
	cout << "Anna opiskelijan opiskelijanumero: ";
	cin >> asd.opiskelijanro;
	cout << "Anna opiskelijan opintopisteet: ";
	cin >> asd.opintopisteet;
	cout << endl;
	tulostaa(asd);
}