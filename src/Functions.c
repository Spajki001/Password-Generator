#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int type;
char temp;

//Type of char
void Type(int choice){
    switch (choice){
        case 4:
            do{
                type = (int)rand() % 3 + 1;
            }while (type == 3);
            break;
        case 5:
            do{
                type = (int)rand() % 3 + 1;
            }while (type == 2);
            break;
        case 6:
            do{
                type = (int)rand() % 3 + 1;
            }while (type == 1);
            break;
        case 7:
            type = (int)rand() % 3 + 1;
            break;
    }
}

//Generation of capital letters
char CapitalGen(){
    temp = (int)rand()%26;
    temp += 65;
    return temp;
}

//Generation of lower case letters
char LowerGen(){
    temp = (int)rand()%26;
    temp += 97;
    return temp;
}

//Generation of numbers
char NumbersGen(){
    temp = (int)rand()%10;
    temp += 48;
    return temp;
}

//Generation of mix between capital and lower case letters
char CapitalLowerGen(int choice){
    Type(choice);
    switch (type){
        case 1:
            CapitalGen();
            break;
        case 2:
            LowerGen();
            break;
    }
    return temp;
}

//Generation of mix between capital letters and numbers
char CapitalNumGen(int choice){
    Type(choice);
    switch (type){
        case 1:
            CapitalGen();
            break;
        case 3:
            NumbersGen();
            break;
    }
    return temp;
}

//Generation of mix between lower case letters and numbers
char LowerNumGen(int choice){
    Type(choice);
    switch (type){
        case 2:
            LowerGen();
            break;
        case 3:
            NumbersGen();
            break;
    }
    return temp;
}

//Generation of mix between all
char PasswordGen(int choice){
    Type(choice);
    switch (type){
        case 1:
            CapitalGen();
            break;
        case 2:
            LowerGen();
            break;
        case 3:
            NumbersGen();
            break;
    }
    return temp;
}