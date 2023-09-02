#include <stdio.h>
 
int main() {
    int tempo, hora = 0, minuto = 0, segundo = 0;
    scanf("%d", &tempo);
    if (tempo >= 3600)
    {
        hora = tempo / 3600;
        tempo = tempo % 3600;
    }
    if (tempo >= 60)
    {
        minuto = tempo / 60;
        tempo = tempo % 60;
    }
    if (tempo < 60)
    {
        segundo = tempo;
    }

    printf("%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}