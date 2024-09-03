#include <iostream>
using namespace std;

int BinarySearch(int arr[], int elem, int start, int end)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == elem)
        {
            return mid;
        }
        else if (arr[mid] > elem)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = length - 1;

    int elemFound = BinarySearch(arr, 1, start, end);

    if (elemFound == -1)
    {
        cout << "The Element is not present :(" << endl;
    }
    else
    {
        cout << "The element is present at position : " << elemFound << endl;
    }

    return 0;
}