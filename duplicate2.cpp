#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size: \n";
    cin>>n;
    int i,arr[n];
    cout<<"elements of array: \n";
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"\n array is:\n";
   for (i = 0; i<=n; i++) {
        cout<<"  "<<arr[i];
    }
    cout<<"\n";
    //cout<<"unique element is : \n";
    int j;
    cout<<"duplicate array: \n";
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<" \n"<<arr[i];
            }
        }
    }
  
   return 0;
}

















