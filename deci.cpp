#include<iostream>
using namespace std;
int bi(int n){
    int ans=0,pow=1;
    while(n>0)
    {
        int rem=n%2;
        n/=2;
        ans+=(rem*pow);
        pow*=10;
    }return ans;
}
int main(){
    int n;
    cout<<"enter the decimal number to convert binary=";
    cin>>n;
    cout<<endl<<n<<" "<<"in binary number is="<<" "<<bi(n);

}