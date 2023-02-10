#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}

void bubblesort(int *ar, int n)
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                swap(ar[i],ar[i+1]);
            }
        }
    }
}
int main()
{
   ifstream fin("10kss.txt");

   int *a  = new int[10000];

   for(int i=0; i<10000; i++)
   {
       fin>>a[i];
   }
   cout<<"......................"<<endl;

   printlist(a,10000);
   bubblesort(a,10000);


   cout<<"......................."<<endl;
   printlist(a,10000);
   return 0;
}
