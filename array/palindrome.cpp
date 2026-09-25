#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,2,1};
    int n = 5;

    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        if(arr[i] != arr[j])
        {
            cout << "Not Palindrome";
            return 0;
        }

        i++;
        j--;
    }

    cout << "Palindrome";

    return 0;
}