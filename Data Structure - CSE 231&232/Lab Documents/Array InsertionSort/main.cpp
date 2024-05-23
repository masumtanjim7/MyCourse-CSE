#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the unsorted elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Here is the Sorted elements : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
