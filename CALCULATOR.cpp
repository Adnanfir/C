#include <iostream>

int main() {
    float a, b;
    char op;
    printf("Enter expression (a operator b): ");
    scanf("%f %c %f", &a, &op, &b);

    (op == '+') ? printf("Result = %.2f\n", a + b) :
    (op == '-') ? printf("Result = %.2f\n", a - b) :
    (op == '*') ? printf("Result = %.2f\n", a * b) :
    (op == '/' && b != 0) ? printf("Result = %.2f\n", a / b) :
    (op == '%' && (int)b != 0) ? printf("Result = %d\n", (int)a % (int)b) :
    (b == 0 && (op == '/' || op == '%')) ? printf("Error: Division by zero!\n") :
    printf("Invalid operator!\n");

    return 0;
}
