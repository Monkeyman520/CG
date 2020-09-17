#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int height[n];
    int max=-10000;
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        int ii=i;
        int step=i+1;
        while(step<=n)
        {
            if(height[step]<=height[ii])
            {
                cnt++;
                ii=step;
                step++;
            }
            else
            {
                step++;
            }
            if(max<cnt)
            {
                max=cnt;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}


