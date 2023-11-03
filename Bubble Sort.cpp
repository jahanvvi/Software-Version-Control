// APPROACH 1: SCAN TILL THE END
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
void bubbleSort(int arr[], int n)
{
    for(int i =0; i < (n - 1); i++)
    {
        for(int j = 0; j < (n - 1 - i); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr, size);
	cout << "Sorted Array: ";
    sortedElement(arr, size);
}

//APPROACH 2: WHEN SORTED STOP
/*
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
void bubbleSort(int arr[], int n)
{
    for(int i =0; i < (n - 1); i++)
    {
        bool swapped = false;
        for(int j = 0; j < (n - 1 - i); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
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
    bubbleSort(arr, size);
    cout << "Sorted Array: ";
    sortedElement(arr, size);
}
*/
