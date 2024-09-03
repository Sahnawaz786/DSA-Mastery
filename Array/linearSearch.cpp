#include <iostream>
using namespace std;

int linearSearch(int arr[], int key, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
   int arr[8] = {2,3,4,5,6,7,8,9};
 
   int index = linearSearch(arr,9,8);
   if(index == -1){
    cout<<"Element Not Found"<<endl;
   }else{
    cout<<"Element present at index : "<<index<<endl;
   }

   return 0;
}