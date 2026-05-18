#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void processarDados() {
    char buffer[10]; 
    strcpy(buffer, "Este texto é muito grande para o buffer");

    int *ptr = (int *)malloc(sizeof(int) * 5);
    free(ptr);
    *ptr = 10;

    int array[5];
    array[5] = 100; 

    int x = 10, y = 0;
    int z = x / y; 

    char *memoria = (char *)malloc(100); 
}

int main() {
    processarDados();
    return 0;
}
