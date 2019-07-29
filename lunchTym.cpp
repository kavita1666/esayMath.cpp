#include<iostream>
using namespace std;
typedef long long ll;

ll sum(ll a){
    ll total=0;
    while(a>0){
    total+=a%10;
    a=a/10;}return total;
}
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,i,j,prod,m=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {    cin>>arr[i];

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                prod= sum(arr[i]*arr[j]);
                if(prod>m){
                    m=prod;
                }
            }
        }cout<<m<<endl;
    }
    return 0;
}

