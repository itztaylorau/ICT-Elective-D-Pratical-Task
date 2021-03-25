#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
char ram[10][20];
void read(){
    int i, j, count;
    FILE *inFile;
    inFile = fopen("assets\\ParticalTask4_source.txt", "r");
    while(fgets(ram[i], 20, inFile) != NULL){
        ++i;
    }
    for(i = 0; i < 4; ++i){
        for(j = 0; j < strlen(ram[i]); ++j){
           if(ram[i][j] == 'O'||ram[i][j] == 'r'||ram[i][j] == 'a'||ram[i][j] == 'n'||ram[i][j] == 'g'||ram[i][j] == 'e'){
            count += 1;
           }
        }
        if(count == 6){
            strcpy(ram[i], "Orange	     2.8\n");
        }
        count = 0;
    }
    fclose(inFile);
}

void write(){
    FILE *outFile;
    outFile = fopen("assets\\ParticalTask4_output.txt", "w");
    int i;
    for(i = 0; i < strlen(ram[i]); ++i){
        fprintf(outFile, "%s", ram[i]);
    }
    fclose(outFile);
}

int main(){
    read();
    write();
}
