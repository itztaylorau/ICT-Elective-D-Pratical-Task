#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define queueSize 4
char timeQueue[queueSize][5], citizenQueue[queueSize][30];
int head = 0, tail = 0;

/* Start of Maintainence module */
void mtem() {
  int i;
  for(i = 0; i < queueSize; ++i){
    printf("%d timeQueue: %s\n", i, timeQueue[i]);
    printf("Head: %d, Tail: %d\n", head, tail);
  }
}/*End of Maintainence module */

void displayQueue(){
  int i;
  for(i = 0; i < queueSize; ++i){
    printf("%s\t%s\n", timeQueue[i], citizenQueue[i]);
  }
}
void initQueue(){
  int i;
  for(i = 0; i < queueSize; ++i){
      strcpy(timeQueue[i], "");
      printf(timeQueue);
      strcpy(citizenQueue[i], "");
  }
  mtem();
  //displayQueue();
}
const char queue(char time[5], char citizen[30]){
  if(tail >= queueSize){
    printf("The queue is full.\n");
  }else{
    strcpy(timeQueue[tail], time);
          printf("\nAA %s\n", timeQueue);
    strcpy(citizenQueue[tail], citizen);
    tail += 1;
    mtem();
    //displayQueue();

  }

}
/*void dequeue(const char citizen){
  int i, cmpResult;
  for(i = 0; i < queueSize; ++i){
    cmpResult = strcmp(citizen, citizenQueue[i]);
    if(cmpResult == 0){
      strcpy(citizenQueue[i], "");
      strcpy(timeQueue[i], "");
    }
  }
}*/
int main() {
  initQueue();
  queue("10:00", "Ho Alex");
        printf("\nTail is %d\n", tail);
  queue("10:15", "Wong Mary");
  //dequeue("Ho Alex");
  //queue("10:30", "Lee Nicole");
  //dequeue("Wong Mary");
  //queue("10:45", "Au Stuart");
  //queue("11:00", "Cheng Michelle");
  //dequeue("Lee Nicole");
  //`dequeue("Au Stuart");
  return 0;
}
