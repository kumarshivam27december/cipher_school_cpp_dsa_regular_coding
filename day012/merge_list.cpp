#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  cin >> n1;
  int arr1[n1];
  for (int i = 0; i < n1; i++) {
    cin >> arr1[i];
  }
  cout<<"List 1: ";
  for (int i = 0; i < n1; i++) {
    cout<< arr1[i]<<" ";
  }cout<<endl;
  

  cin >> n2;
  int arr2[n2];
   
  for (int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }
   cout<<"List 2: ";
  for(int i=0;i<n2;i++)
  {
      cout<<arr2[i]<<" ";
  }cout<<endl;
  int n3 = n1+n2;
   int arr3[n3];
   for(int i=0;i<n1;i++)
   {
       arr3[i]=arr1[i];
   }
   
   for(int i=0;i<n2;i++)
   {
       arr3[n1+i]=arr2[i];
   }
   
   
   cout<<"Merged List : ";
   for(int i=0;i<n3;i++)
   {
       cout<<arr3[i]<<" ";
   }
}
