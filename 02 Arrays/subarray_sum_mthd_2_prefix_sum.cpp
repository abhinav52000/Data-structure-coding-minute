#include <iostream>
using namespace std;

void subarray(int a[],int size)
{
    int psum[size]={0};
    for(int i=0; i<size;++i)
    {
        if(i==0)
        {
            psum[i]=a[i];
            continue;
        }
        psum[i]=psum[i-1]+a[i];
    }
    int max=psum[0];
    for(int i=0;i<size;++i)
    {
        for(int j=i;j<size;++j)
        {
            int sum=0;
            if(i==0)
                sum=psum[j];
            else
                sum=psum[j]-psum[i-1];
            if(max<sum)
            {
                max=sum;
            }
        }
    }
    cout<<max;
}

int main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3};
    // int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(int);
    
    subarray(a,size);

    return 0;
}
