#include <iostream>
#include <vector>
using namespace std;
int sqrt_of_x(int target)
{
    int start = 0;
    int end = target;
    int mid;
    int ans;
    if (target < 2)
    {
        return target;
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == target / mid)
        {
            return mid;
        }
        else if (mid >= target / mid)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int result = sqrt_of_x(2);
    cout << result << " ";
    return 0;
}