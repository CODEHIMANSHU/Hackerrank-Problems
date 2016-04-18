
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    float n1,i=0,j=0,k=0;
    n1=n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
        if(arr[arr_i]==0)
            k++;
        else
            if(arr[arr_i]>0)
                i++;
            else
                j++;
    }
    cout<<i/n1<<endl<<j/n1<<endl<<k/n1;
    return 0;
}
