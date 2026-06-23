#include <bits/stdc++.h>
using namespace std;
// Example 1:
// Input: nums = [21,4,7]
// Output: 32
// Explanation:
// 21 has 4 divisors: 1, 3, 7, 21
// 4 has 3 divisors: 1, 2, 4
// 7 has 2 divisors: 1, 7
// The answer is the sum of divisors of 21 only.
int divisor(int &num)
{
    int count = 2;
    int sum = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            int div = num / i;
            if (div == i)
            {
                count++;
                sum = sum + i;
            }
            else
            {
                count += 2;
                sum = sum + i + num / i;
            }
        }
        if (count > 4)
            return 0;
    }
    if (count == 4)
        return sum + 1 + num;
    else
        return 0;
}
int sumFourDivisors(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + divisor(nums[i]);
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = sumFourDivisors(arr);
    cout << result;
    return 0;
}