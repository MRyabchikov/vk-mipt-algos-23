#include <iostream>
#include <vector>
using namespace std;

void push_even_front(vector <int> &v){
    vector <int> ans;
    size_t i = 0;
    while (i<v.size() && v[i] % 2 == 0)
        i++;
    for(size_t j = i+1; j<v.size(); j++)
        if (v[j] % 2 == 0){
            int tmp = v[j];
            v[j] = v[i];
            v[i] = tmp;
            i = j;}}

int main(void){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    push_even_front(v);
    for(size_t i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
