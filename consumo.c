#include <stdio.h>
 
int main() {
 
    int distancia;
    float litros, consumo;
    scanf("%d", &distancia);
    scanf("%f", &litros);
    consumo = distancia/litros;
    printf("%.3f km/l\n", consumo);
    return 0;
}