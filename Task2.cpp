#include <iostream>
#include <cmath>
using namespace std;
int check(string array[], int n);
main ()
{
    int n;
    cout << "Length of array: " ; 
    cin >> n;

    string array[n];
    cout << "Enter directions (left or right): " << endl;
    for (int i =0; i<n ; i++)
    {
        cin >> array[i];
    }
    int result = check(array, n);
    cout << "Number of rotations are: " << result;
}

int check(string array[], int n)
{
    int count = 0;
    for (int i =0; i<n ; i++)
    {
        if (array[i] == "Right" || array[i] == "right")
        {
            count = count + 90;
        }
        else if (array[i] == "Left" || array[i] == "left")
        {
            count = count - 90;
        }
        else {
            cout << "Invalid input" ;
            return 0;
        }
    }
    int rotations = count / 360;
    rotations = abs(rotations);
    return rotations;
}