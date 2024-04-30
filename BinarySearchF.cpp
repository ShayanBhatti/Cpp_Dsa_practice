#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
cout <<endl;
}
void InputArray(int arr[], int size) {
    cout << "Enter the elements you want to enter" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
int BinarySearch(int arr[],int l,int h, int x) 
{
   int  mid = l+ (h-1)/2;

if(arr[mid] == x){
    return mid;
}
if(arr[mid] > x ){
return BinarySearch(arr,l,mid-1,x);

}
if(arr[mid]<x){
    return BinarySearch(arr,l,mid+1,x);
}
return -1;
}
int main() {
 int n ,x;
 cout<<"how many elements you want to add also the element you want to search"<<endl;
 cin>>n>>x;
 int arr[n];
 InputArray(arr,n);
 printArray(arr,n);
 int result = BinarySearch(arr,0,n-1,x);
 cout<<result;   
    return 0;
}