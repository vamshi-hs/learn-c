#include <stdio.h>
#include <assert.h>
#include "./naive_search.h"

void test(){
    printf("Naive search: ");
    char *haystack = "vamshi krishna";
    char *needle = "shi";
    // printf("assert1: %d",naive_search(haystack,needle));
    // printf("%d",naive_search("",""));// == 3);
    assert(naive_search(haystack,needle) == 3);
    assert(naive_search(haystack,needle) == 3);
    assert(naive_search("abcab","bc")== 1);
    assert(naive_search("aaaaab","aab") == 3);
    assert(naive_search("aaaaab","bab") == -1);
    assert(naive_search("","bab") == -1);
    assert(naive_search("rgv","rgv") == 0);
    assert(naive_search("rgv","") == -1);
    assert(naive_search("","") == 0);
}

int main(){
    test();
    printf("Test passed!!\n");
    return 0;
}