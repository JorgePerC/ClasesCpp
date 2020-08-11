#include<iostream>
#include<stdlib.h>

using namespace std;

class Animal{
    private:
        
        string color;
        string nombre;
    public:   
        int patas;
        Animal(int, string, string);
        void comer(string);
        void sacar(string);
};

Animal:: Animal(int patas_, string color_, string nombre_){
    patas=patas_;
    color=color_;
    nombre=nombre_;
}

class Humano:public Animal{
     private:
        int edad;
     public:
     Humano(string, string,int);  
     void sacarPasearMascota();
};
Humano:: Humano( string color_, string nombre_,int edad_) : Animal(2 , color_, nombre_){
    edad=edad_;
}
void Humano :: sacarPasearMascota(){
    cout << "      ||_/|"<< endl;
    cout << "      | @ @   Woof! "<< endl;
    cout << "      |   <>              _ "<< endl;
    cout << "      |  _/|------____ ((| |))"<< endl;
    cout << "      |               `--' | "<< endl;
    cout << "  ____|_       ___|   |___.' "<< endl;
    cout << " /_/_____/____/_______|"<< endl;

}
class Perro:public Animal{
     private:
        string raza;
     public:
     Perro(string, string, string);  
     void ladrar();
};
Perro:: Perro( string color_, string nombre_, string raza_) : Animal(4 , color_, nombre_){
    raza=raza_;
}
void Perro :: ladrar (){
    cout<<"woof"<<endl;
}
/*Herencia*/
int main (){
    cout<<"Dame el nombre del humano:"<<endl;
    string human;
    cin>>human;
    cout<<"Dame el nombre del perro:"<<endl;
    string perr;
    cin>>perr;
    cout<<"Dame el color del humano:"<<endl;
    string col;
    cin>>col;
    cout<<"Dame el color del perro:"<<endl;
    string dog;
    cin>>dog;
    cout<<"Dame la edad del humano:"<<endl;
    float edad;
    cin>>edad;
    cout<<"Dame la raza de perro:"<<endl;
    string raz;
    cin>>raz;
    Perro per(dog,perr,raz);
    Humano hombre(human,col,edad);
    hombre.sacarPasearMascota();
    per.ladrar();

    
}
