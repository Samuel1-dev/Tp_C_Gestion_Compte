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
