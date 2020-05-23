#include <cmath>

using namespace std;

class Vector3D{
    public:
        float x, y, z;
        float xOrigen, yOrigen, zOrigen;
    
    //Building our constructor!!
    Vector3D (float x_, float y_, float z_){
        /**
         * We use the _ as a differenciator between our variables,
         * just beacuse we still don't know how to use this.x;
         **/
        //Everything that will iniciate the object, goes in the constructor
            //as a scheme
        x = x_;
        y = y_;
        z = z_;

        xOrigen = 0;
        yOrigen = 0;
        zOrigen = 0;

        visible = true;
    }

    /**
     * Function that calculates the magnitud
     * of a 3D vector
     **/
    float magnitud (){ //Writing void in unnecesary!!!!
        //Pow != ^
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    }

    /**
     * Funtion that returns a Vector3D
     * Its calculated from another vector
     **/
    Vector3D unitario (){
        float mag = magnitud();
        return Vector3D (x/mag, y/mag, z/mag);
        /**
         * BECAUSE: mathematicaly
         *  X    Y    Z
         * ---, ---,  ---
         * |V|  |V|   |V|
         **/
    } 

    //Todos los métodos y atributos que sean privados, van después de private!!!
    private:
        bool visible;
}; //We use semicolon beacuse we want to finish the class.
//We ALWAYS do it with classes