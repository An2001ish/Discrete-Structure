#include <iostream>

using namespace std;

int main()
{
    int arr1[3]={5,8,9},arr2[3]={6,9,2},arr3[10];
    int i,j,k=0,count=0;


for(i=0;i<3;i++){

    arr3[k]=arr1[i];
    k++;

}

for(i=0;i<3;i++){
    for(j=0;j<k;j++){

if(arr2[i]==arr3[j])
            break;

        if(arr2[i]!=arr3[j])
            count++;
    }

    if(count>=3){
            arr3[k]=arr2[i];
            k++;
        }
        count=0;
}

cout<<endl;

cout<<"A U B= { ";

for(i=0;i<k;i++){


    cout<<arr3[i]<<" ";

}

cout<<"}";

 return 0;
}
