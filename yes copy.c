#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // Include for exit function


void printDestination(char* destination) {
    if (strstr(destination, "Spain")) {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Spain!\n"
               "Spain captivates with diverse landscapes, rich history, vibrant culture, and lively festivals, ensuring an unforgettable and immersive travel experience.\n");
    } 
    else if (strstr(destination, "Albania")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Albania!\n"
               "Albania, with its breathtaking landscapes, ancient history, and warm hospitality, promises an unforgettable and immersive travel experience.\n");
    } 
    else if (strstr(destination, "Portugal")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Portugal!\n"
               "Portugal welcomes you with enchanting landscapes, a rich maritime history, vibrant culture, and friendly locals for an unforgettable travel experience.\n");
    } 
    else if (strstr(destination, "San Marino")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is San Marino!\n"
               "San Marino, nestled in the heart of Italy, offers charming landscapes, rich history, and a tranquil ambiance for an unforgettable travel experience.\n");
    } 
    else if (strstr(destination, "France")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is France!\n"
               "France, known for its art, cuisine, and diverse landscapes, offers a perfect blend of culture and relaxation for a memorable travel experience.\n");
    } 
    else if (strstr(destination, "Bulgaria")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Bulgaria!\n"
               "Bulgaria, with its rich history and picturesque landscapes, provides a charming and affordable travel experience.\n");
    } 
    else if (strstr(destination, "Hungary")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Hungary!\n"
               "Hungary, known for its thermal baths, historic architecture, and vibrant culture, offers a unique and enjoyable travel experience.\n");
    } 
    else if (strstr(destination, "Slovakia")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Slovakia!\n"
               "Slovakia, nestled in the heart of Europe, boasts stunning landscapes and a rich cultural heritage, providing a memorable travel experience.\n");
    } 
    else if (strstr(destination, "Italy")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Italy!\n"
               "Italy, with its iconic landmarks, art, and delicious cuisine, promises a romantic and culturally enriching travel experience.\n");
    } 
    else if (strstr(destination, "Cyprus")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Cyprus!\n"
               "Cyprus, with its beautiful beaches and rich history, offers a perfect blend of relaxation and cultural exploration for a memorable travel experience.\n");
    } 
    else if (strstr(destination, "Greece")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Greece!\n"
               "Greece, with its ancient ruins, stunning islands, and warm hospitality, provides a delightful and historically rich travel experience.\n");
    } 
    else if (strstr(destination, "Estonia")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Estonia!\n"
               "Estonia, known for its medieval architecture and vibrant tech scene, offers a unique and modern travel experience.\n");
    } 
    else if (strstr(destination, "Netherlands")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is the Netherlands!\n"
               "The Netherlands, with its picturesque canals, vibrant cities, and cycling culture, promises a relaxed and culturally rich travel experience.\n");
    } 
    else if (strstr(destination, "Denmark")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Denmark!\n"
               "Denmark, known for its fairy-tale castles and modern design, offers a mix of history and contemporary charm for an enjoyable travel experience.\n");
    } 
    else if (strstr(destination, "Germany")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Germany!\n"
               "Germany, with its historic landmarks, diverse cities, and renowned efficiency, provides a culturally rich and dynamic travel experience.\n");
    } 
    else if (strstr(destination, "Luxembourg")) 
    {
        printf("\nAfter a thorough analysis, it has been concluded that the optimal destination for you is Luxembourg!\n"
               "Luxembourg, known for its picturesque landscapes and medieval castles, offers a tranquil and charming travel experience.\n");
    } 
    else 
    {
        printf("\nError. Check the spelling.\n");
    }
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

    printf("Do you prefer 'beach' or 'mountains'?\n");
    scanf("%s", where);

    printf("Are you interested in the nightlife? (yes/no)\n");
    scanf("%s", nightlife);


    if (budget <= 1500 && budget >= 300) {

    } 







    int budget;
    char weather[20];
    char where[20];
    char nightlife[20];

    printf("Welcome to QuickTravels! This code will recommend you a European destination based on the answers you input.\nWhat is your budget?\n€");
    scanf("%d", &budget);

    printf("Do you prefer 'temperate' climate or 'continental' climate?\n");
    scanf("%s", weather);
   
    for (int i = 0; weather[i]; i++) 
    {
        weather[i] = tolower(weather[i]);
    }

    printf("Do you prefer 'beach' or 'mountains'?\n");
    scanf("%s", where);
   
    for (int i = 0; where[i]; i++) 
    {
        where[i] = tolower(where[i]);
    }

    printf("Are you interested in the nightlife? (yes/no)\n");
    scanf("%s", nightlife);
  
    for (int i = 0; nightlife[i]; i++) 
    {
        nightlife[i] = tolower(nightlife[i]);
    }

    if (budget <= 1500 && budget >= 300) 
    {
        if (strcmp(weather, "temperate") == 0) 
        {
            if (strcmp(where, "beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Spain");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Albania");
                }
 
            } 
            else if (strcmp(where, "mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Portugal");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("San Marino");
                }

            }
        } 
        else if (strcmp(weather, "continental") == 0) 
        {
            if (strcmp(where, "beach") == 0) {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("France");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Bulgaria");
                }
 
            } 
            else if (strcmp(where, "mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Hungary");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Slovakia");
                }

            }
        }
    } 
    else if (budget > 1500) 
    {
        if (strcmp(weather, "temperate") == 0) 
        {
            if (strcmp(where, "beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Italy");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Cyprus");
                }

            } 
            else if (strcmp(where, "mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Greece");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Estonia");
                }

            }
        } 
        else if (strcmp(weather, "continental") == 0) 
        {
            if (strcmp(where, "beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Netherlands");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Denmark");
                }

            else if (strcmp(where, "mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0) 
                {
                    printDestination("Germany");
                } 
                else if (strcmp(nightlife, "no") == 0) 
                {
                    printDestination("Luxembourg");
                }

            }
        }
    } 
    else if(budget == 0)
    {
        printf("Blud wants to travel free lol\n");
    }
    else
    {
        printf("Go earn some money and come back\n");
    }

    return 0;
}
