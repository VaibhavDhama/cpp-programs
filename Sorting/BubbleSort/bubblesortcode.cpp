#include<iostream>
using namespace std;
int main(){
    int arr[]={54,65,87,49,5,12,32,86};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // //bubble sort
    // for(int i=0;i<n-1;i++){ //n-1 passes   
    //     //traverese
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             // int temp=arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }

    // }

    //bubble sort optimised
    for(int i=0;i<n-1;i++){ //n-1 passes
        bool flag=true;
        //traverese
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
    if(flag==true){ //swap didnt happen
        break;
    }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}