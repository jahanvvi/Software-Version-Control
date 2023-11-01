#include<iostream>
#include<climits>
using namespace std;
void inputElement(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}
void sortedElement(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    for(int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;
        for(int j = (i + 1); j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        cout << "Round " << i << endl;
        sortedElement(arr, n);
        cout << endl;
    }
}
int main()
{
    int size, arr[1000];
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter elements of Array: ";
    inputElement(arr, size);
    selectionSort(arr, size);
    cout << "Sorted Array: ";
    sortedElement(arr, size);
}