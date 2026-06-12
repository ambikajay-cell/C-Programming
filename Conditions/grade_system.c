#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
        printf("A Grade\n");
    else if(marks >= 80)
        printf("B Grade\n");
    else if(marks >= 70)
        printf("C Grade\n");
    else if(marks >= 60)
        printf("D Grade\n");
    else
        printf("Fail\n");

    return 0;
}
