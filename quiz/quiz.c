#include<stdio.h>
#include <ctype.h>
//QUIZ GAME

int main(){

    char questions[][100] = {"Quelle est la capitale de la France ?",
                             "Quelle est la racine carre de 9 ?",
                             "Quel est le surnom de Louis XIV ?"
    };

    char options[][100] = {"A. New York\nB. Berlin\nC. Rome\nD. Paris",
                           "A. 4\nB. 6\nC. 3\nD. 12",
                           "A. Le Roi Soleil\nB. Le Roi Lune\nC. Le sans tete\nD. Le Roi"
    };

    char answerKey[] = {'D', 'C', 'A'};

    //Calcul le nombre de questions
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** Question/Reponse ***\n");

    for(int i = 0; i < questionCount; i++){

        //Montre les questions et reponses
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEntrez votre reponse: ");
        scanf(" %c", &guess); 

        guess = toupper(guess);//Si jamais la reponse est ecrite en minuscule, la convertit en majusucule
        
        if(guess == answerKey[i]){
            printf("Bonne reponse !\n");
            score++;
        }
        else{
            printf("Mauvais reponse !\n");
            printf("La bonne reponse etait: %c\n", answerKey[i]); 
        }
    }
    
    printf("\nT'as note est de %d sur %d, Bien joue !\n", score, questionCount);

    return 0;
}
