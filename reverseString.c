// this is the function used to reverse the string using the function in which the argument is pointer to the first element in the character array
void reverseString(char* s, int sSize) {
    for(int i=0;i<sSize/2;i++){
        char temp=s[i];
        s[i]=s[sSize-i-1];
        s[sSize-i-1]=temp;
    }
}
