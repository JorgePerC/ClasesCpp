#include <iostream>
#include "Airline.hpp" 
#include <vector>
#include <map>
#include <bits/stdc++.h> 
#include <unistd.h> //Porque lo corro en Linux

//Suposedly, libraries that are imported from other classes ar automathicaly added to this class

using namespace std;

class Airport{
    private:
        //REMOVE Tracks and TODAYFLIGHTS, TERMINALFLIGHTS from UML
        Place location;
        int terminals;  //It maybe better with a list. Yes, we have to.
        vector <Airline> airportAirlines;
        

        //We set a delay, otherwise, it wont be random
        int setRandomly(int range){
            sleep(1);
            int randomNumber;
            srand(time(nullptr)); 
            randomNumber = rand() % range + 1; 
            return randomNumber;
        }

    public:
        /**
         * Constructor for class Airport
         * Sets all parameters randomly
         * Returns null
         **/
        Airport(){
            terminals = 1+setRandomly(5);
            location = Place ();
        }
        
        /**
         * Constructor for class Airport
         * Parameters: Location and # of terminals
         * Returns null
         **/
        Airport(Place location_, int terminals_){
            location = location_;
            terminals = terminals;
        }  
        
        /**
         * Adds an airline to the Airport
         * Parameters: Airline
         * Returns null 
         * Awesome to check if the airline already exists
         **/
        void addAirline(Airline airline){
            for (int i = 0; i< airportAirlines.size(); i++){
                string thisOne = airportAirlines[i].getName();
                //Verifica que los nombres no se repitan
            }
            airportAirlines.push_back(airline);
        }
        
        /**
         * Adds a flight to an airline
         * Parameters: airline, flight
         * Returns null
         **/
        void addFlight(Airline airline, Flight flight){
            airline.addFlight(flight);
        }
        /*
            //Maybe boolean and then we can make a method to validate the operation
            void delayF(string ID, int Min){

            }
            void deleteFlight(string ID){

            }

            void changeLocation(string type, Place newLocation){

            }
            //MIssing setFlightTerminal
        */ //Delete?

        /**
         * Mutator for #terminals
         * Returns null
         */
        void setTerminals(int newTerminals){
            terminals = newTerminals;
        }
        
        /**
         * Method to automathicaly create airlines and their flights
         * Returns null
         **/
        void fillAirport(){
            //Generar aerolineas
            for (int i= 0; i<10 + setRandomly(7);i++){
                Airline newAirline = Airline();
                addAirline(newAirline);
            }
            //Llenar los 100 vuelos
            for (int i= 0; i<100;i++){
                Flight plane = Flight (setRandomly(terminals));
                airportAirlines[setRandomly(airportAirlines.size())-1].addFlight(plane);
                cout << plane.getDestiny().getCity() << endl;
            }
        }
//---------ACCESORS--------------------
        Place getLocation(){
            return location;
        }
        
        //Te regresa el de todos
        //También hace terminal Favorita
        void getTerminalFlights(){
            
            int flightsInTerminal [terminals] = {0};
            for (int i = 0; i < airportAirlines.size(); i++){
                vector <Flight> flies = airportAirlines[i].getFlightsList();
                for (int j = 0; j < flies.size(); j++){
                    int sumTerminal = flies[j].getTerminal();
                    flightsInTerminal[sumTerminal-1]++;
                }
            }
            for (int i = 0; i < terminals; i++){
                cout << "Flights in terminal "<< i+1 << ": " << flightsInTerminal[i] << endl;
            }
            
            int max = 0;
            for (int i = 1; i < terminals ; i++){
                if (flightsInTerminal[i]>flightsInTerminal[max])
                    max=i;
            }      
            cout << "The terminal with more flights is: " << max+1 << endl;    
        }

        void getVuelosAerolineas(){
            for (int i = 0; i < airportAirlines.size(); i++){
                cout << "The airline " << airportAirlines[i].getName() << " has " << airportAirlines[i].getFlightsList().size() << endl;
            }
        }
        
        //Usamos un mapa, porque es similar a los diccionarios
        void destinosFavoritos(){ //cantidad de vuelos de cada destino
            //dato de key y almacenado
            vector <string> favouritePlaces;
            vector <int> cont;
            //Fills FP, with all the places
            for (int i = 0; i < airportAirlines.size(); i++){
                vector <Flight> flies = airportAirlines[i].getFlightsList();
                for (int j = 0; j < flies.size(); j++){
                    string city = flies[j].getDestiny().getCode();
                    favouritePlaces.push_back(city);
                }
            }
            vector <string> passPlaces;
            passPlaces.push_back(favouritePlaces[0]);

            for (int l = 1; l < favouritePlaces.size(); l++){
                for(int i =0; i < passPlaces.size(); i++){
                    if (count(passPlaces.begin(), passPlaces.end(), favouritePlaces[l])==0){
                        passPlaces.push_back(favouritePlaces[l]);
                    }
                }
            }
            for (int i = 0; i< passPlaces.size(); i++){
                cout << "El destino " << passPlaces[i] <<" tiene " << 
                count(favouritePlaces.begin(), favouritePlaces.end(), favouritePlaces[i]) << " vuelos " << endl;
            }

        }
        
        void mesesFavoritos(){
            int meses[12] = {0};
            for (int i = 0; i < airportAirlines.size(); i++){
                vector <Flight> flies = airportAirlines[i].getFlightsList();
                for (int j = 0; j < flies.size(); j++){
                    int mes = flies[j].getDeparture().getMonth();
                    meses[mes-1]++;
                }
            }
            for (int i = 0; i<12; i++){
                if (meses[i]!=0){
                    cout << "El mes " << i+1 << " tiene " << meses[i] << " vuelos" << endl;
                }  
            }
        }
};