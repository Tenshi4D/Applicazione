#include <stdio.h>

int main(){

    char answer;
    int age = 0 ;

    printf("Do you like beers Enter Y or N: \n");
     scanf(" %c", &answer);
        printf("\n so your answer is %c\n", answer);

        printf("Are you old enough to have a beer?\n");
        scanf(" %c", &answer);
        printf("\n so your answer is %c\n", answer);


        if (answer == 'Y') {

            printf("how old are you?\n");
            scanf(" %d", &age);

            if (age >= 18)
                printf("\n Let's go for some beers , I will pay the first round \n");

        }if else  (age < 18 && answer == 'N')
            printf("\n sorry my friend , maybe next time \n");



        // printf("You may NOT ");

return 0;

}