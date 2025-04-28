void check_password(char *input) {
    char password[10] = "secret123";
    char buffer[10];
    strcpy(buffer, input);  // Vulnerability here
    // ...
}