void deleteMiddleElement(stack<int> &st, int N){
    int count = 0;
    solve(st,count,N);
}
void solve(stack<int> &st, int count, int N){
    if(count == N/2){
        st.pop();
        return;
    }
    int num = st.top();
    st.pop(); 
    solve(st,count+1,N);
    st.push(num);

}
