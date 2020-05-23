#include <iostream>
#include <cmath>

using namespace std;

float hacer_ecuacion_1(float xValue){
    float xRad;
    xRad = (xValue* M_PI)/180;
    return (pow(sin(1/xRad),2)/xValue);
}
float hacer_ecuacion_2 (float xValue){
    float xRad;
    xRad = (xValue* M_PI)/180;
    return (pow(sin(xRad),(1/3)))/ (4*xValue) + (5*M_PI*xValue)*tan(pow(xRad,2));
}

int main (void){
    float xValue;
    cout << "Dame un valor para x:" << endl;
    cin >> xValue;
    cout << "La primera ecuacion vale: " << hacer_ecuacion_1(xValue) << endl;
    cout << "La segunda ecuacion vale: " << hacer_ecuacion_2(xValue) << endl;
    return 1;
}