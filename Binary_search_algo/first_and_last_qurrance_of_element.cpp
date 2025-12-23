#include <iostream>
#include <vector>

using namespace std;

vector<int> first_last(const vector<int>& vec, int target) {
    int start = 0;
    int end = vec.size() - 1;
    int mid;
    int first = -1;
    int last = -1;
    // 1. Find the first occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (vec[mid] == target) {
            first = mid;      // Found a match, but keep looking left
            end = mid - 1;
        } 
        else if (vec[mid] < target) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;    // Just move the pointer, don't update 'first'
        }
    }

    // 2. Find the last occurrence
    start = 0;
    end = vec.size() - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (vec[mid] == target) {
            last = mid;       // Found a match, but keep looking right
            start = mid + 1;
        } 
        else if (vec[mid] < target) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;    // Just move the pointer, don't update 'last'
        }
    }
    return {first, last}; // Returns a vector with two elements
}

int main() {
    vector<int> vec = {2, 4, 6, 6, 6, 6, 6, 8, 10};
    int target = 6;
    
    vector<int> res = first_last(vec, target);
    
    cout << "First occurrence: " << res[0] << endl;
    cout << "Last occurrence: " << res[1] << endl;

    return 0;
}


