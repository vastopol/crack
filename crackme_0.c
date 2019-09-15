/*

password: 867531942

x = ['8', '6', '7', '5', '3', '1', '9', '4', '2']

y = [ord(i) for i in x]
[56, 54, 55, 53, 51, 49, 57, 52, 50]

z = [chr(j*2) for j in y]
['p', 'l', 'n', 'j', 'f', 'b', 'r', 'h', 'd']

map(lambda x: x*2, [56, 54, 55, 53, 51, 49, 57, 52, 50])

sum([112, 108, 110, 106, 102, 98, 114, 104, 100]) = 954

*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int ar1[] = {56, 54, 55, 53, 51, 49, 57, 52, 50};
int sz = 9;
int sum = 954;
int aa = 0;
int ab = 0;

int main(int argc, char** argv)
{
    char uinp[64];
    int ar2[sz+1];

    printf("Enter Number:\n");
    scanf("%s",uinp);

    if(strlen(uinp) == sz) // 9
    {
        for(int i = 0; i < sz; i++)
        {
            ar2[i] = uinp[i];
            aa += ar2[i]*2;
            ab += ar1[i] ^ ar2[i];
        }
        if(aa == sum) // 954
        {
            if(!ab) // 0
            {
                printf("Correct\n");
                exit(0);
            }
        }
    }
    printf("Wrong\n");
    return 0;
}

