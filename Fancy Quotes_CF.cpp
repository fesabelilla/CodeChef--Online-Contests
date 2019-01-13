#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    for(int j = 0;j<T;j++){
    string line;
    if(j==0)
    cin.ignore(256, '\n');
    getline(cin,line);
    vector<string> str;
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < line.length()){
            string a;
        ssin >> a;
        str.push_back(a);
        ++i;
    }
    int flag = 0;
    for(i = 0; i < str.size(); i++){
       // cout << str[i] << endl;
       if(str[i]== "not"){
        flag = 1;
        break;
       }
    }
    if(flag == 1)
        cout<<"Real Fancy"<<endl;
    else
        cout<<"regularly fancy"<<endl;
    }
    return 0;
}
