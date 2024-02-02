#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // Include for exit function

void checkSpelling(char* input) {
    for (int i = 0; input[i]; i++) {
        if (!isalpha(input[i]) || !islower(input[i])) {
            printf("\nError. Check the spelling.\n");
            exit(1); // Terminate the program
        }
    }
}

void printDestination(char* destination) {
    if (strstr(destination, "Spain")) {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Spain!\n"
               "Spain captivates with diverse landscapes, rich history, vibrant culture, and lively festivals, ensuring an unforgettable and immersive travel experience.\n");
    } 
    // ... (rest of the printDestination function)

}

int main() {
    int budget;
    char weather[20];
    char where[20];
    char nightlife[20];

    printf("Welcome to QuickTravels! This code will recommend you a European destination based on the answers you input.\nWhat is your budget?\n€");
    scanf("%d", &budget);

    printf("Do you prefer 'temperate' climate or 'continental' climate?\n");
    scanf("%s", weather);

    checkSpelling(weather); // Check spelling for weather input

    printf("Do you prefer 'beach' or 'mountains'?\n");
    scanf("%s", where);

    checkSpelling(where); // Check spelling for where input

    printf("Are you interested in the nightlife? (yes/no)\n");
    scanf("%s", nightlife);

    checkSpelling(nightlife); // Check spelling for nightlife input

    // Rest of the code for main
    if (budget <= 1500 && budget >= 300) {
        // ... (existing code)
    } 
    // ... (rest of the existing code)

    return 0;
}
