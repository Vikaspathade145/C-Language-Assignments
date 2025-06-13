#include <stdio.h>

int main() 
{
    int m1, m2, m3, total;
    float avg;
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total: %d, Average: %.2f\n", total, avg);
    if (avg >= 60)
        printf("Class I\n");
    else if (avg >= 50)
        printf("Class II\n");
    else if (avg >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");

    return 0;
}