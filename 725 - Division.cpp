#include <stdio.h>
int main()
{
    bool first = true;
    int n,flag1=0;
    while(1)
    {
            scanf("%d",&n);
            if(n==0)
                break;
                if (first)
        {
            first = false;
        }
        else
        {
            printf("\n");
        }
                int flag=1;
                flag1=0;
            for(int f=0;f<5;f++)
            {
                for(int g=0;g<10;g++)
                {
                    if(f!=g)
                    {
                        for(int h=0;h<10;h++)
                        {
                            if(h!=f&&h!=g)
                            {
                                for(int i=0;i<10;i++)
                                {
                                    if(i!=h&&i!=g&&i!=f)
                                    {
                                        for(int j=0;j<10;j++)
                                        {
                                            if(j!=i&&j!=h&&j!=g&&j!=f)
                                            {
                                                int fghij=((((f*10+g)*10+h)*10+i)*10+j);
                                                int abcde=fghij*n;

                                                if(abcde<100000)
                                                {
                                                    int e=abcde%10;
                                                    int abcd=abcde/10;
                                                    int d=abcd%10;
                                                    int abc=abcd/10;
                                                    int c=abc%10;
                                                    int ab=abc/10;
                                                    int b=ab%10;
                                                    int a=ab/10;

                                                    int count[10]={0};
                                                    for(int x=0;x<10;x++)
                                                        count[x]=0;
                                                    count[a]++;
                                                    count[b]++;
                                                    count[c]++;
                                                    count[d]++;
                                                    count[e]++;
                                                    count[f]++;
                                                    count[g]++;
                                                    count[h]++;
                                                    count[i]++;
                                                    count[j]++;
                                                    flag=1;
                                                    for(int x=0;x<10;x++)
                                                    {
                                                        if(count[x]!=1)
                                                        {
                                                            flag=0;
                                                            break;
                                                        }
                                                    }
                                                    if(flag)
                                                    {
                                                        printf("%d%d%d%d%d / %d%d%d%d%d = %d\n",a,b,c,d,e,f,g,h,i,j,n);
                                                        flag1=1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(flag==0&&flag1!=1)
            {
                printf("There are no solutions for %d.\n",n);
            }
    }


    return 0;
}
