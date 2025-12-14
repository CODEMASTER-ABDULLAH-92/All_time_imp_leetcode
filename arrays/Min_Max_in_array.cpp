#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void min_max_in_an_array(vector<int>& vec){
    int min_Value = INT_MAX;
    int max_Value = INT_MIN;
    // Find Min Value
    for(int i = 0; i<vec.size(); i++){
        if (min_Value > vec[i])
        {
            min_Value = vec[i];
        }
    }
    // Find The Max Value

    for(int i = 0; i<vec.size(); i++){
        if (max_Value < vec[i])
        {
            max_Value = vec[i];
        }
    }

    cout<<"Maximum Value: "<<max_Value<<" \n";
    cout<<"Minimum Value: "<<min_Value<<"\n";
}
int main(){
    vector<int> vec = {23,54,7,32,90,32};
    min_max_in_an_array(vec);
    return 0;
}