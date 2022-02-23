#include <stdio.h>
void multiplicationTable();
void triangularNumber();
void triangularStar();
void incrementNumbersTriangleLeft();
void incrementNumbersTriangleRight();
void chessPattern();
void triangularStarRight();
void main()
{
    triangularStarRight();
}
void triangularStar()
{
    /*

    *
    * *
    * * *
    * * * *
    * * * * *

    */
    int i, j, row;
    printf("How many rows\n");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void multiplicationTable()
{
    /*
    1   2   3   4
    2   4   6   8
    3   6   9  12
    4   8  12  16
    */
    int i, j, row, column, number;
    printf("enter the row and the column \n");
    scanf("%d%d", &row, &column);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}
void triangularNumber()
{
    /*
    1
    2  3
    4  5  6
    7  8  9 10
    */
    int i, j, num = 1, triangular_number;
    printf("enter the number \n ");
    scanf("%d", &triangular_number);
    for (i = 1; num <= triangular_number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%3d", num);
            num++;
        }
        printf("\n");
    }
}
void incrementNumbersTriangleLeft()
{
    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */
    int row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}

void incrementNumbersTriangleRight()
{
    /*

                 5
              4  5
           3  4  5
        2  3  4  5
     1  2  3  4  5

     */
    int n, row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    n = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= n)
            {
                printf("   ");
            }
            else
            {
                printf("%2d ", j);
            }
        }
        printf("\n");
        n--;
    }
}

void chessPattern()
{
    /*

W B W B
B W B W
W B W B
B W B W

*/
    int matrix;
    printf("Enter the matrix Row\n");
    scanf("%d", &matrix);
    for (int i = 1; i <= matrix; i++)
    {
        for (int j = 1; j <= matrix; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("W ");
            }
            else
            {
                printf("B ");
            }
        }
        printf("\n");
    }
}

void triangularStarRight()
{
    /*

    *
  * *
* * *

*/
    int n, row;
    printf("How many rows You want\n");
    scanf("%d", &row);
    n = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= n)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
        n--;
    }
}