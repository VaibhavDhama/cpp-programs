//Q1

// #include<iostream>
// #include<climits>
// using namespace std;
// void minValue(int arr[],int n,int idx,int min){
//     if(idx==n){
//         cout<<min;
//         return;
//     }
//     if(min>arr[idx]) min = arr[idx];
//     minValue(arr,n,idx+1,min);
// }
// int minValue1(int arr[],int n,int idx){
//     if(idx==n){
//         return INT_MAX;
//     }
//     return min(arr[idx],minValue1(arr,n,idx+1));
// }
// int main(){
//     int arr []={1,4,32,6,7,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // minValue(arr,n,0,INT_MAX);
//     cout<<minValue1(arr,n,0);
// }

//Q2

// #include<iostream>
// #include<climits>
// using namespace std;
// void Arraysum(int arr[],int n,int idx,int sum){
//     if(idx==n){
//         cout<<sum;
//         return;
//     }
//     sum += arr[idx];
//     Arraysum(arr,n,idx+1,sum);
// }
// int Arraysum1(int arr[],int n,int idx){
//     if(idx==n-1) return arr[idx];
//     return(arr[idx]+Arraysum1(arr,n,idx+1));
// }
// int main(){
//     int arr[] = {1,2,3,4,3};
//     int n = 5;
//     // Arraysum(arr,n,0,0);
//     cout<<Arraysum1(arr,n,0);
// }

//Q3

// #include<iostream>
// using namespace std;
// int findElement(int arr[],int n,int k,int idx){
//     if(idx==n) return -1;
//     if(arr[idx]==k) return idx;
//     return findElement(arr,n,k,idx+1);
// }
// int main(){
//     int arr[] = {5,3,7,2,4,6};
//     int n = 6;
//     int k = 7;
//     cout<<findElement(arr,n,k,0);
// }

//Q4

// #include<iostream>
// using namespace std;
// void Reverse(int arr[],int n,int idx){
//     if(idx==n) return;
//     Reverse(arr,n,idx+1);
//     cout<<arr[idx]<<endl;
// }
// int main(){
//     int arr[] = {5,3,7,2,4,6};
//     int n = 6;
//     Reverse(arr,n,0);
// }