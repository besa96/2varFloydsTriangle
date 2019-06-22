#include<stdio.h>
#include<math.h>

//(n² + n + 2) / 2           	Lazy caterer's sequence (left side of triangle) [n+1]
//n(n + 1) / 2                  Triangular number       (right side of triangle)
//n(n² + 1) / 2                	Floyd's triangle sum    (row sum)
//T(T(n))                   	Triangular's Triangular (total sum) [n=row]
//(√((8 * n) + 1)) / 2 - 0.5	Reverse Triangular

int main()
{
    unsigned short row_in, n;
    printf("Enter The Number Of Rows\n>> ");
    scanf("%hu", &row_in);
    for(n = 1; n <= ((row_in * (row_in + 1)) / 2); n++)//Increment n To Last Rows Right Side [Triangular number (right side of the last row in triangle)]
    {
        printf("%d ", n);
        if(roundf(((sqrtf((8 * n) + 1)) / 2) - 0.5) == ((sqrtf((8 * n) + 1)) / 2) - 0.5)//Check If n Is Triangular(reached right side of the current row)[Reverse Triangular]
		{
			putchar('\n');
		}//end if
    }//end for
    return 0;
}//end main
