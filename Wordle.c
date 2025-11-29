#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define TRY 5


void selectWord(char **array, int size){
    int randomWord = rand() % size;
    printf("%s\n", array[randomWord]);
}

void guessWord(){
    for(int i = 0; i < TRY; i++){
        
    }
}


int main(void){

    srand(time(NULL));


    char *words[] = {"Hallo", "Blume", "Taste", "Buche"};
    int wordCnt = sizeof(words) / sizeof(words[0]);
   
    selectWord(words, wordCnt);

    return 0;
}