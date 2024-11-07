#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++)
    {
           facto*=i;
    }
    return facto;
}
int bino(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nr=fact(n-r);
    float res;
    res=(fact_n)/(fact_r*fact_nr);
    cout<<"binomial of"<<n<<"C"<<r<<endl<<res;
    }
    int main(){
        int n,r;
        cout<<"enter n and r value for nCr=";
        cin>>n>>r;
        bino(n,r);
    }
