// Performs addition, subtraction, multiplication or division depending the input from user
# include <stdio.h>
int main() {
    char operator;
    double firstNumber,secondNumber;
<<<<<<< HEAD
    printf("input an operator (+, -, *,): ");
=======
    printf("Welcome to calculator program");
    printf("Enter an operator (+, -, *,): ");
>>>>>>> 435e4ff33ef2acb2b36fb6ea07bc3ae56e9fd86d
    scanf("%c", &operator);
    printf("Enter two operandsssssssss: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    printf("bye\n");

    return 0;
}
