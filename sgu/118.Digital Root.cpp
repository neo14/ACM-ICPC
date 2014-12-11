#include<cstdio>

/*
��һ����λ��abcd��˵abcd = 1000a + 100b + 10c + d
                         = 9(111a + 11b + c) + (a+b+c+d)
�����׾ͷ����� f(n) = n % 9;
���۵�ʽ:
a*b % c = (a%c)*(b%c)
(a+b) % c = a%c + b%c
*/
int main()
{
    int k, n, x,pre, ret;
    scanf("%d", &k);
    while(k--)
    {
        scanf("%d", &n);
        pre = 1;
        ret = 0;
        while(n--)
        {
            scanf("%d",&x);
            x %= 9;
            pre = (pre * x) % 9;
            ret = ret + pre;
        }
        ret %= 9;
        if(ret==0) ret = 9;
        printf("%d\n", ret);
    }
    return 0;
}





















