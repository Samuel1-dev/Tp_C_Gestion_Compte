# Tp_C_Gestion_Compte

# Partie Samuel 
D'abord j'ai fait type def enum pour le type du copte la categorie du compte et l'etat tu compte pour dire que cette struture definis d'abord un 
ensemble de variable entière et pour aussi dire que c'est un choix entre plusieurs valeurs.
Ensuite pour les structures je pense que vous avez compris avec les commentaires 
Pour les fonctions j'en ai créer 2 pour faire en sorte que si le user veut rechercher le compte ou du nom du client qui puisse le faire .
Pour la fonction rechercherCompte et il en est de meme pour la fonction rechercherClient j'ai fait une boucle for qui parcours les clients et qui verifie que ce que l'utillisateur a entrez correspond a un client sinon on retour users not found 

Dans le main on mettra une structure iterrative if pour  récupérer le nom de l'utilisateur(char*) ou le numero du compte(int)


# partie Oswald 
pour afficher l'historique des operations , j'ai commencé par implémenté une fonction strcmp pour comparer deux chaines de caracteres et cela caractere par caractere parce que c'est une fonction sensible a la casse .Si les deux chaines de caractere sont identiques , cela retourne 0 dans le cas contraire ça retourne une valeur negative , dans notre cas on veur verifier si les deux caracteres pour le pin ne sont pas egaux pour returner une message d'erreur dans ce cas 
FILE= verifie si le fichier existe ou pas , si cela n'existe pas de retourner impossible d'ouvrir le fichier.
Op = une variable pour l'operation journal
Apres il y a les infos pour l'en-tete 
lecture ligne par ligne = tant que ça lie op(operation du compte)
fread qui prend en parametre (variable , l'espace du type de donné , le nombre de la variable qu'on veut écrire et le fichier ) si le numero du compte de l'operation est egale au numero du compte client , afficher le jour , le mois l'année . Ça affiche aussi le type de compte , le nouveau solde et le montant. Si ça n'arrive pas à faire le Fread , ça retourne = aucune operation trouvée pour ce compte .