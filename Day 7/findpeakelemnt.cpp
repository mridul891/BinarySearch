#include <iostream>
using namespace std;
int findPeakElement(int arr[], int n)
{
    // Write your code here
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[start])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peak = findPeakElement(arr, n);
    cout << "the answer is " << peak;
}