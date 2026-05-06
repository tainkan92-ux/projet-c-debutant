#include<stdio.h>

int main(void){
  
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    
    // Demande du premier nombre
    printf("Entez le premier nombre: ");
    scanf("%lf", &num1);

    // Demande de l'opérateur
    printf("Entez le calcul a faire (+ - * /): ");
    scanf(" %c", &operator); //retire le \n du buffer input

    // Demande du deuxieme nombre
    printf("Entez le deuxieme nombre: ");
    scanf("%lf", &num2);
    
    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Vous pouvez pas diviser par 0!\n");
            }
            else{
                result = num1 / num2;
            }
            break;
        default:
            printf("Opérateur non valide\n");
    }
    printf("Result: %.4lf", result);

    return 0;
}
