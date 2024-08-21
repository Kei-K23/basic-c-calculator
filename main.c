#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        fprintf(stderr, "Cannot divide by zero\n");
    }
    return num1 / num2;
}

void showMenu()
{
    printf("Basic Calculator Menu:\n");
    printf("1. Add:\n");
    printf("2. Subtract:\n");
    printf("3. Multiply:\n");
    printf("4. Divide:\n");
    printf("5. Square Root:\n");
    printf("6. Power:\n");
    printf("7. Exit:\n");
}

int main()
{
    int choice;
    double num1, num2;

    do
    {
        showMenu();
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 7)
        {
            printf("Exiting calculator.\n");
            break;
        }

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        if (choice == 5 && choice == 6)
        {
            printf("Enter number: ");
            scanf("%lf", &num1);
        }

        switch (choice)
        {
        case 1:
            printf("Result : %lf\n\n", add(num1, num2));
            break;
        case 2:
            printf("Result : %lf\n\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result : %lf\n\n", multiply(num1, num2));
            break;
        case 4:
            printf("Result : %lf\n\n", divide(num1, num2));
            break;
        case 5:
            printf("Result : %lf\n\n", sqrt(num1));
            break;
        case 6:
            printf("Enter exponent: ");
            scanf("%lf", &num2);
            printf("Result : %lf\n\n", pow(num1, num2));
            break;
        default:
            printf("Invalid option\n\n");
        }
    } while (1);
    return 0;
}