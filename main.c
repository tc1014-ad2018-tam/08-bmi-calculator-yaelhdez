//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>

double Calculate_metric_IBM(double kg, double m){ //---This Function calculates the IBM about metric system---
    double result; //declaration of variables
    result= kg/(m*m); //operation
    return  result; //The function returns the variable "result"
}

double Calculate_imperial_IBM(double pound, double ft){ //---This Function calculates the IBM about imperial System---
    double result,kg,m; //declaration of variables
    kg=pound*0.453592; //conversion of units
    m=ft*0.3048; //conversion of units
    result=kg/(m*m); //operation
    return  result; //The function returns the variable "result"
}

double IBM_Categories(double IBM){ //---This Function identify what is your IBM category---
    if (IBM<18.50){
    printf("You are under the normal Height"); //Low Height
    }
    else if(IBM>= 18.50 && IBM<25.00){ //Normal Height
    printf("You are on the normal Height");
    }
    else if (IBM>=25.00 && IBM<30.00){ //OverHeight
    printf("You are overweight");
    }
    else if (IBM>=30.00 && IBM<35.00){ //Low obesity
    printf("you have low obesity");
    }
    else if (IBM>=35.00 && IBM<40){ //Medium obesity
    printf("You have obesity");
    }
    else{ //Super obesity
    printf("You have Extreme obesity");
    }
}
int main() { //---Main function---
    unsigned short int option=0; //Declaration of variables
    double w=0.0, h=0.0, IBM; //Declaration of variables

    printf("This program is going to help you to get your BMI"); //Presentation of the program
    printf("What system would you like to use? \n Enter 1 to use the metric units \n Enter 2 to use the imperial units\n");
    scanf("%i",&option); //option request
    switch(option){
        case 1: //The program does this if the user enter a 1
            do { //If the user thinks that he or she is a particle, the program will ask again the height
                printf("\nGive me your height in Meters");
                scanf("%lf", &h); //Height request
            }while(h<=0);
                 printf("\nGive me your weight in Kilograms");
                 scanf("%lf",&w); //Weight request
                 IBM=Calculate_metric_IBM(w,h); //gives the value of the function to a variable
                 printf("\nYour IBM is: %lf \n",IBM); //Output
                 IBM_Categories(IBM); //Output of the IBM category function
            break;

        case 2: //The program does this if the user enter a 2
            do { //If the user thinks that he or she is a particle, the program will ask again the height
                printf("\nGive me your height in Feets");
                scanf("%lf", &h); //Height request
            }while(h<=0);
            printf("\nGive me your weight in Pounds");
            scanf("%lf",&w); //Weight request

            IBM=Calculate_imperial_IBM(w,h); //gives the value of the function to a variable
            printf("\nYour IBM is: %lf \n",IBM); //output
            IBM_Categories(IBM); //Output of the IBM category function
            break;

        default: //The program does this if the user are an "$%&#%#$& and enter another number :)
            printf("This is not an option, bye bye");
            break;

    }

    return 0;
}