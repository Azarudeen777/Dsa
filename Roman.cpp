#include<iostream>
#include<string>
using namespace std;
string convert(int n){
    string roman="";
    int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string romanlett[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(int i=0;i<13;i++){
       while(n>val[i])
       {
        roman=roman+romanlett[i];
        n=n-val[i];
       }
    }
    return roman;
}
int main(){
    cout<<"enter the integer to convert to roman=";
    int n;
    cin>>n;
    string roman=convert(n);
     cout<<"roman value is="<<roman;
}
