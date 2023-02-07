//Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
//ex. input=4
//                            4 4 4 4 4 4 4  
//                            4 3 3 3 3 3 4   
//                            4 3 2 2 2 3 4   
//                            4 3 2 1 2 3 4   
//                            4 3 2 2 2 3 4   
//                            4 3 3 3 3 3 4   
//                            4 4 4 4 4 4 4 



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int i,j,n;
    scanf("%d", &n);
	int length = n*2 - 1;

    for(i=0;i<length;i++){
        for( j=0;j<length;j++){
             int min = i < j ? i : j;
             min = min < length-i ? min : length-i-1;
             min = min < length-j-1 ? min : length-j-1;
             printf("%d ", n-min);
            }
			printf("\n");
    }
	return 0;
}

