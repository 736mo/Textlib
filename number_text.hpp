#include "stdc++.h"
using namespace std;
/*
随机生成数列:
n            数列长度   
lower_limit  最小值(整型)
upper_limit  最大值(整形)
number_type  数据类型，如果是 true 返回整数，否则返回浮点数
a            原数列，请初始化为 0
*/
template<typename T>
void numbers(T n, T lower_limit, T upper_limit, T number_type, T *a)
{
	srand((unsigned)time(NULL));
    if (number_type == 1){
        n += 1;
        int cnt = 0;
        while (cnt < n){
            int index = rand() % n;
            if (!a[index]){
                a[index] = rand() % (upper_limit - lower_limit + 1) + lower_limit;
                ++ cnt;
            }
        }
    }
    else{
        n += 1;
        int cnt = 0;
        while (cnt < n){
            int index = rand() % n;
            if (!a[index]){
                a[index] = rand() / (double)RAND_MAX * (upper_limit - lower_limit + 1) + lower_limit;
                ++ cnt;
            }
        }
    }
}
