#include <iostream>
using namespace std;

int reverseArray(int arr[],int start,int end){
    while (start<end)
    {
        /* code */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
int arr[n];
cout<<"Enter array";
   for(int i=0;i<=n;i++){
       cin>>arr[i];
   }
   printArray(arr,n);

reverseArray(arr,0,n-1);
cout<<"Reversed array is: "<<endl;

printArray(arr,n);


}