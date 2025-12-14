#include <iostream>
#include <vector>
using namespace std;

void reverseAnArray(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start <= end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {34, 64, 32, 22, 75};
    reverseAnArray(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}