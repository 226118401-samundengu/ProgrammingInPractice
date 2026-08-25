#include <stdio.h>
int main(){
    int population;
    char mayorName[50];
    char municipalityName[50];
    printf("Municipal Financial Management System\n\n");
    printf("Welcome to Windhoek Municipality\n");
    printf("Please enter municipality name\n");
    scanf("49%s", &municipalityName);
    printf("Please enter Mayor name\n");
    scanf("49%s", &mayorName);
    printf("Please enter population amount\n");
    scanf("%d", &population);
    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipalityName);
    printf("Mayor : %s\n", mayorName);
    printf("Population : %d\n", population);

    return 0;
}