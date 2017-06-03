#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[] = {'b', 'c', 'a', 'd', '\0'};  // Given '\0' as a value is for avoiding Garbez;
    cout<<arr<<endl;

    sort(arr, arr+4);
    cout<<arr<<endl;

    while(next_permutation(arr, arr+4))
    {
        cout<<arr<<endl;
    }
}
