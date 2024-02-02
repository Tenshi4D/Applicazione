#include <stdio.h>
#include <string.h>

int main() 
{
    int budget;
    char weather[20];
    char where[20];
    char nightlife[20];

    while (1) 
    {
        printf("Welcome to QuickTravels! This code will recommend you a European destination based on the answers you input.\nWhat is your budget?\n€");
        if (scanf("%d", &budget) == 1 && budget > 0) 
        {
            break;
        } 
        else 
        {
            printf("Invalid input. Please insert a valid budget in euros (positive integer).\n");
            while (getchar() != '\n');
        }
    }

    if (budget < 300) 
    {
        printf("You are poor.\n");
        return 0;
    }

    printf("Do you prefer 'temperate' climate or 'continental' climate?\n");
    scanf("%s", weather);

    while (strcmp(weather, "temperate") != 0 && strcmp(weather, "continental") != 0 && strcmp(weather, "Cont") != 0) 
    {
        printf("Invalid input. Please choose a valid climate (temperate or continental).\n");
        scanf("%s", weather);
    }

    printf("Do you prefer 'beach' or 'mountains'?\n");
    scanf("%s", where);

    while (strcmp(where, "beach") != 0 && strcmp(where, "mountains") != 0 && strcmp(where, "Beach") != 0 && strcmp(where, "Mountains") != 0) 
    {
        printf("Invalid input. Please choose a valid location (beach or mountains).\n");
        scanf("%s", where);
    }

    printf("Are you interested in the nightlife? (yes/no)\n");
    scanf("%s", nightlife);

    while (strcmp(nightlife, "yes") != 0 && strcmp(nightlife, "no") != 0 && strcmp(nightlife, "Yes") != 0 && strcmp(nightlife, "No") != 0) 
    {
        printf("Invalid input. Please choose a valid answer for nightlife (yes or no).\n");
        scanf("%s", nightlife);
    }

    int destinationFound = 0;

    if (budget <= 1000) 
    {
        if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
            (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0)) 
            {
            if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
            {
                printf("The best destination for you is Spain!\n");
                destinationFound = 1;
            } 
            else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
            {
                printf("The best destination for you is Albania!\n");
                destinationFound = 1;
            } 
            else 
            {
                printf("Error. Control the spelling.\n");
            }
        } 
        else if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
            (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0)) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Portugal!\n");
                    destinationFound = 1;
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is San Marino!\n");
                    destinationFound = 1;
                } 
                else 
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else 
            {
            printf("Error. Control the spelling.\n");
            }
    } 
    else if (budget > 1000 && budget <= 2000) 
    {
        if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
            (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0)) 
            {
            if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
            {
                printf("The best destination for you is Italy!\n");
                destinationFound = 1;
            } 
            else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
            {
                printf("The best destination for you is Croatia!\n");
                destinationFound = 1;
            } 
            else 
            {
                printf("Error. Control the spelling.\n");
            }
            } 
        else if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
                   (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0)) 
                   {
            if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
            {
                printf("The best destination for you is Bulgaria!\n");
                destinationFound = 1;
            } 
            else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
            {
                printf("The best destination for you is Switzerland!\n");
                destinationFound = 1;
            } 
            else 
            {
                printf("Error. Control the spelling.\n");
            }
        } 
        else 
        {
            printf("Error. Control the spelling.\n");
        }
    } 
    else if (budget > 2000 && budget <= 3000) 
    {
        if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
            (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0)) 
            {
            if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
            {
                printf("The best destination for you is Greece!\n");
                destinationFound = 1;
            } 
            else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
            {
                printf("The best destination for you is France!\n");
                destinationFound = 1;
            } 
            else 
            {
                printf("Error. Control the spelling.\n");
            }
        } 
        else if ((strcmp(weather, "temperate") == 0 || strcmp(weather, "continental") == 0 || strcmp(weather, "Cont") == 0) &&
                   (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0)) 
                   {
            if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
            {
                printf("The best destination for you is Germany!\n");
                destinationFound = 1;
            } 
            else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
            {
                printf("The best destination for you is Denmark!\n");
                destinationFound = 1;
            } 
            else 
            {
                printf("Error. Control the spelling.\n");
            }
        } 
        else 
        {
            printf("Error. Control the spelling.\n");
        }
    } 
    else 
    {
        printf("Error. Could not find a suitable destination based on the specified criteria.\n");
        destinationFound = 1;
    }

    if (!destinationFound) 
    {
        printf("Error. Could not find a suitable destination based on the specified criteria.\n");
    }

    return 0;
}
