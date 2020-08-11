#include <bits/stdc++.h> 

using namespace std;

int PrimeNumberFinder(int limit)
{

    // Imprime estos numeros ya que es sabido que son primos
    if (limit > 2){
        cout << 2 << " ";
    }
    if (limit > 3){
        cout << 3 << " ";
    }

    // Inicia una lista con todos los elementos en falso
    bool *sieve = new bool[limit];
    //bool sieve[limit];
    for (int i = 0; i < limit; i++){
        sieve[i] = false;
    }

    for (int x = 1; x * x < limit; x++) { 
        for (int y = 1; y * y < limit; y++) { 
              
            // Main part of Sieve of Atkin 
            int n = (4 * x * x) + (y * y); 
            if (n <= limit && (n % 12 == 1 || n % 12 == 5)) 
                sieve[n] ^= true; 
  
            n = (3 * x * x) + (y * y); 
            if (n <= limit && n % 12 == 7) 
                sieve[n] ^= true; 
  
            n = (3 * x * x) - (y * y); 
            if (x > y && n <= limit && n % 12 == 11) 
                sieve[n] ^= true; 
        } 
    } 


    for (int r = 5; r * r < limit; r++) { 
        if (sieve[r]) { 
            for (int i = r * r; i < limit; i += r * r) 
                sieve[i] = false; 
        } 
    } 
    for (int a = 5; a < limit; a++) 
        if (sieve[a]) 
            cout << a << " "; 
} 

int main(void) 
{ 
    int limit = 10000000;
    PrimeNumberFinder(limit); 
    return 0; 
}