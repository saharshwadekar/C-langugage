#include <stdio.h>
#include <conio.h>

void printarr(int mat[][3], int i, int j)
{
	int x,y;
	for(x=0;x<3;x++)
	{
		gotoxy(i,j);
		for(y=0;y<3;y++)
		{
			printf("%4d",mat[x][y]);
		}
		printf("\n");
		j++;
	}
}

void calcadd(int matadd[][3], int mat1[][3], int mat2[][3])
{
	int x, y;
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			matadd[x][y] = mat1[x][y] + mat2[x][y];
		}
	}
	printarr(matadd,42,3);
}

void calcmul(int matmul[][3],int mat1[][3], int mat2[][3])
{
	int x, y, k;
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			for(k=0;k<3;k++)
			{
				matmul[x][y] += ( mat1[x][k]*mat2[k][y]);
			}
		}
	}
	printarr(matmul,42,11);
}

void main()
{
	int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
	int mat2[3][3] = {9,8,7,6,5,4,3,2,1};
	int matadd[3][3] = {0};
	int matmul[3][3] = {0};
	int x, y, k, n = 1;
	clrscr();
    switch (n) // menu driven using switch case
    {
    case 1:
        printf("Addition of two matrix");
        printarr(mat1,3,3);
        gotoxy(18,4);
        printf("+");
        printarr(mat2,21,3);
        gotoxy(38,4);
        printf("=");
        calcadd(matadd,mat1,mat2);
        // break;  // --> to print both of them thus i comment it

    case 2:
        printf("\n\nMultiplication of two matrix\n");
        printarr(mat1,3,11);
        gotoxy(18,12);
        printf("*");
        printarr(mat2,21,11);
        gotoxy(38,12);
        printf("=");
        calcmul(matmul,mat1,mat2);
        break;

    default:
        break;
    }
	getch();
}