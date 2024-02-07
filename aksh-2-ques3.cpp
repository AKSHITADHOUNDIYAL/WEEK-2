#include <iostream>
using namespace std;

int main() 
{
    int a;
    cout << "Enter the number of times you want to run the loop: ";
    cin >> a;

    for (int i = 0; i < a; i++) 
    {
        int n, key;
        cout << "Enter the array limit: ";
        cin >> n;
        int arr[n];
        cout << "Enter the array elements: ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "Enter the key to be searched: ";
        cin >> key;

        int flag = 0;
        for (int c = 0; c < n; c++)
        {
            for (int d = c + 1; d < n; d++)
            {  
                if (arr[c] - arr[d] == key || arr[d] - arr[c] == key)
                {
                    flag++; 
                }
            }
        }

        if (flag > 0) 
        {
            cout << "The number of pairs is: " << flag << endl;
        } 
        else
        {
            cout << "No pairs found" << endl;
        }
    }
    return 0;
}