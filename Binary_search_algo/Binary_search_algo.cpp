#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& vec, int target){
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    while (start<=end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[mid] >=target)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> vec = {21,34,45,56,76,89};   
    int result = binarySearch(vec,89);
    cout<<result<<" ";
    return 0;
}