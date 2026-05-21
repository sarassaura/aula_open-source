#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void processarDados() {
    char buffer[100]; 
    strcpy(buffer, "Este texto é muito grande para o buffer");

    int *ptr = (int *)malloc(sizeof(int) * 5);
    *ptr = 10;
    free(ptr);

    int array[5];
    array[4] = 100; 

    int x = 10, y = 1;
    int z = x / y; 

    char *memoria = (char *)malloc(100);
    free(memoria); 
}

int main() {
    processarDados();
    return 0;
}
//perdida com pull request no terminal sorry por isso o comentario aqui
