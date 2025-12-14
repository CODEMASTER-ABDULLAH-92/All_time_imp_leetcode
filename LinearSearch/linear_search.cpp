#include<iostream>
#include<vector>
using namespace std;
int linear_search(vector<int>& vec, int target){
    for(int i = 0; i<vec.size(); i++){
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> vec = {23,56,66,21,97};
    int result = linear_search(vec, 21);
    cout<<result<<" ";   
    return 0;
}