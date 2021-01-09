#include <stdio.h>
#include <ctype.h>

void menu();
struct Person{
    int cardId;
    int pinCard;
};


int main(){
    struct Person person1;
    int balanceMonney = 0;
    int *cardId; 
    int *pinCardP;
    int alternatePin;
    int chose;
    int operation = 1;

    //Init pointer
    pinCardP = &person1.pinCard;
    cardId = &person1.cardId;

    person1.pinCard = 1234;
    puts("Welcome !!!");
    puts("\nEnter the card ID: ");
    scanf("%d", &person1.cardId);
    puts("Enter the pin.");
    scanf("%d", &alternatePin);
    if(alternatePin == *pinCardP){
        puts("Invalid Pin");
    do
    {   
          
        menu();
        scanf("%d", &chose);
        if(*cardId >0){
            switch (chose){
                case 1: 
                    puts("Introuce amount: ");
                    int intro;
                    scanf("%d", &intro);
                    balanceMonney += intro;
                    printf("You have entered in your account %d. \n", balanceMonney);
                    break;
                case 2:
                     printf("Your balance account is%d. \n", balanceMonney);
                     break;
            }
        
            operation = 0;
        }
        while(operation == 0){
            puts("Do you want another operation?");
            puts("1 (Yes) or 2 (No)");
            scanf("%d", &operation);
            
            break;
        }
        
        
    }while(operation == 1);
    }
    return 0;
}

void menu (){
    puts("1. Deploy Monney.");
    puts("2. Sold account.");

}

