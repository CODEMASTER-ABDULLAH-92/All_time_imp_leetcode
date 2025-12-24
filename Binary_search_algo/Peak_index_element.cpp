#include<iostream>
#include<vector>
using namespace std;
int peak_index_element(vector<int>& vec){
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    while (start<=end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid - 1] < vec[mid] && vec[mid + 1] < vec[mid])
        {
            return mid;
        }else if (vec[mid] > vec[mid - 1])
        {
            start = mid - 1;
        }
        if (vec[mid] < vec[mid - 1])
        {
            end = mid;
        }
    }
    return start;
}
int main(){
    vector<int> vec = {2,4,6,8,10,12,8,4,2};
    int result = peak_index_element(vec);
    cout<<result<<" ";  
    return 0;
}