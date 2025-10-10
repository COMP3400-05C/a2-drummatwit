#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

/**
 * Returns true is is is a valid password according to instructions
 */
bool valid_password(const char* s) {
    
    if (s == NULL) {
        return false;
    }
    int length = 0;
    int lower_count = 0;
    int upper_count = 0;

    for (const char *p = s; *p != '\0'; ++p){
        unsigned char ch = (unsigned char)*p;
        if (islower(ch)) {
            lower_count++;
        } else if (isupper(ch)) {
            upper_count++;
        } else if (isdigit(ch)) {

        } else {
            return false;
        }
        length++;
    }
    if (length < 6 || length > 10){
        return false;
    }
    if (lower_count < 2 || upper_count < 2){
        return false;
    }
    return true;
}
