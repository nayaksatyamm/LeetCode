bool isPalindrome(int x) 
{
    if(x<0)
        return false;
    long temp=x,palin=0,c=0;
    while(temp!=0)
    {       palin=(palin*10)+(temp%10);
            if(palin==0)
                break;
            temp=temp/10;   
    }
    return palin!=x?false:true;  
}