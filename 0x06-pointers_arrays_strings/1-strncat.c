#include <main.h>

char *_strncat(char *dest, char *src, int n) {
    char *dest_start = dest;
    
    // Find the end of the destination string
    while (*dest != '\0') {
        dest++;
    }
    
    // Append up to n bytes of the source string to the destination string
    while (n-- > 0 && *src != '\0') {
        *dest++ = *src++;
    }
    
    // Add null terminator to the end of the concatenated string
    *dest = '\0';
    
    return dest_start;
}

