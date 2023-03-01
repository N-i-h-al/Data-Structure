#include<iostream>
#include<string>

using namespace std;

int main(){
    char flag;
    int max;
    int init = 0,count; // init for checking first character in loop
    string s;
    cin>>s;
    count = 0;
    max = 0;
    for(int i=0;i<s.length();i++){
        if(init == 0){
            flag = s[i];
            count++;
            init = 1;
        }
        else{
            if(s[i] == flag){
                count++;
            }

            else{
                flag = s[i];
                if(count > max){
                    max = count;
                }
                count = 1;
            }
        }
    }

    cout<<max;

    return 0;
}
