#include <iostream>
#include <stack>

using namespace std;
string delete_duplicates(string s){
    stack<char> st;
    st.push(s[0]);
    for(size_t i=1; i<s.size(); i++)
        if(st.size() == 0 || s[i] != st.top())
            st.push(s[i]);
        else
            st.pop();
    string ans;
    while(st.size() != 0){
        ans = st.top() + ans;
        st.pop();}
    return ans;
}

int main(void){
    string s;
    cin>>s;
    cout<<delete_duplicates(s);
    return 0;
}
