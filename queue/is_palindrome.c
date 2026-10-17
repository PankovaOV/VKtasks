#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(const char* s) {
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
