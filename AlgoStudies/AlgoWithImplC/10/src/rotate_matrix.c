#include <stdio.h>
void rotate_matrix (int offset, int n, int a[n][n]) 
{
    if ( n % 2 == 0 && offset >= n/2 )
        return;
    if ( n % 2 == 1 && offset > n / 2) )
        return;

        //save last column
    int tmp[n - offset];
    for (int i = offset; i < n - offset; i++)
        tmp[ i - offset] = a[i][n - 1 - offset];

    int i, j;
    // rotate last row to last column
    for (j = n - 1 - offset; j >= offset; j--)
        a[j][n - 1 - offset] = a[n - 1 - offset][j];
    // not complete 
}
