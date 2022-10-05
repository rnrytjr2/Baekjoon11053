// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int length;
int datas[1000];
int DP[1000];
int maxnumber=0;
int main()
{
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> datas[i];
    }
    DP[0] = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (datas[j] < datas[i])
            {
                DP[i] = max(DP[j]+1, DP[i] );
                maxnumber = max(maxnumber, DP[i]);
            }
        }
    }
    cout << maxnumber+1;
}
