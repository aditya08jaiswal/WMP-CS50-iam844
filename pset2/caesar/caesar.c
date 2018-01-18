#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    int n,i,l;

    if(argc!=2)
    {
        printf("Nope\n");
        return 1;
    }

    n=atoi(argv[1]);

    if(n<0)
    {
        printf("Nope\n");
        return 1;
    }

    else
    {
        printf("plaintext: ");
        string st=GetString();

        l=strlen(st);

        for(i=0;i<l;i++)
    	{
    		if(st[i]>=65 && st[i]<=90)		//uppercase
    		{
    			if ((st[i]+n)>90)
    			{
    				st[i]=(((st[i]+n)%90)%26)+64;
    			}

    			else
    			{
    				st[i]=st[i]+n;
    			}
    		}

    		else					//lowercase
    		{
    			if(st[i]>=97 && st[i]<=122)
    			{
    				if ((st[i]+n)>122)
    				{
    					st[i]=(((st[i]+n)%122)%26)+96;
    				}

    				else
    				{
    					st[i]=st[i]+n;
    				}
    			}
    		}
    	}

        printf("ciphertext: %s\n",st);
    }

    return 0;
}