#include <iostream>
#include <bits/stdc++.h> //What for??
#include <cstdlib> //import randomness??

using namespace std;

int main (void){
    int terminos;
    cout << "Cuántos numeros quieres en la lista?" << endl;
    cin >> terminos;
    list <int> :: iterator it; //Declare a list. How?, name?
    list <int> numeros;
    for (int cnt = 0; cnt< terminos; cnt++){
        int random = rand() % 20 + 1; //Create random number
        numeros.push_back(random);
    }
    
    int pares = contar_pares(numeros);
    int impares = contar_impares(numeros);

    cout << "Tu lista es: " << numeros <<  endl; //Does this actually works?
    cout << "Tu lista tiene " << pares << "numeros pares" << endl;
    cout << "Tu lista tiene " << impares << "numeros impares" << endl;

    return 1;
}

int contar_pares(list <int> nums){
    int pares = 0;
    /*
    for (int cnt = 0; cnt < nums.size(); cnt++){
        if (*cnt%2 == 0){

        }
    }
    * Apparently, this does not work, I'll copy something from the internet
    * 
    */
    list <int> :: iterator it;
    for (it = nums.begin(); it != nums.end(); it++){
        if (*it %2 == 0){
            pares++;
        }
    }

    return pares;
}

int contar_impares(list <int> nums){
    int impares = 0;
    
    list <int> :: iterator it;
    for (it = nums.begin(); it != nums.end(); it++){
        if (*it %2 == 0){
            impares++;
        }
    }
    
    return impares;
}