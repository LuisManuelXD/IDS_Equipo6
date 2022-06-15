#include<stdio.h>

float suma(float sumaNumero1, float sumaNumero2);
float resta(float restaNumero1, float restaNumero2);
float multiplicacion(float multiNumero1, float multiNumero2);

int main() {
    float numero1, numero2;
    char opcion;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);
    
    printf("Ingrese la opcion: ");
    scanf(" %c", &opcion);

    switch (opcion) {
        case '1':
            printf("La suma de los numeros es: %.2f", suma(numero1, numero2));
        break;

        case '2':
            printf("La resta de los numeros es: %.2f", resta(numero1, numero2));
        break;

        case '3':
            printf("La multiplicacion de los numeros es: %.2f", multiplicacion(numero1, numero2));
        break;

        /*case '4':
            printf("La division de los numeros es: %.2f", division(numero1, numero2));
        break;*/

        default:
            printf("Opcion no valida");
    }

    return 0;
}

float suma(float sumaNumero1, float sumaNumero2) {
    return sumaNumero1 + sumaNumero2;
}

float resta(float restaNumero1, float restaNumero2) {
    return restaNumero1 - restaNumero2;
}

float multiplicacion(float multiNumero1, float multiNumero2) {
    return multiNumero1 * multiNumero2;
}