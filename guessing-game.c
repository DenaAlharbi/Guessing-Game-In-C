#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user;
    int computer;
    printf("Enter a guess: ");
    scanf("%d", &user);

    computer = rand() % 10 + 1;

    if (computer == user) {
        printf("You Have won!");
    } else {
        printf("You have lost!");
    }
}
