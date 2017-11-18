#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


int main()
{
 char *locale;

    locale = setlocale(LC_ALL, "");

char stack[50];
char input[50];
char status[] = "A";



    printf("Dwse timh :");
    gets(input);
    int top=-1, i, n=strlen(input);
    stack[top+1]=0;
    printf("Stack: V %s\t\tStatus: %s\tInput Symbols: %s\n", stack, status, input);

    for(i=0; i<n; i++)
    {
        if(input[i]=='M')
        {
            top++;                  //push
            stack[top]=input[i];
            stack[top+1]=0;


            printf("Stack: V %s\t\tStatus: %s\tInput Symbols: %s\n", stack, status, input+(i+1));

        }

        else if(input[i]=='S'&& stack[top]=='M')
        {


            top--;                 //pop
            stack[top+1]=0;
            printf("Stack: V %s\t\tStatus: %s\tInput Symbols: %s\n", stack, status, input+(i+1));

        }
        else if((input[i]=='S') && (top==-1))
        {

            break;
        }

         else {
                printf("error\n\n");
            break;
             }
    }



    if(i==n && top==-1 && n != 0)    //όταν ο δείκτης [i] γινει ισος με το μήκος του input
    {                               //&& η στοιβα είναι άδεια && το μήκος input έχει τουλαχιστον 1 γράμμα

        printf("YES\n");
    }
    else
        printf("NO\n");

}
