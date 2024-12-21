#include <string.h>

int naive_search(char *haystack,char *needle){
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    if (needle_len == 0 && haystack_len == 0){
        return 0;
    }
    if (needle_len > haystack_len){
        return -1;
    }
    int temp_i = 0;
    int haystack_i = 0;
    int needle_i = 0;
    while (haystack_i < haystack_len){
        if (haystack[haystack_i] == needle[needle_i]){
            temp_i = haystack_i;
            haystack_i++;
            needle_i++;
            while (haystack_i < haystack_len 
                    && needle_i < needle_len 
                    && haystack[haystack_i] == needle[needle_i]){
                    haystack_i++;
                    needle_i++;
            }
            if (needle[needle_i] == '\0') {
                return temp_i;
            } else {
                haystack_i = temp_i+1;
                needle_i = 0;
            }
        } else {
            haystack_i++;
        }
    }
    return -1;
}
