#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
#include <limits.h>

using namespace std;

void    ft_print_two_d_array(int **arr, int size_i, int size_j);
void    ft_delete(int **arr, int si);
int     **read_matrix(ifstream &fi, int m, int n, int **matrix);
void    ft_swap_matrix_rows(int **matrix, int m, int n);