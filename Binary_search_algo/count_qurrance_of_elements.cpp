#include <iostream>
#include <vector>
using namespace std;
int total_qurrance_of_elements(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int first = -1;
    int last = -1;
    int total_qurrance;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0;
    end = vec.size() - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    total_qurrance = last - first + 1;
    return total_qurrance;
}
int main()
{
    vector<int> vec = {1, 2, 3, 3, 3, 3, 3, 4, 5};
    int result = total_qurrance_of_elements(vec, 3);
    cout << "Total Qurrance of element is " << result << " ";
    return 0;
}