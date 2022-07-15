#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

char tempchar;
int choice;

int main(){
    srand((unsigned) time(NULL));
    int len, amount;
    
    //Password length declaration
    printf("\nEnter the length of your desired password: ");
    scanf("%d", &len);
    char Password[len];
    
    //Parameter main menu
    printf("\nPick the desired parameter for your combination:");
    printf("\n1. Only capital letters (ABC)");
    printf("\n2. Only lower case letters (abc)");
    printf("\n3. Only numbers (123)");
    printf("\n4. Capital and lower case letters (AbC)");
    printf("\n5. Capital letters and numbers (A1B)");
    printf("\n6. Lower case letters and numbers (a1b)");
    printf("\n7. Combination of everything (A1b)");
    printf("\n8. End program\n\n");
    
    //Choice input
    do{
    printf("Your choice -> ");
    scanf("%d", &choice);
    getchar();
    }while (choice < 1 || choice > 8);

    //Amount of combinations
    if (choice != 8){
        printf("\nEnter the desired amount of combinations: ");
        scanf("%d", &amount);
    }
    
    //Spacing
    printf("\n");
    
    //Multiple combinations generation
    for(int i = 1; i <= amount; i++){

        //Main menu choice switch-case
        switch (choice){
        
            //Only capital letters
            case 1:
                for (int j = 0; j < len; j++){
                tempchar = CapitalGen();
                Password[j] = tempchar;
                }
                break;
            
            //Only lower case letters
            case 2:
                for (int j = 0; j < len; j++){
                tempchar = LowerGen();
                Password[j] = tempchar;
                }
                break;
            
            //Only numbers
            case 3:
                for (int j = 0; j < len; j++){
                tempchar = NumbersGen();
                Password[j] = tempchar;
                }
                break;
            
            //Capital and lower case letters combination
            case 4:
                for (int j = 0; j < len; j++){
                tempchar = CapitalLowerGen(choice);
                Password[j] = tempchar;
                }
                break;
            
            //Capital letters and numbers combination
            case 5:
                for (int j = 0; j < len; j++){
                tempchar = CapitalNumGen(choice);
                Password[j] = tempchar;
                }
                break;
            
            //Lower case letters and numbers combination
            case 6:
                for (int j = 0; j < len; j++){
                tempchar = LowerNumGen(choice);
                Password[j] = tempchar;
                }
                break;
            
            //Combiantion of everything
            case 7:
                for (int j = 0; j < len; j++){
                tempchar = PasswordGen(choice);
                Password[j] = tempchar;
                }
                break;
            
            //End program
            case 8:
                return 1;
            }
        
        //Output your password
        printf("Your password -> ");
        for (int j = 0; j < len; j++){
            printf("%c", Password[j]);
            
            //Spacing

            if (j == len - 1 && i < amount){
                printf("\n\n");
            }

            else if (j == len - 1 && i == amount){
                printf("\n\n");
            }
        }
    }
    return 1;
}