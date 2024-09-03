#include <iostream>
#include <limits>
using namespace std;

int largestNumber(int arr[], int length)
{
    int largest = numeric_limits<int>::min();  // -2147483648
    int smallest = numeric_limits<int>::max(); // 2147483648

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The Smallest value is : " << smallest << endl;
    return largest;
}

int main()
{
    int arr[5] = {-1, 2, 54, 2002, 100};

    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "The length of the array is : " << length << endl;

    cout << "The maximum number is  :" << largestNumber(arr, length) << endl;

    return 0;
}