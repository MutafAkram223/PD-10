#include <iostream>
using namespace std;
void sorting_Array(int n, int array[]);
bool check(int n, int array[]);
int main()
{
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int array[n];

    cout << "Enter digits of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sorting_Array(n, array);

    if (check(n, array))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

void sorting_Array(int n, int array[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

bool check(int n, int array[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i + 1] - array[i] != 1)
        {
            return false;
        }
    }
    return true;
}