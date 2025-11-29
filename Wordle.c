#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define TRY 5


char *selectWord(char **array, int size){
    int randomWord = rand() % size;
    //printf("%s\n", array[randomWord]);
    
}

void guessWord(char *Word){
    
    printf("\n");
    char guess[5];
    scanf("%5s", guess);
    
    for(int i = 0; i < TRY; i++){
        if(guess[i] == Word[i]){
            printf("c\n");
        }
        else{
            printf("f");
        }
    }
}


int main(void){

    srand(time(NULL));


    char *words[] = {"hallo", "blume", "taste", "buche"};
    int wordCnt = sizeof(words) / sizeof(words[0]);
   
    char *Word = selectWord(words, wordCnt);

    guessWord(Word);

    return 0;
}