#include <iostream>

using namespace std;

void bisiesto (int ano){
    if ( (ano %4 == 0) && ((ano % 100 !=100) || (ano %400 == 00))){
        cout << "Ano bisisesto" << endl;
    }
    else{
        cout << "Ano normal" <<endl;
    }
}

int main (void){
    int ano;
    cout << "Dame un ano" << endl; //Creo que podemos meter el cin en la misma línea
    cin >> ano;
    cout << "Dame ano : "; cin >> ano;
    bisiesto(ano);
    return 1;
}
