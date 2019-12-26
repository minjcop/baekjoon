#include <iostream>
#include <string>

using namespace std;


int deck[20003] = { 0, };

int begin1 = 10000;
int end1 = 10000;
int begin2 = 10001;
int end2 = 10001;

void push_front();
void push_back();
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();

int main(void){
    string s;

    int n;
    cin >> n;

    while(n--){
        cin >> s;
        if(s == "push_front"){
            push_front();
        }else if(s == "push_back"){
            push_back();
        }else if(s == "pop_front"){
            cout << pop_front() << "\n";
        }else if(s == "pop_back"){
            cout << pop_back() << "\n";
        }else if(s == "size"){
            cout << size() << "\n";
        }else if(s == "empty"){
            cout << empty() << "\n";
        }else if(s == "front"){
            cout << front() << "\n";
        }else if(s == "back"){
            cout << back() << "\n";
        }
    }
    return 0;
}

void push_front(){
    int x;
    cin >> x;
    deck[end1--] = x;

}
void push_back(){
    int x;
    cin >> x;
    deck[end2++] = x;
}
int pop_front(){
    if(empty()){
        return -1;
    }else{
        if(end1 == begin1){
            int ret = deck[begin2];
            deck[begin2++] = 0;
            return ret;
        }else{
            int ret = deck[end1+1];
            deck[end1+1] = 0;
            end1++;
            return ret;
        }
    }
}
int pop_back(){
    if(empty()){
        return -1;
    }else{
        if(end2 == begin2){
            int ret = deck[begin1];
            deck[begin1--] = 0;
            return ret;
        }else{
            int ret = deck[end2-1];
            deck[end2-1] = 0;
            end2--;
            return ret;
        }
    }
}

int size(){
    return (begin1 - end1) + (end2 - begin2);
}

int empty(){
    if(begin1 == end1 && begin2 == end2){
        return 1;
    }else{
        return 0;
    }
}

int front(){
    if(empty()){
        return -1;
    }else{
        if(end1 == begin1){
            return deck[begin2];
        }else{
            return deck[end1+1];
        }
    }
}

int back(){
    if(empty()){
        return -1;
    }else{
        if(end2 == begin2){
            return deck[begin1];
        }else{
            return deck[end2-1];
        }
    }
}

