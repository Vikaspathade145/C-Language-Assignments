#include <stdio.h>

int main()
 {
    int x, y, sum = 0, choice;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Enter 1 for even numbers, 2 for odd numbers: ");
    scanf("%d", &choice);

    for (int i = x; i <= y; i++) {
        if (choice == 1 && i % 2 == 0)
            sum += i;
        else if (choice == 2 && i % 2 != 0)
            sum += i;
    }

    if (choice == 1)
        printf("Sum of even numbers from %d to %d is %d\n", x, y, sum);
    else
        printf("Sum of odd numbers from %d to %d is %d\n", x, y, sum);

    return 0;
}