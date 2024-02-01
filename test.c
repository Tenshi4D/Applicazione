#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float budget;
    int beach;
    int mountain;
    int nightlife;
    char climate[20];
    char cities[3][50]; // Store up to 3 cities for each country
} Country;

Country countries[] = {
    {"Spain", 3000.0, 4, 3, 5, "temperate", {"Barcelona", "Madrid", "Seville"}},
    {"Italy", 4000.0, 4, 4, 4, "temperate", {"Rome", "Florence", "Venice"}},
    {"Greece", 3500.0, 5, 3, 3, "hot", {"Athens", "Santorini", "Mykonos"}},
    // Add more countries and their attributes as needed
};

int calculateScore(float userBudget, float countryBudget, int preference) {
    float adjustedBudget = userBudget / countryBudget;
    return (int)(adjustedBudget * preference);
}

int calculateClimateScore(const char* userClimate, const char* countryClimate, int preference) {
    return (strcmp(userClimate, countryClimate) == 0) ? preference : 0;
}

char* suggestCountry(float budget, int beach, int mountain, int nightlife, const char* climate) {
    int maxScore = 0;
    char* bestCountry = NULL;

    for (int i = 0; i < sizeof(countries) / sizeof(countries[0]); i++) {
        int score = calculateScore(budget, countries[i].budget, countries[i].budget) +
                    calculateScore(beach, 5, countries[i].beach) +
                    calculateScore(mountain, 5, countries[i].mountain) +
                    calculateScore(nightlife, 5, countries[i].nightlife) +
                    calculateClimateScore(climate, countries[i].climate, 5);

        if (score > maxScore) {
            maxScore = score;
            bestCountry = countries[i].name;
        }
    }

    return bestCountry;
}

void recommendCities(char* recommendedCountry) {
    for (int i = 0; i < sizeof(countries) / sizeof(countries[0]); i++) {
        if (strcmp(recommendedCountry, countries[i].name) == 0) {
            printf("Recommended cities in %s:\n", recommendedCountry);
            for (int j = 0; j < sizeof(countries[i].cities) / sizeof(countries[i].cities[0]); j++) {
                printf("- %s\n", countries[i].cities[j]);
            }
            return;
        }
    }
    printf("Cities recommendation not available for %s.\n", recommendedCountry);
}

int getYesOrNoInput() {
    char input[3];
    scanf("%s", input);

    if (strcmp(input, "yes") == 0 || strcmp(input, "y") == 0) {
        return 5;
    } else if (strcmp(input, "no") == 0 || strcmp(input, "n") == 0) {
        return 1;
    } else {
        printf("Invalid input. Defaulting to 'no'.\n");
        return 1;
    }
}

int main() {
    float budget;
    int beach, mountain, nightlife;
    char climate[20];

    printf("Enter your budget: €");
    scanf("%f", &budget);

    printf("Do you prefer beach? (yes/no): ");
    beach = getYesOrNoInput();

    printf("Do you prefer mountain? (yes/no): ");
    mountain = getYesOrNoInput();

    printf("Do you prefer nightlife? (yes/no): ");
    nightlife = getYesOrNoInput();

    printf("Enter your preferred climate (hot/cold/tropical/temperate): ");
    scanf("%s", climate);

    char* recommendedCountry = suggestCountry(budget, beach, mountain, nightlife, climate);

    if (recommendedCountry != NULL) {
        printf("We recommend you to visit %s!\n", recommendedCountry);
        recommendCities(recommendedCountry);
    } else {
        printf("Sorry, couldn't determine the best country for you.\n");
    }

    return 0;
}
