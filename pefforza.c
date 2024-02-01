#include <stdio.h>

typedef struct {
    char name[50];
    int budget;
    int beach;
    int mountain;
    int nightlife;
    int climate; countries
}

Country countries[] = {
    {"Spain", 3, 4, 3, 5, 4},
    {"Italy", 4, 4, 4, 4, 3},
    {"Greece", 3, 5, 3, 3, 4},
    {"France", 4, 3, 3, 4, 3},
    {"Portugal", 3, 4, 3, 3, 4},
    {"Croatia", 3, 4, 4, 3, 3},
    {"Switzerland", 5, 2, 5, 2, 4},
    {"Austria", 4, 2, 4, 3, 4},
    {"Norway", 5, 2, 5, 2, 3},
    {"Sweden", 4, 3, 4, 2, 3},
    {"Denmark", 4, 3, 3, 3, 3},
    {"Germany", 4, 2, 3, 3, 3},
    {"Netherlands", 3, 3, 2, 4, 3},
    {"Belgium", 3, 3, 2, 3, 3},
    {"Iceland", 5, 1, 5, 2, 3},
    {"Finland", 4, 3, 4, 2, 3},
    {"United Kingdom", 3, 3, 2, 4, 3},
    {"Ireland", 3, 3, 2, 3, 3},
    {"Poland", 3, 2, 3, 2, 3},
    {"Hungary", 3, 2, 3, 3, 3},
};

int calculateScore(int budget, int preference) {
    return budget * preference;
}

char* suggestCountry(int budget, int beach, int mountain, int nightlife, int climate) {
    int maxScore = 0;
    char* bestCountry = NULL;

    for (int i = 0; i < sizeof(countries) / sizeof(countries[0]); i++) {
        int score = calculateScore(budget, countries[i].budget) +
                    calculateScore(beach, countries[i].beach) +
                    calculateScore(mountain, countries[i].mountain) +
                    calculateScore(nightlife, countries[i].nightlife) +
                    calculateScore(climate, countries[i].climate);

        if (score > maxScore) {
            maxScore = score;
            bestCountry = countries[i].name;
        }
    }

    return bestCountry;
}

int main() {
    int budget, beach, mountain, nightlife, climate;

    printf("Enter your budget (1-5): ");
    scanf("%d", &budget);

    printf("Do you prefer beach? (1 for no, 5 for yes): ");
    scanf("%d", &beach);

    printf("Do you prefer mountain? (1 for no, 5 for yes): ");
    scanf("%d", &mountain);

    printf("Do you prefer nightlife? (1 for no, 5 for yes): ");
    scanf("%d", &nightlife);

    printf("Rate your preference for climate (1-5): ");
    scanf("%d", &climate);

    char* recommendedCountry = suggestCountry(budget, beach, mountain, nightlife, climate);

    if (recommendedCountry != NULL) {
        printf("We recommend you to visit %s!\n", recommendedCountry);
    } else {
        printf("Sorry, couldn't determine the best country for you.\n");
    }

    return 0;
}
















