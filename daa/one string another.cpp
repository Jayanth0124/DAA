#include <stdio.h>
#include <string.h>
int main() {
    char source[100]; 
    char destination[100]; 
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    strcpy(destination, source);
    printf("Source String: %s", source);
    printf("Destination String: %s", destination);
    return 0;
}
