#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0); // integer array of size n intializtion each index with 0


    for(int i=0;i<n;i++)
    {
        arr[i]=n-i;
    }

    // illitrate array throug for each loop
   // calculation time complexity of this illitration
   auto start_time=clock();
    for(int x : arr)
    {
        cout<<x;
        cout<<endl;
 
    }
    auto end_time=clock();

cout<<"time taken to illitrate that "<<n<<"  size of array:"<<end_time-start_time<<endl;

// sort the array

sort(arr.begin(),arr.end());
cout<<"after sorting this array"<<endl;
for(int x : arr)
    {
        cout<<x;
        cout<<endl;
 
    }
    

    return 0;
}
