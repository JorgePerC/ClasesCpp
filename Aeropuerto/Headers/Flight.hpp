#include <iostream>
#include "Place.hpp"
#include "Schedule.hpp"

using namespace std;

class Flight{
    private:
        string ID;
        int passengers,terminal; //ADD TERMINAL TO UML
        bool nationalFlight; //Maybe on Airport, a method to define it's nationality
        Place origin, destination; //Does this looks for the void constructor??
        Schedule arrival, departure; 
        
        string letters [26]= {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T"
                            ,"U","V","W","X","Y","Z"};
        
        //How can make it accesible for all?
        //Does the same as in Schedule
        int setRandomly(int range){
            int randomNumber;
            srand(time(nullptr)); 
            randomNumber = rand() % range + 1; 
            return randomNumber;
        }
        /**
         * Method to define the Flight ID
         * Parameters: none
         * Returns string
         **/
        string setID(){
            return letters[setRandomly(26)-1] + to_string(setRandomly(26)) + letters[setRandomly(26)-1] + letters[setRandomly(26)-1];
        }

    public:
        //Remove NATIONAL FLIGHT AS PARAMETER UML
        /**
         * Constructor for class Flight
         * Parameters: ID, Origin, Destination, Arrival, Departure and Terminal
         * Sets passengers to 0
         * Returns null
         **/
        Flight(string ID_, Place Origin_, Place Destination_, Schedule Arrival_, 
        Schedule Departure_, int Terminal_){

            ID = ID_;
            
            origin = Origin_;
            destination = Destination_;
            
            arrival = Arrival_;
            departure = Departure_;
            
            passengers = 0;
            if( (destination.getCountry().compare("Mexico")) == 0){
                nationalFlight = true;
            }else{
                nationalFlight = false;
            }
            terminal = Terminal_;
        }
        
        /**
         * Constructor for class Flight
         * Parameters: none
         * Only here because VS was asking for it
         * Returns null
         */
        Flight(){
            ID = setID();
            
            origin = Place ();
            destination = Place ();
            
            arrival = Schedule ();
            departure = Schedule ();
            
            passengers = 150 + setRandomly(150);
            if( (destination.getCountry().compare("Mexico")) == 0){
                nationalFlight = true;
            }else{
                nationalFlight = false;
            }
        }
        
        /**
         * Constructor for class Flight
         * Parameters: terminal_
         * Sets all other parameters randomly
         * Returns null
         **/
        Flight(int terminal_){
            ID = setID();
            
            origin = Place ();
            destination = Place ();
            
            arrival = Schedule ();
            departure = Schedule ();
            terminal = terminal_;
            passengers = 150 + setRandomly(150);
            if( (destination.getCountry().compare("Mexico")) == 0){
                nationalFlight = true;
            }else{
                nationalFlight = false;
            }
        }

        /**
         * Method to set a new destination 
         * Parameters: NewDestination
         * Returns null
         **/
        void chageDestination (Place NewDestination){
            destination = NewDestination;
        }

        /**
         * Method to delay flight Schedule
         * Parameters: type: arrival/departure, min to delay
         * Returns null
         **/
        void delay(string type, int Min){
            if (type.compare("arrival")==0){
                arrival.delay(Min);
            }else{
                departure.delay(Min);
            }
        }
        
        /**
         * Mutator to set passengers
         * Returns null
         **/
        void setPassengers(int people){
            passengers=people;
        }
//---------ACCESORS--------------------
        int getPassengers(){
            return passengers;
        }
        int getTerminal(){
            return terminal;
        }
        Place getDestiny(){
            return destination;
        }
        Place getOrigin(){
            return origin;
        }
        Schedule getDeparture(){
            return departure;
        }
        Schedule getArriving(){
            return arrival;
        }

};