#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("===== Welcome to Quiz Game =====\n");

    // Question 1
    printf("\nQ1: What is 2 + 2?\n");
    printf("A. 3\nB. 4\nC. 5\nD. 6\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'B' || ans == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n");
    }

    // Question 2
    printf("\nQ2: C language was developed by?\n");
    printf("A. James Gosling\nB. Dennis Ritchie\nC. Bjarne Stroustrup\nD. Elon Musk\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'B' || ans == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n");
    }

    // Question 3
    printf("\nQ3: Which symbol is used for comments in C?\n");
    printf("A. //\nB. ##\nC. **\nD. $$\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'A' || ans == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A\n");
    }

    // Final Score
    printf("\n===== RESULT =====\n");
    printf("Your Score: %d / 3\n", score);

    if(score == 3) {
        printf("Excellent!\n");
    } else if(score == 2) {
        printf("Good Job!\n");
    } else {
        printf("Try Again!\n");
    }

    return 0;
}