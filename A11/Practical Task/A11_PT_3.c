#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define queueSize 4
int count, head = 0, tail = 0;
char queue[queueSize][5];
void showLED(){
  int i;
  for(i = 0; i < queueSize; ++i){
    printf("%s\t", queue[i]);
  }
  printf("\nno. of cooked set of meals in the queue = %d.\n", count);
  printf("Debug News: %d and %d\n", head, tail);
}
void ready(char input[10]){
  if(count == queueSize){
    printf("The queue is full.\n");
  }else{
    if(tail == queueSize){
      strcpy(queue[queueSize - count], input);
      count += 1;
      tail += 1;
      showLED();
    }else{
      strcpy(queue[count], input);
      count += 1;
      tail += 1;
      showLED();
    }
  }
}
void take(char input[10]){
  int i, cmpResult;
  if(count == 0){
    printf("The queue is empty.\n");
  }else{
    for(i = 0; i < queueSize; ++i){
      cmpResult = strcmp(input, queue[i]);
      if(cmpResult == 0){
        strcpy(queue[i], "");
        count -= 1;
        head += 1;
        showLED();
      }else{

      }
    }
  }
}
int main(){
  ready("101");
  ready("102");
  ready("103");
  ready("104");
  ready("105");
  take("101");
  take("102");
  ready("105");
  take("103");
  take("104");
  ready("106");
  take("105");
  take("106");
  take("");
  return 0;
}
