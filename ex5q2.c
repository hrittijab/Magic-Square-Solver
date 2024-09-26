/* Purpose: Solving magic square
 * Author: Hrittija Bhattacharjee
 * Date:16 October,2023
 * References:https://www.programiz.com/dsa/bubble-sort
 */

#include "lab05.h"
#include <stdio.h>
#include <stdlib.h>

int num;
void bubblesort(int array[num*num])
{
    for (int step = 0; step < num*num-1; ++step)
    {
        for (int i = 0; i < num*num-1 - step; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int arraychecker(int array[num*num])
{
    bubblesort(array);
    for (int i = 0; i < num*num; i++)
    {
        if (array[i] != i+1)
        {
            return 0;
        }
    }
    return 1;
}
int boxchecker(int board[num][num])
{

    int arr[num*num];
    int index = 0;
    for (int a = 0; a < num; a++)
    {
        for(int b = 0; b < num; b++)
        {
            arr[index] = board[a][b];
            index++;
        }

    }
    if (arraychecker(arr) == 0)
    {
        return 0;
    }
    return 1;
}




// This function is a non-recursive function that checks whether a given grid[n][n] is a magic square.
// Complete the function definition:
int check(int n, int grid[n][n])
{
    int sum;
    sum = 0.5*n*(1+(n*n));
    for (int i=0; i<n; i++)
    {
        int rowsum=0;
        int colsum=0;
        for(int j = 0; j<n; j++)
        {
            rowsum+=grid[i][j];
            colsum+=grid[j][i];
        }
        if(rowsum!=sum || colsum!=sum)
        {
            return 0;
        }
    }
    int diagsum=0;
    int diagsumm = 0;
    for (int i=0; i<n; i++)
    {
        diagsum+=grid[i][i];
    }
    for (int i=0; i<n; i++)
    {
        diagsumm+=grid[i][n-1-i];
    }
    if(diagsum!=sum || diagsumm!=sum)
    {
        return 0;
    }
    if(boxchecker(grid)==0){
       return 0;}

    return 1;

}

// This function is a recursive function that intends to solve a given grid[n][n] as in the lab05 description.
// Complete the function definition:
int magic(int n, int grid[n][n])
{
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (grid[i][j]==0)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        return check(n,grid);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (grid[i][j]==0)
            {
                for(int a=1; a<=n*n; a++)
                {
                    grid[i][j]=a;
                    if(magic(n,grid)==1)
                    {
                        return 1;
                    }
                    grid[i][j]=0;
                }
                return 0;
            }
        }
    }
    return 0;
}




int main()
{
//    scanf("%d",&num);
//    int grid[num][num];
//    for(int i=0; i<num; i++)
//    {
//        for(int j = 0; j<num; j++)
//        {
//            scanf("%d",&grid[i][j]);
//        }
//    }
//
//    if(magic(num,grid)==0)
//    {
//        printf("Invalid");
//    }
//    else
//    {
//        for(int i=0; i<num; i++)
//        {
//            for(int j=0; j<num; j++)
//            {
//                printf("%d ",grid[i][j]);
//            }
//            printf("\n");
//        }
//
//    }
    return test_magic(magic);  // This line runs a compiled function in lab05b.o

}
