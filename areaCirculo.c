#include <stdio.h>
int main (){
    double Raio, Area, pi = 3.14159;
    scanf("%lf", &Raio);
    Area = pi * (Raio*Raio);
    printf("A=%.4lf\n", Area); 
}