#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

//stdlid.h--->rand()
//srand()//seeds

int main()
{
    srand (time(0));

    for (int i=0; i<100; i++)
    {

        cout<<rand()%100+1<<endl;
    }

    return 0;

}
