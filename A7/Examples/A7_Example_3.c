#include <stdio.h>
#include <stdlib.h>

int marks[10];
float finalAverage;

void arrayInit() {
    int i;
    for(i = 0; i < 10; i++){
        marks[i] = 0;
    }
    receiveData();
}

void receiveData() {
    int i;
    for(i = 0; i < 10; i++){
        printf("Student %d's score:", i);
        scanf("%d", &marks[i]);
    }
    calculateAverage();
}

void calculateAverage() {
    int i;
    float tempSum = 0;
    for(i = 0; i < 10; i ++){
        tempSum = tempSum + marks[i];
    }
    finalAverage = tempSum / 10;
    outputAverage();
}

void outputAverage() {
    printf("Average score = %.2f", finalAverage);
}

int main(){
    arrayInit();
    return 0;
}
