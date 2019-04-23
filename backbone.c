#include <stdio.h>
#include <string.h>
#include <pthread.h>

extern char posWords[idk];
extern char negWords[idk];

//declaring variables
int pos = 0;
int neg = 0;
int polar = 0;

int main(void){
return 0;
}

void countPos(idk parameter yet){
}

void countNeg(idk parameter yet){
}

int calcPol(int pos, int neg, char str[idk2]){
 //Printing out string and polarity
  polar = pos + neg;
  
  if(polar>0){
  printf("Review: %s\nOpinion: Positive\n", str);
  }
  else if(polar=0){
  printf("Review: %s\nOpinion: Neutral\n", str);
  }
  else{
  printf("Review: %s\nOpinion: Negative\n", str);
  }
}

