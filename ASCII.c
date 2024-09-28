//ASCII - American Standard Code Information Interchange
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char ch;
    char userInput;
    for(i=0;i<=255;i++)
    {
      ch=i;
     printf("\n%c\t%d",ch,i);
    }

    

    // Prompt the user to enter a character
    printf("\nEnter a character: ");
    scanf("%c", &userInput);

    // Display the ASCII value of the entered character
    printf("ASCII value of %c is %d\n", userInput, userInput);



    return 0;
}
