#include <stdio.h>

int main() {
    double PI,radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    PI=3.14;
    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("The area of the circle is: %.2lf\n", area);
    printf("The circumference of the circle is: %.2lf\n", circumference);
    getch();
    clrscr();
    return 0;
}
