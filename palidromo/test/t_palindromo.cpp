#include "palindromo.h"
#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main () {

    cout << "Testando a verificacao de palindromos.." << endl;
	
	string tmp ("lab");
    assert(palindromo(tmp) == false);
	string tmp2 ("ana");
    assert(palindromo(tmp2) == true);
    
     //Escreva outros casos de teste
    cout << "Testando a verificacao de frases palindromas.." << endl;
    
    string str ("anotaram a data da maratona");
    string str10 ("palmeira tem mundial sim");
    assert(frase_palidromo(str) == true);
    assert(frase_palidromo(str10) == false);
    cout << "Testando a verificacao de anagramas.." << endl;
    
    string str5 ("moradia");
    string str6 ("domaria");
    string str7 ("domariaa");
    string str8 ("radiamo");
    string str9 ("moredia");
    assert(anagrama(str5,str6) == true);
    assert(anagrama(str5,str7) == false);
    assert(anagrama(str5,str8) == true);  
    assert(anagrama(str5,str9) == false);
    
    return 0;

}
