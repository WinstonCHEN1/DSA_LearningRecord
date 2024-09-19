#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int,int> elem;
    elem[1]=0;
    for(;n>0;n--){
        int op;
        cin >> op;
        if(op==1){
            int x,y;
            cin >> x >> y; 
            elem[y]=elem[x];
            elem[x]=y;
        }else if(op==2){
            int x;
            cin >> x;
            cout << elem[x] << endl;
        }else if(op==3){
            int x;
            cin >> x;
            elem[x]=elem[elem[x]];
        }
    }
    return 0;
}