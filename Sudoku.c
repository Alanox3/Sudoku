#include <stdio.h>

int sudoku[9][9]=
{
{4,1,0,0,6,5,0,0,7},
{0,0,6,0,0,7,4,8,0},
{2,0,7,4,9,0,0,0,6},
{0,6,0,0,7,0,1,0,0},
{3,0,1,5,0,0,0,7,2},
{0,9,0,0,4,2,3,0,8},
{1,0,8,6,0,0,0,2,9},
{0,2,0,0,1,8,6,4,0},
{6,0,0,3,0,0,0,1,0}
};

int input()
{
    int input=0;
    int i=0,j=0;
    printf("choose a field=\n\n");
    scanf("%d %d",&j, &i);
    printf("choose a value=\n\n");
    scanf("%d", &input);
    if((input>0)&&(input<=9))
        {
            sudoku[j][i]=input;
        }
    else
    {
        printf("wrong input, try a different value\n\n");
    }
    feld();

return 1;
}


int feld()
{
    int i=0,j=0;

    for (i=i;i<9;i++)
    {
        printf("\t%d",i+1);
    }
    printf ("\n");
    //printf ("__________________________________________________________________________\n");
    for(j=0;j<9;j++)
    {

        if (j%3==0)
        {
            printf ("__________________________________________________________________________\n");
        }
        printf ("%d|\t", j+1);
        for(i=0;i<9;i++)
        {
            printf ("%d\t",sudoku[j][i]);
            if ((i+1)%3==0)
            {
                printf("|");
            }

            if (i==8)
            {
                printf("\n |\t\t\t\t|\t\t\t|\t\t\t|\n");
            }

        }
    }
printf("\n");
input();
return 0;
}
int main ()
{
    feld();
    input();
    
}
