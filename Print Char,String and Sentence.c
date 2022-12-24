//In this task you have to print the character,ch, in the first line. Then print ,s, in next line. In the last line print the sentence, sen.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
	char ch,s[100],sen[100] ;
	printf("Enter charecter:- ");
    scanf("%c",&ch);
    printf("Enter String:- ");
    scanf("%s",s);
    printf("Enter Sentence:-");
    scanf("%s",sen);
   
    printf("%c\n",ch);
    printf("%s\n",s);
    scanf("\n");
    printf("%s",sen); 
    return 0;
	
	//FOR HACKER RANK;
	
//   char ch,s[100],;
//    scanf("%c",&ch);
//    printf("%c\n",ch);
//    scanf("%s",s);
//    printf("%s\n",s);
//    scanf("\n");
//    scanf("%[^\n]%*c", s);
//    printf("%s",s);
//
//    return 0;
}
