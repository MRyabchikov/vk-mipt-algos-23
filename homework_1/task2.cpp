#include <iostream>
#include <list>
using namespace std;

int f(list <int> &v, int element){
    int ctr = 0;
    for (auto it = v.begin(); it != v.end();){
        if (*it == element){
            it = v.erase(it);
            ctr++;}
        else
            it++;
    }
    return ctr;}

int main(void){
    int n;
    cin>>n;
    list <int> v;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);}
    n = f(v, 0);
    for(int i=0; i<n; i++)
        v.push_back(0);
    for(auto x : v)
        cout<<x<<" ";

    return 0;
}
