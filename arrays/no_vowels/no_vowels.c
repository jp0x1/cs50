#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    //get the string from the first
    if (argc > 1) { 
        char word[50];
        strncpy(word, argv[1], sizeof(word)-1);
        //loop over the word
        for (int i=0; i < strlen(word); i++){
            //loop over the vowels
            switch (word[i]){
                case 'a':
                    word[i] = '6';
                    break;
                case 'e':
                    word[i] = '3';
                    break;
                case 'i':
                    word[i] = '1';
                    break;
                case 'o':
                    word[i] = '0';
                    break;
            }
        }
        printf("Your new word is: %s\n", word);

    } else {
        printf("%s", "no command line arguments provided\n");
    }
    return 0;
}