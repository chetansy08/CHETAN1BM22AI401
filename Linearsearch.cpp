#include<iostream>
#define SIZE 10
using namespace std;

class lsearch{
    public :
    int a[SIZE],key;
    void getdata();
    void searchKey(int[],int);
};

void lsearch::getdata()
{
    cout<<"Array elements : ";
    for(int i=0;i<SIZE;i++)
    {
        a[i]=rand()%100;
        cout<<a[i]<<'\t';
    }
    cout<<endl;
}

 void lsearch::searchKey(int a[],int key)
 {
    cout<<"Enter key to search  : ";
    cin>>key;

    clock_t req_time;
    for(int i=0;i<SIZE;i++)
    {
        req_time=clock();
        if(a[i]==key)
        {
            cout<<"Key found at position "<<i+1<<endl;
            req_time=clock();
            cout<<"It took "<<(double)req_time/CLOCKS_PER_SEC<<" seconds";
            return;
        }
        req_time=req_time-clock();
    }
    cout<<"Key not exists"<<endl;
 }

 int main()
 {
    lsearch linearSearch;
    linearSearch.getdata();
    linearSearch.searchKey(linearSearch.a,linearSearch.key);
 }
