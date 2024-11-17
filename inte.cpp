#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int convert(string roman){
 unordered_map<char, int> romanmap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int n=roman.length();
    int result=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && romanmap[roman[i]]<romanmap[roman[i+1]]){
        result-=romanmap[roman[i]];
        }
        else{
        result+=romanmap[roman[i]];
        }
        }
return result;
}
int main(){
    cout<<"enter the roman number to convert integer=";
    string roman;
    cin>>roman;
    int result=convert(roman);
    cout<<"integer value is:"<<result;
}