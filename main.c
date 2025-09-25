#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, Y;
    
    printf("Input two integers : ");
    scanf("%i %i", &x, &Y);

    printf("+ result : %i\n", x + Y);
    printf("- result : %i\n", x - Y);
    printf("* result : %i\n", x * Y);
    printf("/ result : %i\n", x / Y);   
    printf("%% result : %i\n", x % Y);
    system("PAUSE");
  
    return 0;
}

