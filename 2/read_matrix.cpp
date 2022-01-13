#include "zadanie.h"

int **read_matrix(ifstream &fi, int m, int n, int **matrix)
{
    int total = m * n;
    int i = -1;
    int j;
    int count = 0;

    while (++i < m)
    {
        j = -1;
        while (++j < n)
        {
            fi >> matrix[i][j];
            if (!fi.fail())
                count++;
            else
                return (NULL);
        }
    }
    if (count == total)
        return (matrix);
    return (NULL);
}