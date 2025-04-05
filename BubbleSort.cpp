#include<bits/stdc++.h>

using namespace std;
int main(){
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
int a[size];
 cout<<"Enter the array elements";
for(int i=0;i<size;i++){
    cin>>a[i];

}
for(int step=1;step<size;step++){


    for(int i=0;i<size-step;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
 for(int i=0;i<size;i++){
    cout<<a[i];   
   
    }
}