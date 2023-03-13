#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("The diameter of the circle is %f\n", diameter);
    printf("The circumference of the circle is %f\n", circumference);
    printf("The area of the circle is %f\n", area);
    return 0;
}