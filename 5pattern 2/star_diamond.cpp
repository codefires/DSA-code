#include <iostream>
using namespace std;

int main()
{
    int i, j, k, m, n;
    cout << "enter no. of row";
    cin >> n;
    int nst = 1;
    int nsp = n - 1;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        for (j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        if (i <= n - 1)
            nsp--;
        else
            nsp++;
        for (k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        if (i <= n - 1)
            nst += 2;
        else
            nst -= 2;
        cout << endl;
    }
}
