#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define stackSize 3
int menu_selection = 1, stackPointer;
char date[stackSize][30], time[stackSize][30];

//Initize stack
void initStack(){
    int i;
    stackPointer = -1;
    for(i = 0; i < stackSize; ++i){
        strcpy(date[i], "");
        strcpy(time[i], "");
    }

}

//Push
void addRecord(){
    if(stackPointer + 1 == stackSize){
        printf("Can not store more calls.\n");
    }else{
        printf("\nDate (YYYY-MM-DD): ");
        scanf("%s", date[stackPointer + 1]);
        printf("Time (HH:MM:SS): ");
        scanf("%s", time[stackPointer + 1]);
        stackPointer += 1;
    }
}

//Pop
void deleteRecord(){
    if(stackPointer == -1){
        printf("No record for any calls.\n");
    }else{
        strcpy(date[stackPointer], "");
        strcpy(time[stackPointer], "");
        stackPointer -= 1;
    }
}

//Show stack
void displayRecord(){
    int i;
    for(i = stackSize - 1; i >= 0; --i){
        printf("%s\t%s\n", date[i], time[i]);
    }
    printf("\n");
}
//Menu
void menu(){
    printf("1. Add date and time\n");
    printf("2. Delete most recent call\n");
    printf("3. Show call register\n");
    printf("4. Exit\n");
    printf("Your action: ");
    scanf("%d", &menu_selection);

    switch(menu_selection){
    case 1:
        addRecord();
        break;
    case 2:
        deleteRecord();
        break;
    case 3:
        displayRecord();
        break;
    }
}

//Main
int main(){
    initStack();
    while(menu_selection != 4){
        menu();
    }
    return 0;
}
