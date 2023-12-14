bool isPalindrome(int x) {
    if(x<0)
    return false;
    long int p=x,num=0;
    while(p!=0){
        num=num*10+(p%10);
        p=p/10;
    }
    if(num==x)
    return true;
    else
    return false;
}
