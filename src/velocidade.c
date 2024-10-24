#include <stdio.h>
int main () {
    float km_inicial, km_final, tempo_inicial, tempo_final, distancia, tempo, velocidade_media;

    // km
    printf("Digite o quilômetro inicial:");
    scanf("%f",&km_inicial);

    printf("Digite o quilômetro final:");
    scanf("%f" ,&km_final);

    printf("Digite o tempo inicial (em horas):");
    scanf("%f" ,&tempo_inicial);

    printf("Digite o tempo final (em horas):");
    scanf("%f" ,&tempo_final);

    // distância e o tempo 
    distancia = km_final - km_inicial;
    tempo = tempo_final - tempo_inicial;
    velocidade_media = distancia / tempo;

    // calculando velociadade média 
    printf("A velocidade média é: %.2f km/h\n" ,velocidade_media);
    return 0;






}