#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void rotate(vector<int>v, int k){
    vector<int>temp(v.size());
    for(int i=0; i<v.size();i++){
        temp[(i+k)%v.size()]=v[i];
    }
    v =temp;
    printArray(temp);
}

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    v.push_back(4);
    rotate(v, 3);
}
