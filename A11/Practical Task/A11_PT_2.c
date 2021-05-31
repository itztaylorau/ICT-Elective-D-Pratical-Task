#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define queueSize 4
char timeQueue[queueSize][6], citizenQueue[queueSize][30];
int head = 0, tail = 0;

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
  displayQueue();
}
void queue(char time[5], char citizen[30]){
  if(tail >= queueSize){
    printf("The queue is full.\n");
  }else{
    strcpy(timeQueue[tail], time);
    strcpy(citizenQueue[tail], citizen);
    tail += 1;
    displayQueue();

  }

}
void dequeue(char citizen[30]){
  int i, cmpResult;
    if(head <= tail){
  for(i = 0; i < queueSize; ++i){
    cmpResult = strcmp(citizen, citizenQueue[i]);
    //printf("%d", cmpResult);
    if(cmpResult == 0){
      strcpy(citizenQueue[i], "");
      strcpy(timeQueue[i], "");
    }
  }
  head -= 1;
  displayQueue();
  }else{
    printf("The queue is empty.");
  }
}
int main() {
  initQueue();
  queue("10:00", "Ho Alex");
    printf("head: %d\n", head);
  queue("10:15", "Wong Mary");
    printf("head: %d\n", head);
  dequeue("Ho Alex");
    printf("head: %d\n", head);
  queue("10:30", "Lee Nicole");
    printf("head: %d\n", head);
  dequeue("Wong Mary");
    printf("head: %d\n", head);
  queue("10:45", "Au Stuart");
    printf("head: %d\n", head);
  queue("11:00", "Cheng Michelle");
    printf("head: %d\n", head);
  dequeue("Lee Nicole");
    printf("head: %d\n", head);
  dequeue("Au Stuart");
    printf("head: %d\n", head);
  return 0;
}
