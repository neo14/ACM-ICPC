#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
/*
    ���⣺����һ������N��������ڶ��ٸ�ƽ�������9λΪ��987654321����Nλ����
    N<9,�޽⡣
    N==9,��������8����
    N>9,��֪����9λ�Ժ�����ֶԽ��û��Ӱ��,��ʱ����Ϊ 8*9* 10^(n-10) //���λ����Ϊ0��
*/
int main()
{
    int i, n;
    scanf("%d", &n);
    if(n<9)
        printf("0\n");
    else if(n==9)
        printf("8\n");
    else {
        printf("72");
        for(i=1; i<n-9; ++i)
            printf("0");
        printf("\n");
    }
    return 0;
}











