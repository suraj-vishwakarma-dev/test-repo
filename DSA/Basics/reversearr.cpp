#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0, right = n-1;
    while (left <= right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    } 
}