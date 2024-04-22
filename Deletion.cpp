#include<iostream>
using namespace std;

int main() 
{
   int arr[] = {1,3,5,7,8};
   int k = 3;
   int n = 5;
   int i;
   int j;
   cout<<"The Array Elements Are : "<<endl;
   for(i = 0; i<n; i++) 
   {
       cout<<"The Array Index is = \t"<<i<<"\t \t The Array Value is : \t"<<arr[i]<<endl;
   } 
   j = k;
   while( j < n) 
   {
      arr[j-1] = arr[j];
      j = j + 1;
   }
   n = n - 1;
   cout<<"The Array After Deletion :"<<endl;
   for(i = 0; i<n; i++) 
   {
      cout<<"The Array Index is = \t"<<i<<"\t \t The Array Value is : \t"<<arr[i]<<endl;
   }
   return 0;
}
