#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

/*
һ�����ܱ�3�������ҽ�����λ��֮���ܱ�3������http://blog.csdn.net/yew1eb/article/details/9104085
*/
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    if(n%3==2) ans++;
    ans += n/3*2;
    printf("%d\n", ans);
    return 0;
}

