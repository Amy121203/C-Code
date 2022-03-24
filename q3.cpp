#include<iostream>

using namespace std;
int main()
{
   int n ;
    cout << "\nEnter the number integers you want in an array: ";
    cin >> n;
   int arr[n], i,sum_odd=0,total_odd=0;
   for(i=0; i<n; i++){
       cout<<"Enter number: " ;
      cin>>arr[i];}
   for(i=0; i<n; i++)
   {
      if(arr[i]%2!=0)
      total_odd=total_odd+1;
        sum_odd=sum_odd+arr[i];
   }
   cout<<"sum-odd="<<sum_odd<<endl;
   cout<<"total-odd-numbers="<<total_odd<<endl;
   return 0;
}
