#include <stdio.h>
int main()
{
    int i, n;
    printf("\nEnter any number : ");
    scanf("%d", &n);
    // printf("\nMultiplication table of %d", n);
    // printf("\n**********************************");
    for (i = 0; i <= 10; i++)

        printf("\n %d X %d = %d", n, i, (n * i));

    return 0;
}
