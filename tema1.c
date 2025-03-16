#include <stdio.h>
 
int main() {
    char name[50];
    int age;
    int registration;
    printf("Informe seu nome: \n");
    fgets(name, 50, stdin);
    printf("Informe sua idade: \n");
    scanf("%d", &age);
    printf("Informe sua número de registro: \n");
    scanf("%d", &registration);

    printf("\nNome: %s", name);
    printf("Idade: %d\n", age);
    printf("Registro: %d\n", registration);
}