#include <stdio.h>
#include <string.h> //string manipulation library strcmp() and strcpy()      

// define constants
#define max_word_len 15
#define max_sentence_len 100
#define max_words 10 

// int search(char word[], char arr[][max_word_len], int arrSize) {
//     for (int i = 0; i < arrSize; i++){
//         if (!strcmp(arr[i], word)) return i;   //strcmp(arr[i],word) compared each word in arr with word
//     } return -1;
// }

int main() { 
    

    // to get input with spaces
    char input[max_sentence_len];
    scanf("%[^\n]s", input); // better than the previous code
    
    // variable to store info
    int word_count = 0,index=0;

    int frequency[max_words];
    //filling zero
    for (int i = 0; i < max_words; i++)
    {
        frequency[i] = 0;
    }

    char words[max_words][max_word_len];

    // looping inside the input
    char current_word[max_word_len];
    int current_len = 0;
    for (int i = 0, len = strlen(input); i < len; i++){    
        if ((input[i] == ' ' || input[i] == '\0') && current_len != 0) {
            current_word[current_len] = '\0';
            
            //int index = search(current_word, words, word_count);
            // the search function can be used here 
            //if you can't understand the passing values

            // uncomment this code is you dont understand the above search function
            for (int i = 0; i < word_count; i++){
                if (strcmp(words[i], current_word) == 0) index = i; // strcmp output 0 means same string
            } index = -1;

            // if word not present
            if (index == -1) {
                strcpy(words[word_count], current_word); // adding it in word
                index = word_count++;
            }
            
            frequency[index]++; // increasing the count
            current_len = 0;    // resetting the word   
        } else {
            current_word[current_len++] = input[i];
        }
    }

    for (int i = 0; i < word_count; i++){
        printf("%s : %d\n", words[i], frequency[i]);
    }
}

