#include <stdio.h>
#include <stdlib.h>
#define stackSize 4
int menu_selection, stackPointer = 3;
char date[30], time[30];
void addRecord(){
    if(stackPointer >= stackSize){
        printf("Can not store more calls.");
    }
}

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
        //deleteRecent();
        break;
    case 3:
        //displayRegister();
        break;
    }
}

int main(){
    while(menu_selection != 4){
        menu();
    }
}
