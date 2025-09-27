#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 50
#define MAX_NOM 50
#define MAX_TEL 20

typedef struct {
    char nom[MAX_NOM];
    char telephone[MAX_TEL];
} Contact;

int main() {
    Contact carnets[MAX_CONTACTS];
    int nbContacts = 0;
    int choix;

    do {
        printf("Carnet de Contacts: \n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact par nom\n");
        printf("4. Supprimer un contact par nom\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                if (nbContacts >= MAX_CONTACTS) {
                    printf("Le carnet est plein.\n");
                } else {
                    printf("Nom : ");
                    scanf(" %[^\n]", carnets[nbContacts].nom);  // espace avant %
                    // consomme le \n restant

                    printf("Telephone : ");
                    scanf(" %[^\n]", carnets[nbContacts].telephone);


                    nbContacts++;
                    printf("Contact ajoute avec succes !\n");
                }
                break;

            case 2:
                if (nbContacts == 0) {
                    printf("Aucun contact dans le carnet.\n");
                } else {
                    printf("Liste des contacts: \n");
                    for (int i = 0; i < nbContacts; i++) {
                        printf("%d. %s - %s\n", i + 1, carnets[i].nom, carnets[i].telephone);
                    }
                }
                break;

            case 3: {
                char nomRecherche[MAX_NOM];
                int trouve = 0;
                printf("Nom a rechercher : ");
                scanf(" %[^\n]", nomRecherche);


                for (int i = 0; i < nbContacts; i++) {
                    if (strcmp(carnets[i].nom, nomRecherche) == 0) {
                        printf("Contact trouve : %s - %s\n", carnets[i].nom, carnets[i].telephone);
                        trouve = 1;
                        break;
                    }
                }
                if (trouve==0) {
                    printf("Aucun contact avec ce nom.\n");
                }
                break;
            }

            case 4: {
                char nomSuppr[MAX_NOM];
                int indice = -1;
                printf("Nom a supprimer : ");
                scanf(" %[^\n]", nomSuppr);


                for (int i = 0; i < nbContacts; i++) {
                    if (strcmp(carnets[i].nom, nomSuppr) == 0) {
                        indice = i;
                        break;
                    }
                }

                if (indice != -1) {
                    for (int i = indice; i < nbContacts - 1; i++) {
                        carnets[i] = carnets[i + 1];
                    }
                    nbContacts--;
                    printf("Contact supprime.\n");
                } else {
                    printf("Contact non trouve.\n");
                }
                break;
            }

            case 5:
                printf("Au revoir \n");
                break;

            default:
                printf("Choix invalide reessayez.\n");
                break;

        }

    } while (choix != 5);

    return 0;
}
