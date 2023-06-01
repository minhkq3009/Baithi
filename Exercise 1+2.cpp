#include <stdio.h>

int isEven(int number) {
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, m, number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    printf("Please, enter a number (n and m): ");
    scanf("%d %d", &n, &m);

    printf("Even numbers between %d and %d:\n", n, m);
    for (int i = n +1; i < m; i++) {
        if (isEven(i)) {
            printf("%d\n", i);
        }
    }
	    
    return 0;
}

