#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("please enter a value for n \n: ");
    scanf("%d",&n);
    int d = n +(n-1);


    int mario [d][d];
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i<(((d-1)/2) && j<((d-1)/2)))

                {
                    mario[i][j]=0;
                    if (i<(((d-1)/2) && j>((d-1)/2)))
                   {
                     mario[i][j]=0;
                     if (i>(((d-1)/2) && j<((d-1)/2)))
                	{
                     	mario[i][j]=0;
                     	if (i>(((d-1)/2) && j>((d-1)/2)))
                		{
                     		mario[i][j]=0;
               			}
                	}
                   }
                }



            else
            {
                mario[i][j] = 1;
            }



        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        	printf("%d",mario[i][j]);
		}
	}
	printf("\n");

    return 0;
}
