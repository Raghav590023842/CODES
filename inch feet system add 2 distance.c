//WAP to add two distance in inch-feet system.


#include <stdio.h>
struct Distance {
    int feet;
    float inch;
} d1, d2, result;

int main()
{
    printf("Enter feet: ");
    scanf("%d %d", &d1.feet, &d2.feet);
    printf("Enter inch: ");
    scanf("%f %f", &d1.inch, &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch >= 12.0)
    {
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d %f", result.feet, result.inch);
    return 0;
}

