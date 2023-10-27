#include <stdio.h>
char name[40];
int password;


int main(){
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Enter your password:\n");
    scanf("%d",&password);
    printf( "You are logging in as \"%s\" with password \"%d\"\n", name,password);

return 0;
}
