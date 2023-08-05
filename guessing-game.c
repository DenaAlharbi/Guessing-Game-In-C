#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user;
    int computer;
    int count = 1;
    printf("Enter a guess: ");
    scanf("%d", &user);

    computer = rand() % 10 + 1;

    if (computer == user) {
        printf("You Have won in 1 try!");
    } else {
        while (computer != user) {
            if (computer > user) {
                printf("The number is bigger than what you entered! Try again\n Enter a guess: ");
                scanf("%d", &user);
                count = count + 1;

            } else if (computer < user) {
                printf("The number is less than what you entered! Try again\n Enter a guess: ");
                scanf("%d", &user);
                count = count + 1;

            }
        }
        printf("You Have won! in %d trys",count);

    }
}