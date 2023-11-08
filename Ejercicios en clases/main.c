#include <stdio.h>
#include "../Librerias/archivorest.h"
#include "../Librerias/archivosum.h"
#include "../Librerias/archivomult.h"
#include "../Librerias/archivodiv.h"
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Ingrese el primer numero?\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero?\n");
    scanf("%d", &num2);
    printf("El resultado de la suma es: %d\n", suma(num1, num2));
    printf("El resultado de la multiplicacion es: %d\n", multiplicacion(num1, num2));
    printf("El resultado de la resta es: %d\n", resta(num1, num2));
    printf("El resultado de la division es: %d\n", division(num1, num2));

    return 0;
}
