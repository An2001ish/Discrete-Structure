#include <iostream>

using namespace std;

int main()
{
    int arr1[3],arr2[3],arr3[3];
    int i,j,k=0;

    for(i=0;i<3;i++){

        cout<<"arr1 element "<<i<<" :";
        cin>>arr1[i];

    }

    cout<<endl;

    for(i=0;i<3;i++){

        cout<<"arr2 element "<<i<<" :";
        cin>>arr2[i];

    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

if(arr1[i]==arr2[j]){
   arr3[k]=arr1[i];
   k++;
   break;


}
           }
    }

    cout<<endl;

    cout<<"A n B= { ";

    for(i=0;i<k;i++){

        cout<<arr3[i]<<" ";

    }

    cout<<"}";

 return 0;
}
