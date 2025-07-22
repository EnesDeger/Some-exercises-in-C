#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

    const int some_constant=(int)(sin(time(NULL))* time(NULL));
    srand(some_constant);

    int temp_num = rand() % 1010;
    int my_num =temp_num / 10;
    int num_count=0, current_size=10;
    int *user_num = (int*) malloc(current_size* sizeof(int));
    if (user_num == NULL) {
        printf("Memory allocation failed");
        return 1;
    }


    printf("Welcome to the game, I choose a number between 0 and 100.\n");
    printf("Please guess a number ,and I will say that it's smaller or greater than my number.\n\n");



    printf("Guess a number :");
    while (scanf("%d", &user_num[0])!=1) {
        printf("Invalid input. Please try again :");
        while (getchar() != '\n');
    }

    while (user_num[num_count] != my_num) {

        if (num_count+1 == current_size) {
            current_size*=2;
            int *temp =(int*)realloc(user_num, current_size * sizeof(int));
            if (temp == NULL) {
                printf("Memory allocation is failed");
                free(user_num);
                return 2;
            }
            user_num = temp;
        }

        if (user_num[num_count] > my_num) {
            printf("Your number is greater than mine.\n");
        }
        else if (user_num[num_count] < my_num) {
            printf("Your number is smaller than mine.\n");
        }

        num_count++;
        printf("Guess another number :");
        while (scanf("%d", &user_num[num_count])!=1) {
            printf("Invalid input. Please try again :");
            while (getchar() != '\n');
        }

    }

    printf("Congrats! You find the number %d after %d tries.\n", my_num, num_count+1);

    free(user_num);
    return 0;
}
