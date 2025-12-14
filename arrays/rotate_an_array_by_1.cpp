#include <iostream>
#include <vector>
using namespace std;

/*******************************************************
 ❌ WRONG VERSION #1
--------------------------------------------------------
 Bug:
 - Writes to vec[i + 1]
 - Causes out-of-bounds access when i == size - 1
--------------------------------------------------------
 Reason:
 - Valid indices: 0 to size-1
 - vec[size] is INVALID
*******************************************************/
void rotate_wrong_v1(vector<int>& vec) {
    int last = vec[vec.size() - 1];

    for (int i = vec.size() - 1; i >= 0; i--) {
        vec[i + 1] = vec[i];   // ❌ vec[size] → Undefined Behavior
    }

    vec[0] = last;
}

/*******************************************************
 ❌ WRONG VERSION #2
--------------------------------------------------------
 Bug:
 - Loop starts from vec.size()
 - vec[vec.size()] is INVALID
--------------------------------------------------------
*******************************************************/
void rotate_wrong_v2(vector<int>& vec) {
    int last = vec[vec.size() - 1];

    for (int i = vec.size(); i > 0; i--) {
        vec[i] = vec[i - 1];   // ❌ vec[size] → Undefined Behavior
    }

    vec[0] = last;
}

/*******************************************************
 ✅ CORRECT VERSION
--------------------------------------------------------
 Logic:
 - Store last element
 - Shift elements from right to left safely
 - Place last element at index 0
--------------------------------------------------------
 Time Complexity: O(n)
 Space Complexity: O(1)
*******************************************************/
void rotate_correct(vector<int>& vec) {
    if (vec.size() <= 1) return;

    int last = vec[vec.size() - 1];

    // Shift elements safely within bounds
    for (int i = vec.size() - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }

    vec[0] = last;
}

/*******************************************************
 📌 KEY NOTES & COMMON MISTAKES
--------------------------------------------------------
 1. Never access vec[vec.size()]
    - It is always OUT OF BOUNDS

 2. Always shift arrays:
    - From RIGHT to LEFT for right rotation
    - From LEFT to RIGHT for left rotation

 3. Arrays and vectors do NOT auto-expand
    - Writing beyond bounds = Undefined Behavior

 4. Reverse loops must start from:
    - size - 1 (last valid index)

*/

#include <iostream>
#include <vector>
using namespace std;

void rotate_an_array_by_one(vector<int>& vec) {
    int last_element_data = vec[vec.size() - 1];

    // shift elements to the right
    for (int i = vec.size() - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }

    vec[0] = last_element_data;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    rotate_an_array_by_one(vec);
    return 0;
}
