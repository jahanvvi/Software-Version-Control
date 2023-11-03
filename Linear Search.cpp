#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4], target;
    // Input
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 4; column++)
        {
            cin >> arr[row][column];
        }
    }
    cout << endl << endl;
    
    // Print
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 4; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element you want to search: ";
    cin >> target;
    
    if(isPresent(arr, target, 3, 4))
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not Found!";
    }
}
