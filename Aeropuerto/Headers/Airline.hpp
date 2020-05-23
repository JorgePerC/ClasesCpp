
#include <iostream>
#include <vector>
#include "Flight.hpp"

using namespace std;

class Airline{
    private:
        string airLineNames [17]={
           "Aeromar",
           "AeroMexico",
           "Air Canada",
           "Air France",
           "Southwest",
           "American Airlines",
           "Avianca",
           "British Airways",
           "Copa Airlines",
           "Wingo",
           "Cubana",
           "Delta",
           "Iberia",
           "Interjet",
           "Volaris",
           "Latam Airlines",
           "Viva Aerobus" 
        }; //Possible names for airlines
        string AirLineName;
        bool operative;
        vector <Flight> airLineFlights; 

        //Same as in Schedule
        int setRandomly(int range){
            int randomNumber;
            srand((int)time(0)); 
            randomNumber = rand() % range + 1; 
            return randomNumber;
        }


    public:
        /**
         * Method for class Airline
         * Parameters: name
         * Returns null
         * Prints if operation was succesfull
         **/
        Airline(string Name){
            AirLineName = Name;
            operative = true;
            
            cout << AirLineName << " has been added" << endl;
        }
        
        /**
         * Method for class Airline
         * Automathically sets a name
         * Parameters: none
         * Returns null 
         * Prints if operation was succesfull
         **/
        Airline(){
            AirLineName = airLineNames[setRandomly(17)-1];
            operative = true;

            cout << AirLineName << " has been added" << endl;
        }
        
        /**
         * Mutator method for airline's name
         * Returns null
         * Prints if operation was succesfull
         **/
        void changeName(string NewName){
            if (operative){
                AirLineName= NewName;
                cout << "Succesfully changed name" << endl;
            }else{
                cout << "Sorry, the airline is non operative" << endl;
            }
        }
        //HOW CAN I MAKE A DESTRUCTOR?
        void disableAirline(){
            operative = false;
        }
        
        /**
         * Adds a flight to the airline
         * Parameters: NewFlight
         * Returns null
         * Prints if operation was succesfull
         **/
        void addFlight(Flight NewFlight){
            if (operative){
                airLineFlights.push_back(NewFlight);
                //cout << "Succesfully added flight" << endl;
            }else{
                cout << "Sorry, the airline is non operative" << endl;
            }
        }
        
//---------ACCESORS--------------------
        vector <Flight> getFlightsList (){
            return airLineFlights;
        }

        string getName(){
            return AirLineName;
        }

};