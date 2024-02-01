#include <stdio.h>
#include <string.h>

void provideCityInfo(const char *city) {
    printf("\nInformation about %s:\n", city);

    if (strcmp(city, "Dubai") == 0) {
        printf("Dubai is a vibrant city known for its modern architecture, luxury shopping, and lively nightlife.\n");
        printf("Famous places to visit: Burj Khalifa, The Dubai Mall, Palm Jumeirah.\n");
    } else if (strcmp(city, "Tokyo") == 0) {
        printf("Tokyo, the capital of Japan, is a bustling metropolis blending traditional culture with modern technology.\n");
        printf("Famous places to visit: Tokyo Tower, Shibuya Crossing, Meiji Shrine.\n");
    } else if (strcmp(city, "Bora Bora") == 0) {
        printf("Bora Bora is a tropical paradise known for its overwater bungalows and stunning coral reefs.\n");
        printf("Famous places to visit: Mount Otemanu, Matira Beach, Coral Gardens.\n");
    } else if (strcmp(city, "Santorini") == 0) {
        printf("Santorini, a Greek island, is famous for its white-washed buildings and breathtaking sunsets.\n");
        printf("Famous places to visit: Oia, Fira, Akrotiri Archaeological Site.\n");
    } else if (strcmp(city, "Andes") == 0) {
        printf("The Andes mountain range offers spectacular landscapes and is the longest mountain range in the world.\n");
        printf("Famous places to visit: Machu Picchu, Patagonia, Aconcagua.\n");
    } else if (strcmp(city, "Swiss Alps") == 0) {
        printf("The Swiss Alps are renowned for their stunning alpine scenery and world-class skiing resorts.\n");
        printf("Famous places to visit: Jungfraujoch, Zermatt, Lake Geneva.\n");
    } else if (strcmp(city, "Bangkok") == 0) {
        printf("Bangkok, the capital of Thailand, is known for its vibrant street life, ornate temples, and bustling markets.\n");
        printf("Famous places to visit: Grand Palace, Wat Arun, Chatuchak Weekend Market.\n");
    } else if (strcmp(city, "Prague") == 0) {
        printf("Prague, the capital of the Czech Republic, is famous for its well-preserved historic architecture.\n");
        printf("Famous places to visit: Prague Castle, Charles Bridge, Old Town Square.\n");
    } else if (strcmp(city, "Phuket") == 0) {
        printf("Phuket, a Thai island, is known for its beautiful beaches, vibrant nightlife, and water activities.\n");
        printf("Famous places to visit: Patong Beach, Phi Phi Islands, Big Buddha.\n");
    } else if (strcmp(city, "Algarve") == 0) {
        printf("The Algarve, Portugal's southernmost region, is known for its stunning coastline and picturesque villages.\n");
        printf("Famous places to visit: Lagos, Benagil Cave, Praia da Marinha.\n");
    } else if (strcmp(city, "Blue Mountains") == 0) {
        printf("The Blue Mountains in Australia offer breathtaking landscapes, including eucalyptus forests and waterfalls.\n");
        printf("Famous places to visit: Three Sisters, Scenic World, Jenolan Caves.\n");
    } else if (strcmp(city, "Blue Ridge Mountains") == 0) {
        printf("The Blue Ridge Mountains in the USA provide a scenic escape with hiking trails and stunning views.\n");
        printf("Famous places to visit: Shenandoah National Park, Blue Ridge Parkway, Asheville.\n");
    } else {
        printf("City information not available.\n");
    }
}

int main() {
    printf("This program recommends a city based on your preferences.\n");

    char climate[20];
    printf("What type of climate do you prefer? (Hot/Cold/Tropical/Temperate): ");
    scanf("%s", climate);

    char location[20];
    printf("Do you prefer a beach or mountain location? (beach/mountain): ");
    scanf("%s", location);

    double budget;
    printf("Enter your budget: $");
    scanf("%lf", &budget);

    int numPeople;
    printf("How many people are traveling? ");
    scanf("%d", &numPeople);

    // Adjust the budget based on the number of people
    budget /= numPeople;

    char recommendedCity[30]; // Increased the size to accommodate the longest city name

    // Decision-making based on user preferences
    if (budget >= 1500) {
        // High budget cities
        if (strcmp(location, "beach") == 0) {
            if (strcmp(climate, "Tropical") == 0) {
                strcpy(recommendedCity, "Bora Bora");
            } else if (strcmp(climate, "Temperate") == 0) {
                strcpy(recommendedCity, "Santorini");
            }
        } else if (strcmp(location, "mountain") == 0) {
            if (strcmp(climate, "Tropical") == 0) {
                strcpy(recommendedCity, "Andes");
            } else if (strcmp(climate, "Temperate") == 0) {
                strcpy(recommendedCity, "Swiss Alps");
            }
        }
    } else {
        // Low budget cities
        if (strcmp(location, "beach") == 0) {
            if (strcmp(climate, "Tropical") == 0) {
                strcpy(recommendedCity, "Phuket");
            } else if (strcmp(climate, "Temperate") == 0) {
                strcpy(recommendedCity, "Algarve");
            }
        } else if (strcmp(location, "mountain") == 0) {
            if (strcmp(climate, "Tropical") == 0) {
                strcpy(recommendedCity, "Blue Mountains");
            } else if (strcmp(climate, "Temperate") == 0) {
                strcpy(recommendedCity, "Blue Ridge Mountains");
            }
        }
    }

    // Output the recommended city
    printf("\nBased on your preferences, we recommend visiting %s!\n", recommendedCity);

    // Provide additional information about the chosen city
    provideCityInfo(recommendedCity);

    return 0;
}
