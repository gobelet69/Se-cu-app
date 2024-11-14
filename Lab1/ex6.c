#include <stdio.h>

int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *testStr = "Hello, World!";
    printf("Length of the string \"%s\" is %d\n", testStr, string_length(testStr));
    return 0;
}