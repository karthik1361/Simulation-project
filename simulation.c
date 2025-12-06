#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    int marks[100];
    int max, min;
    float sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Display marks
    printf("\nMarks entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }

    // Max & min
    max = min = marks[0];
    for(i = 1; i < n; i++) {
        if(marks[i] > max)
            max = marks[i];
        if(marks[i] < min)
            min = marks[i];
    }

    // Average
    avg = sum / n;

    printf("\n\nHighest Mark = %d", max);
    printf("\nLowest Mark  = %d", min);
    printf("\nAverage Mark = %.2f", avg);

    // Search
    printf("\n\nEnter a mark to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(marks[i] == search) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Mark %d found at position %d\n", search, i+1);
    else
        printf("Mark %d not found.\n", search);

    return 0;
}