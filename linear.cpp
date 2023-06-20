//CPP program for LinearSearch @ 20/06/2023

#include<iostream>
using namespace std;
class lSearch
{
    public:
    int a[10],n,key;
    void getdata();
    void searchKey();
};
void lSearch::getdata()
{
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    cout<<"Enter elements for array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void lSearch::searchKey()
{
    clock_t time_req;
    cout<<"Enter key  to search :";
    cin>>key;
    int flag=1;
    
    for(int i=0;i<n;i++)
    {
        time_req = clock();
        if(key==a[i])
        {
            flag=0;
            cout<<"Element found at position "<<i++;
            break;
        }
        time_req = clock()- time_req;
    }
    
    if(flag==1)
    {
        cout<<"Key not found";  
    }
    cout<<endl;
    cout<< "It took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
    
}


int main()
{
    lSearch LinearSearch;
    LinearSearch.getdata();
    LinearSearch.searchKey();
}
