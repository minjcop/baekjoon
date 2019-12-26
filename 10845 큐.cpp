#include <iostream>
#include <string>

using namespace std;

int ar[10001] = { 0, };
int begin1 = 0;
int end1 = 0;

void push();
int pop();
int size();
int empty();
int front();
int back();

int main(void){

    int n;
    cin >> n;


    while(n--){
        string s;
        cin >> s;

        if(s == "push"){
            push();
        }else if(s == "pop"){
            cout << pop() << endl;
        }else if(s == "size"){
            cout << size() << endl;
        }else if(s == "empty"){
            cout << empty() << endl;
        }else if(s == "front"){
            cout << front() << endl;
        }else if(s == "back"){
            cout << back() << endl;
        }
    }
    return 0;
}

void push(){
    int x;
    cin >> x;
    ar[end1++] = x;
}
int pop(){
    if(empty()){
        return -1;
    }else{
        int ret = ar[begin1];
        ar[begin1] = 0;
        begin1++;
        return ret;
    }
}
int size(){
    return end1 - begin1;
}
int empty(){
    if(end1 == begin1){
        return 1;
    }else{
        return 0;
    }
}
int front(){
    if(empty()){
        return -1;
    }else
        return ar[begin1];
}
int back(){
    if(empty()){
        return -1;
    }else
        return ar[end1 - 1];
}
