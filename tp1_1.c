#include<stdio.h>

int main()
{
    printf("Hola mundo");
    int num = 10;
    int *punt_num;
    punt_num = &num; // inicializo el puntero

    printf("Contenido del puntero: %d\n ", *punt_num);
    printf("la direccion de memoria almacenada por el puntero:%d\n",punt_num);
    printf("direccion de memoria de la variable %d\n", &num);
    printf("tamanio de memoria utilizado por esa variable usando la funcion sizeof: %d", sizeof(num));


}