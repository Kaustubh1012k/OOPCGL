#include<iostream>
using namespace std;

template<class T>

T selectionsort(){
    int n;
    T temp;
    cout<<"Enter number of elements: ";
    cin>>n;

    T array[10];

    for(int i=0;i<n;i++){
        cout<<"array[ "<<i<<" ] : ";
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[i]=temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<", ";
    }
}

int main(){
    cout<<"\nInteger Sorting"<<endl;
    selectionsort<int>();

    cout<<"\nFloat Sorting"<<endl;
    selectionsort<float>();

    
    return 0;
}
