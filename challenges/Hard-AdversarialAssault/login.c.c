#include <stdio.h>
#include <string.h>

void check_password(char *input) {
    char password[10] = "secret123";
    char buffer[10];
    strcpy(buffer, input);  // Buffer overflow vulnerability
    if (strcmp(buffer, password) == 0) {
        printf("Flag: flag{buffer_overflow_101}\n");
    } else {
        printf("Access Denied!\n");
    }
}

int main() {
    char input[20];
    printf("Enter password: ");
    gets(input);  // Unsafe function
    check_password(input);
    return 0;
}