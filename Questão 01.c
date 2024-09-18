#include <stdio.h>
#include <string.h>

void bubble_sort(char letras[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                char temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }
}

int main() {
    char letras[100];  
    printf("Digite várias letras (sem espaços): ");
    scanf("%s", letras);  

    int n = strlen(letras);  
    bubble_sort(letras, n);  

    printf("Letras em ordem: %s\n", letras);  
	
	
    return 0;
}
