#include <iostream>
using namespace std;
//saidulrifat189@gmail.com
int main()
{
    int n;
    cout << "Number of input: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target, LOC = -1;
    cout << "Enter your target: " << endl;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            LOC = i;
            break;
        }
    }
    if(LOC==-1) cout<<target<<" is not in the array"<<endl;
    else cout<<target<<" is found at index "<<LOC<<endl;
    return 0;
}