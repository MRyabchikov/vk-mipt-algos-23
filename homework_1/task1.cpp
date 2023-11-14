#include <iostream>
#include <list>
using namespace std;

int f(list <int> &v, int element){
    for (auto it = v.begin(); it != v.end();){
        if (*it == element)
            it = v.erase(it);
        else
            it++;
    }
    return v.size();}

int main(void){
    int n, elem;
    cin>>n;
    list <int> v;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);}
    cin>>elem;
    cout<<f(v, elem);
    return 0;
}
