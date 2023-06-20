// Cpp for binary search

#include <iostream>
using namespace std;
 
class bSearch{
    public:
  int arr[10];
  int n,key;
  int left,right,mid;  

  void getdata();
  int findkey(int[],int,int,int);
};

void bSearch::getdata()
{
    cout<<"Enter size of array ";
    cin>>n;

    cout<<"Enter elements for array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter key to search ";
    cin>>key;
}

int bSearch::findkey(int arr[],int left,int right,int key)
{
    while(left<=right){
        mid=(left)+(right-left)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=right-1;
        }
    }
    return -1;
}
 
// Driver code
int main()
{
    bSearch binarySearch;
    binarySearch.getdata();
    int res=binarySearch.findkey(binarySearch.arr,0,binarySearch.n-1,binarySearch.key);
    res==-1?cout<<"key not found":cout<<"key found at location"<<res;
}
