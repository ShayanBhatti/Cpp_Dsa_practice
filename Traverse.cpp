#include<iostream>
using namespace std;

int main() 
{
   int arr[] = {1,3,5,7,9};
   int n = 5;
   int i = 0; 
   
   cout<<"The Array Elements Are : "<<endl;
   
   for(i = 0; i < n; i++) 
   {
      cout<<"The Array Index is = \t"<<i<<"\t \t The Array Value is : \t"<<arr[i]<<endl;
   }
   return 0;
}
