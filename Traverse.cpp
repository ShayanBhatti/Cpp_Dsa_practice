#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	cout<<"The Elements are :"<<endl;
	for (int i = 0 ;i<n;i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}
void InputArray(int arr[],int n){
	cout<<"Enter the elements you want to enter"<<endl;
	for (int i = 0 ;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;}
int main() 
{
 cout<<"Total elements ?"<<endl;
 int c;
 cin>>c; int arr[c];
 InputArray(arr,c);
 printArray(arr,c);
   return 0;
}
