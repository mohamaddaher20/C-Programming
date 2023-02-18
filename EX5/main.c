#include <stdio.h>
#define SIZE_OF_ARRAY 6

int main() {
    int i;
    int sum = 0;

    int grades[SIZE_OF_ARRAY];

    for(int i=0 ; i< SIZE_OF_ARRAY ; i++){
        printf("Please enter Grade %d: ",i+1);
        scanf(" %d", &grades[i]);
        sum += grades[i];

        if (grades[i] < 0){
            printf("You cannot enter negative grades.");
            return 1;
        }
        else if(grades[i] > 100){
            printf("You cannot enter grades above 100.");
            return 1;
        }

    }

    printf("Your average for the term is: %.1f",(float)sum/SIZE_OF_ARRAY);


    int showGrade;
    printf("\nWhich grade do you want to look up? ");
    scanf("%d", &showGrade);
    printf("Grade %d: %.1f", showGrade, (float)grades[showGrade -1]);





    return 0;
}
















