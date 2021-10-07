#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{   // Création des tableaux pour stocker les éléments films
    string kids[3] = { "Némo", "Blanche Neige", "Là Haut"};
    string ados[3] = { "Iron Man", "Avengers", "James Bond"};
    string adult[3] = { "Hills Have Eyes", "Evil Dead", "Don't Breath"};
    int age = get_int("Age : ");
    printf("Merci de taper 'oui' si un film ou une catégorie t'intéresse. \n");

    if (age < 11) // On compare l'âge donné aux âges limites des catégories
    {
        printf("Tu peux aller voir les films de la catégorie enfants. \n");
        for (int j = 0; j < 3; j++) // boucle pour regarder les éléments du tableau
        {
            string answer = get_string("Veux tu aller voir %s ? ", kids[j]); // on affiche les différents éléments et on recueille l'entrée utilisateur
            if (strcmp(answer, "oui") == 0) // si l'utilisateur tape oui
            {
                printf("Bon ciné ! \n");
                return 0; // on renvoie que tout s'est bien passé
            }
        }
        printf("Tant pis, une autre fois... \n");
    }

    else if (age >= 11 && age <= 17)
    {
        printf("Tu peux aller voir les films de la catégorie ados. \n");
        for (int j = 0; j < 3; j++)
        {
            string answer = get_string("Veux tu aller voir %s ? ", ados[j]);
            if (strcmp(answer, "oui") == 0)
            {
                printf("Bon ciné ! \n");
                return 0;
            }
        }
        printf("Tant pis, une autre fois... \n");
    }
    else if (age > 17)
    {
        printf("Tu peux aller voir les films de la catégorie adultes. \n");
        for (int j = 0; j < 3; j++)
        {
            string answer = get_string("Veux tu aller voir %s ? ", adult[j]);
            if (strcmp(answer, "oui") == 0)
            {
                printf("Bon ciné ! \n");
                return 0;
            }
        }
        string choix = get_string("Veux-tu aller voir un film de la catégorie ados ? \n");
        if (strcmp(choix, "oui") == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                string answer = get_string("Veux tu aller voir %s ? ", ados[j]);
                if (strcmp(answer, "oui") == 0)
                {
                    printf("Bon ciné ! \n");
                    return 0;
                }
            }
        }
        string choix2 = get_string("Veux-tu aller voir un film de la catégorie enfants ? \n");
        if (strcmp(choix2, "oui") == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                string answer = get_string("Veux tu aller voir %s ? ", kids[j]);
                if (strcmp(answer, "oui") == 0)
                {
                    printf("Bon ciné ! \n");
                    return 0;
                }
            }
        }
        printf("Tant pis, une autre fois... \n");
    }
}
