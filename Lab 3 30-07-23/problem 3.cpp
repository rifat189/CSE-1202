#include <iostream>
using namespace std;
int binary_search(int a[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            left = mid + 1;
        }
        else if (a[mid] > target)
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "How many inputs: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: " << endl;
    cin >> target;
    int index = binary_search(arr, 0, n - 1, target);
    if (index == -1)
        cout << "Not found" << endl;
    else
        cout <<"Index: "<< index << endl;
    return 0;
}