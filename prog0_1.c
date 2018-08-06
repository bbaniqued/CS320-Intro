#include <stdio.h>

int main(int argc, char * argv[]) {
    
    char firstName[20];
    char lastName[20];
    
    printf("Assignment #0-1, Brandon Baniqued, bbaniqued@sdsu.edu\n");
    printf("What is your name\n");
    scanf("%s", firstName);
    scanf("%s", lastName);
    printf("Hello %s %s!", firstName, lastName);
    
    return 0;
}
