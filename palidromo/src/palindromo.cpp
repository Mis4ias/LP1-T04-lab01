#include "palindromo.h"
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <ctype.h>
using namespace std;

bool palindromo (string palavra) {
    
    string str;
//Copia uma string 
    str = palavra;


//Pecorre na string trocando seus elementos    
    for (unsigned int i = 0; i < palavra.length()/2; i++){

            swap (palavra[i], palavra[palavra.length() - (i+1)]);
        }
//Compara as duas strings
            if (palavra.compare(str) != 0){
    
                return false;
                }
            else {
                return true;
        }
}

//Função de troca
void swap (string &a, string &b){

	string ax;

	ax = a;

	a = b;

	b = ax;

}
bool frase_palidromo (string frase){

//Retira os espaços em branco da frase.
    frase.erase(remove(frase.begin(), frase.end(), ' '), frase.end());
    string str1 = frase;
    
    for (unsigned int i = 0; i < frase.length()/2; i++){

            swap (str1[i], str1[frase.length() - (i+1)]);
        }

        if (frase.compare(str1) != 0){
            return false;
            }
        else{
            return true;
        }
}

bool anagrama(string str2, string str3){
    str2.erase(remove(str2.begin(),str2.end(), ' '),str2.end());
    str3.erase(remove(str3.begin(),str3.end(), ' '),str3.end());

    char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};

    if(str2.size() != str3.size()){
        return false;
    }

    //vetores de ocorrências 
    unsigned int ocorrencias[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    unsigned int ocorrencias1[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    for(unsigned int i = 0; i < str2.size(); i++){
        for(unsigned int j = 0; j < 26; j++){
            if(str2[i] == alf[j] ){
                ocorrencias[j]++;
            }
            if(str3[i] == alf[j]){
                ocorrencias1[j]++;
            }
        }
    }
    for(unsigned int i = 0; i < 26; i++){
        if(ocorrencias[i] != ocorrencias1[i])
            return false;
        }
    return true;

}
void palavraContida_palavra(string frase){
	string aux = ""; //Variável auxiliar para armazenar a palavra
	string str2 = frase;
	frase.erase(remove(frase.begin(), frase.end(), ' '), frase.end());
	string str1 = frase;//frase sem espaços
	char *array = new char[frase.length()];
    strcpy(array, str1.c_str());

    for (int i = 0; i < frase.length(); i++){
       if (str2[i] == ' '){
        	for (unsigned int j = 0; j<str2.size(); ++j){
			//strstr retorna um ponteiro pra primeira posição da ocorrencia de str2
			//toupper poe em caixa alta    
    			toupper (&(strstr(std::string aux,array))+j);	
    		}

           aux = ""; //Limpa a variável auxiliar para armazena a próxima palavra
       }
       else{
         aux = aux + str2[i]; //Armazena o caracter na variável auxiliar
       }

    }
   



}