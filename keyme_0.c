#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// the password is the user name with each char + 5

int main(int argc, char** argv)
{
    char name[64];
    char pass[64];

    printf("Enter Name:\n");
    scanf("%s",name);
    printf("Enter Pass:\n");
    scanf("%s",pass);

    int sz1 = strlen(name);
    int sz2 = strlen(pass);

    if(sz1 == sz2)
    {
        int chk = 0;
        int tmp = 0;
        for(int i = 0; i < sz1; i++)
        {
            tmp = (name[i]|5)^pass[i];
            if(!tmp)
            {
                chk++;
            }
        }
        if(chk == sz1)
        {
            printf("Correct Password");
        }
    }
    printf("Wrong Password");
}

