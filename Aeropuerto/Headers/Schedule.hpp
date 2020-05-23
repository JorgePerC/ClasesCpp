//Class Date. It doesn't take into account leap-years
#include <cstdlib>
#include <iostream>
#include <ctime> 

using namespace std;

class Schedule{
    private:
        int Day,Month,Year, timeMin, timeHrs;
        int diasEnMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        /**
         * Returns a random int in 1-range
         **/
        int setRandomly(int range){
            int randomNumber;
            srand(time(nullptr)); 
            randomNumber = rand() % range + 1; 
            return randomNumber;
        }

    public:
        /**
         * Constructor for class Schedule
         * *Checks that the user inserter a valid Schedule
         * *Otherwise, it will asume it
         * Parameters: Day, Month and Year
         * *DefaultTime: 0:0
         * Returns null
         **/


        Schedule (int D_, int M_, int Y_){
            if (M_<1 || M_>12){
                //Quiero que me de el más próximo
                if (M_>12){
                    M_=12;
                }else{
                    M_=1;
                }
            }
            
            if (D_ < 1 || D_>diasEnMes[M_-1]){
                if (D_>diasEnMes[M_-1]){
                    D_= diasEnMes[M_-1];
                }else{
                    D_=1;
                }
            }
                   
            Day=D_;
            Month=M_;
            Year=Y_;
            //DeafaultValue
            timeHrs=0;
            timeMin=0;
        }
        /**
         * Constructor for class Schedule
         * As it doesnt has parameters, it sets all data randomly
         * Returns null
         **/
        Schedule(){
            Month = setRandomly(12);
            Day = setRandomly(diasEnMes[Month-1]);
            Year = 2019;
            setTime(setRandomly(24),setRandomly(59));
        }

//-------------------------------------------------------------------------
        /**
         * Get tomorow from Schedule
         * Parameters: none
         * Reutuns tomorow's Schedule 
         **/
        Schedule nextDay (){
            int newDay, newMonth, newYear;
            newMonth=Month;
            newYear=Year;
            newDay= Day+1;

            if(newDay>diasEnMes[Month-1]){
                newDay=1;
                newMonth = Month+1;
            }
            if(newMonth>12){
                newMonth=1;
                newYear= Year+1;
            }
            return Schedule (newDay,newMonth,newYear);
        }

        /**
         * Get yesterday from Schedule
         * Parameters: none
         * Reutuns yesterday's Schedule 
         **/
        Schedule lastDay (){
            int newDay, newMonth, newYear;
            newMonth=Month;
            newYear=Year;
            newDay = Day-1;
            if(newDay<1){
                newDay = diasEnMes[Month-1];
                newMonth = Month-1;
            }
            if(newMonth<1){
                newMonth=1;
                newYear = Year-1;
            }
            return Schedule (newDay,newMonth,newYear);
        }

        /**
         * Mutator for the time of arrival/departure
         * Parameters: Hrs, Min
         * Returns null
         **/
        void setTime(int Hrs, int Min){
            if (Hrs<1 || Hrs>24)
                Hrs=24;
            if (Min<0 || Min>60)
                Min=0;
            timeHrs=Hrs;
            timeMin=Min;
        }
        
        /**
         * Method to delay flight
         * It can only delay a flight in minutes
         * Returns null
         * Take into account:
         *   Does not CHANGEDATE
         *   When would it be a good idea to return another Schedule instead of updating the value?
         **/
        void delay(int Min){
            int newMin = timeMin+Min;
            int extraHrs = newMin/60;
            newMin = newMin%60;

            timeHrs = timeHrs+extraHrs;
            timeMin = newMin;
        }

//-------------------------------------------------------------------------

        /**
         * AccesorSchedule method
         * Parameters: Format
         * * 0=DD/MM/YYYY
         * * 1=MM/DD/YYYY
         * * 2=YYYY/MM/DD
         * Returns string
         **/
        string getScheduleDate(int Formato){
            string fecha;
            if (Formato == 0){
                fecha= to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year);
            }
            else if (Formato == 1){
                fecha= to_string(Month) + "/" + to_string(Day) + "/" + to_string(Year);
            }
            else if (Formato == 2){
                fecha= to_string(Year) + "/" + to_string(Month) + "/" + to_string(Day);
            }else{
                fecha= "UnvalidFormat";
            }
            return fecha;
        }
        /** 
         * Accesor for Hrs and Min of Schedule
         * NON INTUITIVE
         * Returns a flot with Hrs (Int) and Min (Decimals)
         **/
        float getTime(){
            float Min= timeMin/100;
            return timeHrs+Min;     
        }

        /**
         * Accesor of onth flight
         * Easier to access than getScheduleDate();
         * Returns int
         **/
        int getMonth(){
            return Month;
        }

};