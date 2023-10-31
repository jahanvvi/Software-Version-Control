#include <iostream>
using namespace std;
void print(int *arr, int start, int end)
{
    cout << "Start: " << start << endl;
    cout << "End: " << end << endl;
    for(int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr, int start, int end, int element)
{
    cout << endl;
    print(arr, start, end);
    if(start > end)
    {
        return false;
    }
    int mid = start + ((end - start) / 2);
    cout << "Mid is: " << mid << endl;
    if(arr[mid] == element)
    {
        return true;
    }
    if(arr[mid] < element)
    {
        return binarySearch(arr, mid + 1, end, element);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, element);
    }
}
int main()
{
    int size, element;
    cout << "Enter size of array: ";
    cin >> size;
    int *arr = new int [size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> element;
    if(binarySearch(arr, 0, size - 1, element))
    {
        cout << "Element found!";
    }
    else
    {
        cout << "Element not found!";
    }
}