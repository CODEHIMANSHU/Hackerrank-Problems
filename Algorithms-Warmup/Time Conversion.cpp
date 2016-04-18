
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string time;
    cin >> time;
    int hr1;
    string ampm= time.substr(8,2);
    if(time=="12:00:00AM")
        cout<<"00:00:00";
    else
        if(time=="12:00:00PM")
            cout<<"12:00:00";
        else
        {
            if(ampm=="AM"&&time.substr(0,2)=="12")
                cout<<"00"<<time.substr(2,6);
            else
            {
            if(ampm=="AM"||(ampm=="PM"&&time.substr(0,2)=="12"))
                cout<<time.substr(0,8);
            else
            {
                string hr = time.substr(0,2);
                stringstream convert(hr);
                convert>>hr1;
                cout<<hr1+12<<time.substr(2,6);
            }
            }
        }
    
    
    return 0;
}
