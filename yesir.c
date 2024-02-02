#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // Include for exit function

// Enum for destination names
enum Destination {
    SPAIN, ALBANIA, PORTUGAL, SAN_MARINO, FRANCE, BULGARIA, HUNGARY, SLOVAKIA,
    ITALY, CYPRUS, GREECE, ESTONIA, NETHERLANDS, DENMARK, GERMANY, LUXEMBOURG, UNKNOWN
};

// Function to print destination information
void printDestination(enum Destination destination) {
    switch (destination) {
        case SPAIN:
            printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Spain!\n"
                   "Spain captivates with diverse landscapes, rich history, vibrant culture, and lively festivals, ensuring an unforgettable and immersive travel experience.\n");
            break;
        case ALBANIA:
            printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Albania!\n"
                   "Albania, with its breathtaking landscapes, ancient history, and warm hospitality, promises an unforgettable and immersive travel experience.\n");
            break;
        // Add cases for other destinations
        case UNKNOWN:
            printf("\nError. Check the spelling.\n");
            exit(1); // Terminate the program for an unknown destination
    }
}

// Function to get a positive integer input
int getPositiveIntegerInput(const char *prompt) {
    int value;
    do {
        printf("%s", prompt);
        scanf("%d", &value);
        if (value <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
        }
    } while (value <= 0);
    return value;
}

// Function to get destination input and perform spelling check
enum Destination getDestinationInput(const char *prompt) {
    char destination[20];
    printf("%s", prompt);
    scanf("%s", destination);

    for (int i = 0; destination[i]; i++) {
        destination[i] = tolower(destination[i]);
    }

    if (!isalpha(destination[0])) {
        printf("\nError. Check the spelling.\n");
        exit(1); // Terminate the program for a spelling error
    }

    // Add cases for each destination
    if (strstr(destination, "spain")) return SPAIN;
    if (strstr(destination, "albania")) return ALBANIA;
    // Add cases for other destinations
    return UNKNOWN; // Return UNKNOWN for an unknown destination
}

int main() {
    int budget = getPositiveIntegerInput("Welcome to QuickTravels! This code will recommend you a European destination based on the answers you input.\nWhat is your budget?\n€");

    enum Destination destinationWeather = getDestinationInput("Do you prefer 'temperate' climate or 'continental' climate?\n");
    enum Destination destinationWhere = getDestinationInput("Do you prefer 'beach' or 'mountains'?\n");
    enum Destination destinationNightlife = getDestinationInput("Are you interested in the nightlife? (yes/no)\n");

    if (budget <= 1500 && budget >= 300) {
        if (destinationWeather == SPAIN && destinationWhere == SPAIN && destinationNightlife == SPAIN) {
            // Add logic for budget <= 1500 and weather == temperate, etc.
        }
        // Add similar cases for other destinations
    } else if (budget > 1500) {
        if (destinationWeather == SPAIN && destinationWhere == SPAIN && destinationNightlife == SPAIN) {
            // Add logic for budget > 1500 and weather == temperate, etc.
        }
        // Add similar cases for other destinations
    } else if (budget == 0) {
        printf("Blud wants to travel free lol\n");
    } else {
        printf("Go earn some money and come back\n");
    }

    // Use the printDestination function
    printDestination(destinationWeather);

    return 0;
}
