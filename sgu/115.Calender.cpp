#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

/*  (year%4==0 && year%100!=0) ||(year%400==0) ����
    ƽ�� 2��28days  , ���� 2��29days
    ����31days: 1, 3, 5, 7, 8, 10, 12
    С��30days: 2, 4, 6, 9, 11
*/
//2001��ƽ��
int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    if(N>month[M] || M>12) {
        printf("Impossible\n");
    } else {
        int tot = N;
        for(int i=1; i<M; ++i) tot += month[i];
        printf("%d\n", (tot-1)%7 + 1);
    }
    return 0;
}















