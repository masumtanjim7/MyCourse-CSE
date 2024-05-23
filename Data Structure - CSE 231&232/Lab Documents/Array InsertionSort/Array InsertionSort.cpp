#include<iostream>
#include"Array InsertionSort.h"

for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
