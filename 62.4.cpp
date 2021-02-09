#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	
	
	const int size = 1000;
	cout << "Zadanie 62.4:" << endl;
	  
	ifstream in("liczby2.txt");
	int tab[size];
	for (int i = 0; i < size; i++) in >> tab[i];
	int liczba6 = 0, liczba6_w_8 = 0;
	int numer;
	  
	for (int i = 0; i < size; i++) 
	{
	    numer = tab[i];
	    while (numer) 
		{
	    	if (numer % 10 == 6) liczba6++;
	    	numer = numer / 10;
	    }
	    
	    numer = tab[i];
	    while (numer) {
	    	if (numer % 8 == 6) liczba6_w_8++;
	    	numer = numer / 8;
	    }
	  }
	  cout << liczba6 << "\n" <<liczba6_w_8 << endl;
	
	return 0;
}
