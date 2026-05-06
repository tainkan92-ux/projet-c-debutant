#include <stdio.h>

// Fonctions
void afficherSolde(float solde);
float deposer();
float retirer(float solde);

int main(){
    
    int choix = 0;
    float solde = 0.0f;

    printf("*** BIENVENUE A LA BANQUE ***");

    do{
        printf("\nChoisissez une option :\n");
        printf("1. Consulter le solde\n");
        printf("2. Deposer de l'argent\n");
        printf("3. Retirer de l'argent\n");
        printf("4. Quitter\n");
        printf("\nVotre choix : ");
        scanf("%d", &choix);

        switch(choix){
            case 1:
                afficherSolde(solde);
                break;
            case 2: 
                solde += deposer();
                break;
            case 3:
                solde -= retirer(solde);
                break;
            case 4: 
                printf("\nMerci d'avoir utilise la banque !\n");
                break;
            default:
                printf("\nChoix invalide ! Veuillez entrer un nombre entre 1 et 4.\n");
        }
    }while(choix != 4);

    return 0;
}

// Afficher le solde
void afficherSolde(float solde){
    printf("\nVotre solde actuel est : %.2f €\n", solde);
}

// Deposer de l'argent
float deposer(){

    float montant = 0.0f;

    printf("\nMontant a deposer : ");
    scanf("%f", &montant);

    if(montant < 0){
        printf("Montant invalide.\n");
        return 0.0f;
    }
    else{
        printf("Depot de %.2f € effectue avec succes.\n", montant);
        return montant;
    }
}

// Retirer de l'argent
float retirer(float solde){
    
    float montant = 0.0f;

    printf("\nMontant a retirer : ");
    scanf("%f", &montant);

    if(montant < 0){
        printf("Montant invalide.\n");
        return 0.0f;
    }
    else if(montant > solde){
        printf("Fonds insuffisants ! Votre solde est de %.2f €\n", solde);
        return 0.0f;
    }
    else{
        printf("Retrait de %.2f € effectue avec succes.\n", montant);
        return montant;
    }
}
