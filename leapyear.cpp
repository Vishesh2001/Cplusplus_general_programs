#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year1;
    cout<<"enter year:  ";
    cin>>year1;
    if(year1%100==0)
    {
        if(year1%400==0)
        cout<<"leap year";
        return 0;
    }
    else if(year1%4==0)
    {
        cout<<"leap year";
        return 0;
    }
    else{
        cout<<"not leap year";

    }


    return 0;
}