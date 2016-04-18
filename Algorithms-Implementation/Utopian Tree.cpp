#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n,h=1;
        cin >> n;
        for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    h*=2;
                else
                    h+=1;
            }
        cout<<h<<endl;
    }
    return 0;
}
