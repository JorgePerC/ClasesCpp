#include <iostream>
#include "../Headers/Airport.hpp"

using namespace std;

int main (void){

    
    
    cout <<"    __!__    "<< "               " <<"    __!__    "<< endl;
    cout <<"_____(_)_____"<< "  Vuelos AICM  " <<"_____(_)_____"<< endl;
    cout <<"   !  !  !   "<< "               " <<"   !  !  !   "<< endl;
    cout << "Se crearan 100 vuelos aleatorios" << endl;
    cout << endl;
    //cout << "¿Que desea hacer, generar su propio aeropuerto, o generar uno aleatorio?" << endl;

    Airport AICM = Airport();
    
    AICM.fillAirport();
    AICM.getTerminalFlights();
    AICM.getVuelosAerolineas();
    AICM.mesesFavoritos();
    AICM.destinosFavoritos();

    return 1;
}


void nada(){
    int D,M,A;
    
    cout << "Programa que genera una clase fecha" << endl;
    cout << "Dame el día: ";
    cin >> D;

    cout << "Dame el mes: ";
    cin >> M;

    cout << "Dame el año: ";
    cin >> A;

    Schedule Dia1 (D,M,A);
    Schedule NextDay = Dia1.nextDay();
    Schedule PrevDay = Dia1.lastDay();
    
    cout << "Tu dia es: " << Dia1.getScheduleDate(0) << endl;
    cout << "El día siguiente es: " << NextDay.getScheduleDate(0) << endl;
    cout << "El día anterior es: " << PrevDay.getScheduleDate(0) << endl;
}