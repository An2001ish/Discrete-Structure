#include <iostream>

using namespace std;

int main()
{
     float a1[3]={0.7,0.4,0};
     float a2[3]={0.3,0.8,1};
     float maxi[3];

for(int i=0;i<3;i++){

        if(a1[i]>a2[i])
            maxi[i]=a1[i];
            else
                maxi[i]=a2[i];
        }

        cout<<"A U B= {";

        for(int i=0;i<3;i++){

            cout<<"("<<"x"<<i+1<<","<<maxi[i]<<")";
        }

        cout<<"}"<<endl;

     for(int i=0;i<3;i++){

        if(a1[i]<a2[i])
            maxi[i]=a1[i];
            else
                maxi[i]=a2[i];
        }

        cout<<"A n B= {";

        for(int i=0;i<3;i++){

            cout<<"("<<"x"<<i+1<<","<<maxi[i]<<")";
        }

        cout<<"}"<<endl;

        for(int i=0;i<3;i++){

        if(a1[i]>a2[i])
            maxi[i]=a1[i];
            else
                maxi[i]=a2[i];
        }

        cout<<"~(A U B)= {";

        for(int i=0;i<3;i++){

            cout<<"("<<"x"<<i+1<<","<<1-maxi[i]<<")";
        }

        cout<<"}"<<endl;

        for(int i=0;i<3;i++){

        if(a1[i]<a2[i])
            maxi[i]=a1[i];
            else
                maxi[i]=a2[i];
        }

        cout<<"~(A n B)= {";

        for(int i=0;i<3;i++){

            cout<<"("<<"x"<<i+1<<","<<1-maxi[i]<<")";
        }

        cout<<"}";

    return 0;
}
