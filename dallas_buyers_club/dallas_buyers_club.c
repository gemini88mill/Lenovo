#include <stdlib.h>
#include <stdio.h>


int main() {
    int test_cases, i;

    int num_names;
    char **names = malloc(sizeof(char) * 20 * 1000); // collecttion for all characters
    int names_to_match;
    char **letters_to_match = malloc(sizeof(char) * 20 * 1000);

    scanf("%d", &test_cases);

    scanf("%d", &num_names);
    for(i = 0; i < num_names; i++){
        scanf("%s", names[i]);
    }
    scanf("%d", &names_to_match);
    for(i = 0; i < names_to_match; i++){
        scanf("%s", letters_to_match[i]);
    }

    return 0;
}

//