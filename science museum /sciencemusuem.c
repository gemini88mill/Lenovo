#include <stdlib.h>
#include <stdio.h>

#define INDIVIDUAL 105
#define COUPLE 125
#define FAMILY 145
#define NANNY 50
#define ADDITIONAL 25

int collect_family(int member);

int main() {
    int test_cases, i; //max 50
    int member = 0;

    scanf("%i", &test_cases); //collect first line

    for (i = 0; i < test_cases; i++) {
        int price = collect_family(member);
    }

    return 0;
}

int collect_family(int member) {
    int adults, children, nannies, indiv, result = 0;
    scanf("%d %d %d %d", &adults, &children, &nannies, &indiv);
    //scans whole line and puts into categories

    if (children > 0){
        member = FAMILY + (nannies * NANNY) + (indiv * ADDITIONAL);
    } else if(adults == 2 && children == 0){
        member = COUPLE + (nannies * NANNY) + (indiv * ADDITIONAL);
    } else if (adults < 2){
        member = INDIVIDUAL + (nannies * NANNY) + (indiv * ADDITIONAL);
    }

    printf("%d\n", member);

    return 0;
}