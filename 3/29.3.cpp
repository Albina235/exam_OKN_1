#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>

using namespace std;

/*void    ft_check(void)
{
    ifstream i;
    ifstream d;
    double  num;

    i.open("integer.dat", ios_base::binary);
    d.open("doublet.dat", ios_base::binary);
    while (!i.eof())
    {
            i.read((char *)&num, sizeof(double));
            cout << num << " ";
    }
    i.close();
    cout << "\n";
    while (!d.eof())
    {
        d.read((char *)&num, sizeof(double));
        cout << num << " ";
    }
    d.close();
}*/

int main()
{
    ifstream fi;
    double  num;

    fi.open("number.txt");
    if (!fi.is_open())
        return (-1);
    ofstream    integer;
    ofstream    doublet;
    integer.open("integer.dat", ios_base::binary);
    doublet.open("double.dat", ios_base::binary);

    while (!fi.eof())
    {
        fi >> num;
        if (fi.fail())
            return (-1);
        if ((double)floor(num) == num)
            integer.write((const char *)&num, sizeof(double));
        else
            doublet.write((const char *)&num, sizeof(double));
    }
    fi.close();
    integer.close();
    doublet.close();
    //ft_check();
    return (0);
}