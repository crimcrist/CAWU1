#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) { 
            return mid;
        } else if (arr[mid] < target) { 
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}


int binarySearch (int arr[], int low, int high, int target){
    while (low <= high){
        int mid = low + ((high-low)/2);
        if (arr[mid] == target){
             return mid;
        } else if (arr[mid] < target){ 
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }

    return -1;
}

int main (){

}