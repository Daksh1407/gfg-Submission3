//Insertion in array at given position

#include <iostream>
using namespace std;
int arr[6]={1,2,3,4,5,6};

void insert(int arr[6], int data, int idx){
    for(int i=6;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=data;
    
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int num, idx;
    cout<<"Enter the number wants to insert :- ";
    cin>>num;
    cout<<"Enter the index at which wants to insert the numbers :-";
    cin>>idx;
    cout<<"Original array :-\n";
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<"\n After insertion :-\n";
    insert(arr, num, idx);
    
    return 0;
}