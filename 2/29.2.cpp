#include "zadanie2.h"

void    ft_swap_matrix_rows(int **matrix, int m, int n)
{
    int mini;
    int maxi;
    int max = INT_MIN;
    int min = INT_MAX;
    int i = -1;
    int j = -1;

    while (++i < m)
    {
        j = -1;
        while (++j < n)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                maxi = i;
            }
            else if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                mini = i;
            }
        }
    }
    if  (maxi == mini)
        return ;
    int tmp[n];
    j = -1;
    while (++j < n)
        tmp[j] = matrix[mini][j];
    j = -1;
    while (++j < n)
        matrix[mini][j] = matrix[maxi][j];
    j = -1;
    while (++j < n)
        matrix[maxi][j] = tmp[j];
}

int main()
{
    int m;
    int n;
    int **matrix;
    int i = -1;
    ifstream    fi("matrix.txt");

    if (!fi.is_open())
    {
        cout << "error";
        fi.close();
        return (-1);
    }

    cout << "Number of rows and columns of the matrix: ";
    cin >> m >> n;
    matrix = new int*[m];
    while (++i < m)
        matrix[i] = new int[n];
    matrix = read_matrix(fi, m, n, matrix);
    if (matrix == NULL)
        return (-1);
    fi.close();
    ft_print_two_d_array(matrix, m, n);
    ft_swap_matrix_rows(matrix, m, n);
    ft_print_two_d_array(matrix, m, n);
    ft_delete(matrix, m);

    return (0);
}