string removeDuplicates(string str, int n)
{
    string back;
    for(int i=0;i<n;i++){
        if(back.find(str[i]) == string::npos ){
            back+=str[i];
        }
    }
    return back;
}
