#include <iostream>

using namespace std;

int main()
{
    int arr1[2]={5,8},arr2[2]={6,9};
    int i,j;

    cout<<"A x B = { ";

    for(i=0;i<2;i++){
    for(j=0;j<2;j++){

        cout<<"("<<arr1[i]<<","<<arr2[j]<<")"<<" ";

        }
    }
    cout<<"}";

 return 0;
}
