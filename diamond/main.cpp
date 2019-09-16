#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row = 7;
    int space = 2;
    int length = row / 2;
    for (int row = -length; row <= length; row++)
    {
        cout << setw(space);
        for (int col = -length; col <= length; col++)
        {
            cout << setw(space);
            if (abs(row) + abs(col) == length)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
