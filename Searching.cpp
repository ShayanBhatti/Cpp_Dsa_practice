#include<iostream>
using namespace std;

int main() 
{
   int arr[] = {1,3,5,7,8};
   int num = 5; 			//item or search value
   int n = 5;
   int i = 0; 
   int j = 0;
   
   cout<<"The Array Elements Are : "<<endl;	//travering
   for(i = 0; i<n; i++) 
   {
      cout<<"The Array Index is = \t"<<i<<"\t \t The Array Value is : \t"<<arr[i]<<endl;
  cout<<endl;
   }
   while(j < n)						//search method
   {
      if(arr[j] == num) 
	  {
         break;
      }	
      j = j + 1;
   }
   cout<<"Found Element : \t"<<num<<"\t \t At Postion : \t"<<j+1<<endl;
   return 0;
}
