#include <stdio.h>

float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}

float areaOfSquare(float side) {
    return side * side;
}

float areaOfRectangle(float length, float breadth) {
    return length * breadth;
}

int main() {
    int choice;
    float radius, length, breadth;

    printf("Choose an operation:\n");
    printf("1. Calculate the area of a circle\n");
    printf("2. Calculate the area of a square\n");
    printf("3. Calculate the area of a rectangle\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle = %.2f\n", areaOfCircle(radius));
            break;
        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &length);
            printf("Area of the square = %.2f\n", areaOfSquare(length));
            break;
        case 3:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of the rectangle = %.2f\n", areaOfRectangle(length, breadth));
            break;
        default:
            printf("Invalid choice! Please choose a valid operation.");
    }

    return 0;
}