#include<iostream>
using namespace std;
int main ()
{
   int i, j, temp;
   int a[5] = {7,53,2,0,17};

   cout <<"The Array Elements are :"<<endl;
   for(i = 0; i<5; i++) 
   {
      cout <<a[i]<<"\t";
   }
cout<<endl;

for(i = 0; i<5; i++)
 {
   for(j = i+1; j<5; j++)
   {
      if(a[j] < a[i]) 
	  {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}

cout <<"The Sorted Array Element are :"<<endl;
for(i = 0; i<5; i++) 
	{
   	cout <<a[i]<<"\t";
   }

return 0;
}