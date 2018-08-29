#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    int n, a, b, temp, i, j, k, l;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a;
        for(j = 0; j < a; j++)
        {
            cin >> arr[j];
        }
        int counter = 0;
        for(k = 0; k < a - 1; k++)
        {
            for(l = 0; l < a - 1; l++)
            {
                if(arr[l + 1] < arr[l])
                {
                    temp = arr[l + 1];
                    arr[l + 1] = arr[l];
                    arr[l] = temp;
                    counter++;
                }
            }
        }


        cout << "Optimal train swapping takes " << counter << " swaps." << endl;


    }


    return 0;
}
