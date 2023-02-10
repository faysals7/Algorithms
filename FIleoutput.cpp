#include<iostream>
#include<fstream>


using namespace std;

int main(){
    ofstream fout ("rtk.txt");
    srand(time(0));
    int n=1000;

    for(int i=0; i<n; i++){
        fout<<rand()%100+1<<endl;
    }
    return 0;
}

