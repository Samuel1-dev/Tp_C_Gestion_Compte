#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum { EPARGNE, COURANT } TypeCompte;  //structre pour le type de compte 
typedef enum { SIMPLE, PRIVILEGE } CategorieCompte; // structure pour la catégorie de compte
typedef enum { ACTIF, BLOQUE } EtatCompte; //structure pour l'état du compte

typedef struct {
    int jour;   // jour de la date
    int mois;   // mois de la date
    int annee;  // année de la date
} Date;

typedef struct {
    int identifiant;        // numéro du client
    char nom[50];     // nom du client
    char prenom[50];  // prénom du client
    char sexe; // adresse du client
    Date dateNaissance; // date de naissance du client
    char telephone[15]; // téléphone du client
} Client;

typedef struct {
    int numero;                    // numéro du compte
    Date dateCreation;            // date de création (date du jour)
    TypeCompte type;              // épargne ou courant
    CategorieCompte categorie;    // simple ou privilège
    float solde;                  // solde du compte
    float faciliteCaisse;         // 0 ou 200000 selon la catégorie
    EtatCompte etat;             // bloqué ou actif
    Client proprietaire;          // le client propriétaire du compte
} Compte;

void rechercherCompte(Compte *comptes, int nombreComptes, int numeroCompte) {
    for (int i = 0; i < nombreComptes; i++) {
        if (comptes[i].numero == numeroCompte) {
            // Afficher les détails du compte trouvé
            printf("Compte trouvé:\n");
            printf("Numéro: %d\n", comptes[i].numero);
            printf("Propriétaire: %s %s\n", comptes[i].proprietaire.prenom, comptes[i].proprietaire.nom);
            printf("Type: %s\n", (comptes[i].type == EPARGNE) ? "Épargne" : "Courant");
            printf("Catégorie: %s\n", (comptes[i].categorie == SIMPLE) ? "Simple" : "Privilège");
            printf("Solde: %.2f\n", comptes[i].solde);
            return;
        }
    }
    printf("Compte non trouvé.\n");
}
void rechercherClient(Client *clients, int nombreClients, int nomClient) {
    for (int i = 0; i < nombreClients; i++) {
        if (clients[i].nom == nomClient) {
            // Afficher les détails du client trouvé
            printf("Client trouvé:\n");
            printf("Identifiant: %d\n", clients[i].nom);
            printf("Nom: %s\n", clients[i].identifiant);
            printf("Prénom: %s\n", clients[i].prenom);
            printf("Sexe: %c\n", clients[i].sexe);
            printf("Date de naissance: %02d/%02d/%04d\n", clients[i].dateNaissance.jour, clients[i].dateNaissance.mois, clients[i].dateNaissance.annee);
            printf("Téléphone: %s\n", clients[i].telephone);
            return;
        }
    }
    printf("Client non trouvé.\n");
}




