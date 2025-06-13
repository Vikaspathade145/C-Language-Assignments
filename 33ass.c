#include <stdio.h>

int main() {
    int N, sum = 0, choice;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Enter 1 for even numbers, 2 for odd numbers: ");
    scanf("%d", &choice);

    for (int i = 1; i <= N; i++) {
        if (choice == 1 && i % 2 == 0)
            sum += i;
        else if (choice == 2 && i % 2 != 0)
            sum += i;
    }

    if (choice == 1)
        printf("Sum of even numbers from 1 to %d is %d\n", N, sum);
    else
        printf("Sum of odd numbers from 1 to %d is %d\n", N, sum);

    return 0;
}