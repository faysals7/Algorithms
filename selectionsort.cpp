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

void selectionsort(int *ar, int n)
{
    for(int i=0; i<n; i++)
    {
        int iMin=i;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]<ar[iMin])
            {
                iMin=j;
            }
            swap(ar[iMin],ar[i]);
        }
    }
}
void sortedprint(int *p,int s)
{
    ofstream fout ("15ksortedprint.txt");
    for(int i=0;i<s;i++)
    {
        fout<<p[i]<<endl;
    }

}
int main()
{
   ifstream fin("15k.txt");

   int *a  = new int[10000];

   for(int i=0; i<10000; i++)
   {
       fin>>a[i];
   }

   cout<<"......................"<<endl;

   printlist(a,10000);

   selectionsort(a,10000);


   cout<<"......................."<<endl;

   printlist(a,10000);

   return 0;
}
