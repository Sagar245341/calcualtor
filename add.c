#include <stdio.h>
#include <float.h>

double simpleCalc(double num1, double num2, char op) {
    double res;

    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        printf("Error! Operator is not correct.\n");
        return -DBL_MAX;
    }
    return res;
}
int main() {
    char op;
    double num1, num2, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    res = simpleCalc(num1, num2, op);

    // Print the result
    if (res != -DBL_MAX)
        printf("Result: %.2lf\n", res);
    
    return 0;
}