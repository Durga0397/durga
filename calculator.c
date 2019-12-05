#include <stdio.h>
int main() {
    char operator;
    double f,s;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &f, &s);
    switch (operator)
	{
    case '+':
        printf("%.1lf + %.1lf = %.1lf", f, s, f + s);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", f, s, f - s);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", f, s, f * s);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", f, s, f / s);
        break;
          default:
        printf("Error");
    }
    return 0;
}
