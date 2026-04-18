int isSquare(string S) {
    int num = 0;
    int i = 0;
    while(i< S.size()){
        num+=S[i];
        i++;
    }
    int root = sqrt(num);
    
    if(root * root == num){
        return 1;
    }
    return 0;
    // complete the function here
}