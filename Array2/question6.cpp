#include<bits/stdc++.h>
using namespace std;

int rotational_search(vector<int> &arr, int target){
    int left = 0, right = arr.size()-1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target) return mid;

        if(arr[left] <= arr[mid]){
            if(arr[mid] > target && target >= arr[left]){
                right = mid-1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> array = {15,16,19,20,25,1,3,4,5,7,10,14};
    int value = 25;
    int position = rotational_search(array, value);
    if(position == -1){
        cout << value << " is not avilable in array" << endl;
    }else{
        cout << value << " is avilable in array at " << position << endl;
    }
    return 0;
}