void sortedprint(int *p,int s)
{
    ofstream fout ("15ksortedprint.txt");
    for(int i=0;i<s;i++)
    {
        fout<<p[i]<<endl;
    }

}
