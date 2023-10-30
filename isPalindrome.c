#include <unistd.h>
#include <stdio.h>

bool isPalindrome(int num)
{
    int copy;//Copy of the same number.
    int rev;//The reverse of the number
    int rem;//The remainder of the number at each iteration

    copy = num;
    rev = 0;
    while (num >= 1)
    {
        rem = num % 10; //take the last digit if the number
        rev = rev * 10 + rem;//calucul the reverse
        num = num / 10;//get the next digit
    }
    //Now this 'rev' can be compared with 'copy' 
    if(rev == copy)
        return (true);
    return (false);
}
