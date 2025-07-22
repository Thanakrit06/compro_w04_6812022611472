#include <stdio.h>

int main() {
    char name_first = 'T';
    int age = 18;
    float weight = 55.5f;
    char gender[] = "male";

    printf("nameInitial = %c\n", name_first);
    printf("age = %d \n", age);
    printf("weight = %.1f \n", weight);
    printf("gender = %s\n", gender);

    return 0;
}