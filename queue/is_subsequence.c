#include <stdbool.h>
#include <string.h>

bool isSubsequence(const char* a, const char* b) {
    int i = 0;
    int j = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);

    while (i < len_a && j < len_b) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i == (int)strlen(a);
}
