#include <stdio.h>
 
int main() {
    int tempo, hora = 0, minuto = 0, segundo = 0;
    scanf("%d", &tempo);
    if (tempo >= 365)
    {
        hora = tempo / 365;
        tempo = tempo % 365;
    }
    if (tempo >= 30)
    {
        minuto = tempo / 30;
        tempo = tempo % 30;
    }
    if (tempo < 30)
    {
        segundo = tempo;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", hora, minuto, segundo);

    return 0;
}