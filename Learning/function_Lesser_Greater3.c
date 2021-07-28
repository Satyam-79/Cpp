#include <stdio.h>
int lesser(int, int, int);
int greater(int, int, int);
int main()
{
    int num1, num2, num3, result;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = lesser(num1, num2, num3);
    printf("\nLesser among three numbers is %d", result);
    result = greater(num1, num2, num3);
    printf("\nGreater among three numbers is %d", result);

    return 0;
}
int greater(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int lesser(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}