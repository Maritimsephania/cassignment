#include <stdio.h>

int yearofbirth;

int main(){
printf("Enter the year you were born:\n");
scanf("%d",&yearofbirth);

if(2023-yearofbirth>18){
    printf("You qualify to vote, proceed to vote.");
}
else{
    printf("Thank you for showing up, you don't qualify to vote though.");
}


return 0;
}
