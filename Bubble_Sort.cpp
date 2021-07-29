#include<iostream>
#include<vector>

using namespace std;

void BubbleSort( int [] , int);
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"value in array"<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=n-i;
    }

    BubbleSort(arr,n);
     
return 0;
}

void BubbleSort(int arr[], int n)
{

    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j+1];

                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
cout<<"after using Bubble Sort"<<endl;

for(int i=0;i<n;i++)
{
    cout<<arr[i];
    cout<<endl;
}
    
}
