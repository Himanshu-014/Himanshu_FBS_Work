#include <stdio.h>
int main() {
    int price;
    char student;
    float discount = 0;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y') {
        if(price > 500) {
            discount = 0.20;
        } else {
            discount = 0.10;
        }
    } else {
        if(price > 600) {
            discount = 0.15;
        } else {
            discount = 0.0;
        }
    }
    printf("Discounted price = %.2f", price - (price * discount));
    return 0;
}
