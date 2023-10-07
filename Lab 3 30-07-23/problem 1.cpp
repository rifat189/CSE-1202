#include <iostream>
//#include<time.h>
using namespace std;

int main()
{
    int n=5;
    // cout << "Number of input: " << endl;
    // cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // arr[i]=i;
    }
    // bool swapped;
    for (int j = 0; j < n; j++)
    {
        // swapped = false;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
                // swapped = true;
            }
        }
    }
    for (int r = 0; r < n; r++)
    {
        cout << arr[r] << " ";
    }
   // cout<<time_get();
    return 0;
}
