#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int capital_character(int *arr){
  int i;
  for (i=0; i<26; i++){
    arr[i]=rand()%26 + 65;
  }
  for (i=0; i<26; i++){
    return arr[i];
  }
}
int small_character(int *arr){
  int i;
  for (i=0; i<26; i++){
    arr[i]=rand()%26 + 97;
  }
  for (i=0; i<26; i++){
    return arr[i];
  }
}
int numeric_values(int *arr){
  int i;
  for(i=0; i<10; i++){
    arr[i]=rand()%10;
  } 
  for (i=0; i<10; i++){
    return arr[i];
  }
}


// MAIN FUNCTION

int main(){
  int arr[26];
  int capital[26],small[26],numerical[10];
  int i;
  time_t t;
  //For random generating
  srand((unsigned) time(&t));
  int j;
  j=0;

  while(j<=10){
    for (i=0; i<26; i++){
      capital[i]=capital_character(arr);
    }
    for (i=0; i<26; i++){
      small[i]=small_character(arr);
    }
    for (i=0; i<10; i++){
      numerical[i]=numeric_values(arr);
    }
      for(i=0; i<3; i++){
        printf("%c",capital[i]);
      }
    for (i=0; i<3; i++){
      printf("%c", small[i]);
    }
    for (i=0; i<3; i++){
      printf("%d", numerical[i]);
    }
    printf("\n");
    j=j+1;
    sleep(1);

  }


return 0;
}
