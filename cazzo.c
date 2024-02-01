#include <stdio.h>
#include <string.h>

int main() 
{   



    char x[4] = {'y', 'e', 's', '\0'};
    char answer[4];

    printf("This code will tell you where you must go on vacation.\nJust answer this simple questionnaire and you will know where to travel for your next trip!\n");

    printf("Do you want to go to the beach?\n");
    scanf("%s", answer);

    if (strcmp(answer, x) == 0) {
        printf("utgv\n");
    }

    return 0;
}