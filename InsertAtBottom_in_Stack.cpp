void solve(stack<int> &myStack,int x){
    if(myStack.empty() == true){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return(myStack);
}
