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
      strcpy(citizenQueue[i], "");
  }
  displayQueue();
}
void queue(char time[5], char citizen[30]){
  if(tail >= queueSize){
    printf("\nThe queue is full.\n");
    displayQueue();
  }else{
    strcpy(timeQueue[tail], time);
    strcpy(citizenQueue[tail], citizen);
    tail += 1;
    displayQueue();

  }

}
void dequeue(char citizen[30]){
  int i, cmpResult;
    if(head < tail){
      for(i = 0; i < queueSize; ++i){
        cmpResult = strcmp(citizen, citizenQueue[i]);
        //printf("%d", cmpResult);
        if(cmpResult == 0){
          strcpy(citizenQueue[i], "");
          strcpy(timeQueue[i], "");
        }
      }
      head += 1;
      displayQueue();
    }else if(head  == tail){
      printf("The queue is empty.\n");
  }
}
int main() {
  initQueue();
  queue("10:00", "Ho Alex");

  queue("10:15", "Wong Mary");

  dequeue("Ho Alex");

  queue("10:30", "Lee Nicole");

  dequeue("Wong Mary");

  queue("10:45", "Au Stuart");

  queue("11:00", "Cheng Michelle");

  dequeue("Lee Nicole");

  dequeue("Au Stuart");

  dequeue("");

  return 0;
}
