#include <stdio.h>
#define ROW 2
#define COLUMN 2
/*
m=[
	1 2
	3 4
  ]
l = 2
c = (2)/2=1

x is real point in plot.
y is real point in plot.

cx=px+c-isEven
cy=c-y

Where x' & y' are real translated points in plot.

x'=  y
y'= -x


 A :
[
  [1, 2]
  [3, 4]
]
Your function returned the following :
  [1 3 ]
  [2 4 ]

  [3 1 ]
  [4 2 ]
*/
void rotate(int **A, int n11, int n12)
{
    int l = n11;
    int c = n11 / 2;
    int isEven = 0;
    int px = 0, py = 0, i = 0, h = 0, r = 0, temp = 0, current = 0;

    if ((l % 2) == 0)
        isEven = 1;
    for (h = 0; h < c; h++)
    {
        for (i = 0; i < l - 1; i++)
        {
            px = i - c;
            py = c - h;
            current = A[c - py][px - c];
            for (r = 0; r < 4; r++)
            {
                printf("(%d.%d) (%d,%d)->(%d,%d)\n", i, r, px, py, c - py, 999);
                temp = px;
                px = py;
                py = -temp;
                /*
                temp     =A[px+c][px-c+isEven];
                printf("%d>>>\n ",temp);
                A[px-c][py+2*c-isEven]=current;
                current  = temp;
                for(int h=0;h<n11;h++){
                	for(int k=0;k<n11;k++){
                		printf("%d ",A[h][k]);
                	}
                	printf("\n");
                }
                */
            }
        }
    }
}
