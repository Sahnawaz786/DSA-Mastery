#include<iostream>
using namespace std;

void reverseArray(int arr[],int length){
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void displayArray(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};

    int length = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr,length);
    displayArray(arr,length);

    return 0;
}