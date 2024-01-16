#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = { 1,2,3,4,5};

    int element;
    cout<<"enter element you want to delete :";
    cin>>element;

    int index = -1;

    for(int i=0; i<size-1; i++){
        if(arr[i] == element){
            index = i;
            break;
        }
    }

    if (index != -1){

        for(int i=index ;i<size-1;i++){
            arr[i] = arr[i+1];

        }

        cout<<"New Array : ";

        for(int i=0; i<size-1; i++){
            cout<<arr[i];
            cout<<" ";
        }
    }
    else
    cout<<"invalid element ";
return 0;
}