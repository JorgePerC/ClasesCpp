
#include <iostream>
#include <cstdlib>
#include <ctime>   //Import time
#include <unordered_map> //Unused


using namespace std;

class Place{
    private:
    //Suposedly, I can ommit the outer limit, don't know how
        int placeKey;
        string Places[10][3] =
        {
            {"ACA", "Mexico", "Acapulco"},
            {"CUN", "Mexico", "Cancun"},
            {"MEX", "Mexico", "CDMX"},
            {"GDL", "Mexico", "Guadalajara"},
            {"MTY", "Mexico", "Monterrey"},
            
            {"ATL", "USA", "Atlanta"},
            {"BWI", "USA", "Baltimore"},
            {"DFW", "USA", "Dallas"},
            {"DEN", "USA", "Denver"},
            {"FAR", "USA", "Fargo"}

        }; //Maybe we can add more later
         
    public:
        /**
         * Constructor for class Place
         * Sets a city randomly
         * Parameters: none
         * Returns null
         **/
        Place(){
            srand(time(nullptr)); //Seed basada en el tiempo
            placeKey = rand() % 10; //Genera un número random. Check with lenght PLaces
        }

//---------ACCESORS--------------------
        string getCode(){
            return Places[placeKey][0];
        }
        
        string getCountry(){
            return Places[placeKey][1];
        }

        string getCity(){
            return Places[placeKey][2];
        }
};