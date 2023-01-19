#include "stdc++.h"
using namespace std;

/*
使用本库请注意，你必须在你的代码中加入：
    srand((unsigned)time(NULL));
否则可能会遇到某些问题，例如数据重复。
*/

/*
生成随机数：
lower_limit     最小值(整型)
upper_limit     最大值(整型)

integer_number  随机生成整数
float_number    随机生成浮点数
*/

template<typename T>
T integer_number(T lower_limit, T upper_limit){
    return rand() % (upper_limit - lower_limit + 1) + lower_limit;
}

template<typename T>
double float_number(T lower_limit, T upper_limit){
    return rand() / (double)RAND_MAX * (upper_limit - lower_limit + 1) + lower_limit;
}


/*
随机生成数列:
n            数列长度   
lower_limit  最小值(整型)
upper_limit  最大值(整型)
number_type  数据类型，如果是 true 返回整数，否则返回浮点数
a            原数列，请初始化为 0
*/

template<typename T1, typename T2>
void numbers(T1 n, T1 lower_limit, T1 upper_limit, T1 number_type, T2 *a){
	srand((unsigned)time(NULL));
    if (number_type == 1){
        n += 1;
        int cnt = 0;
        while (cnt < n){
            int index = rand() % n;
            if (!a[index]){
                a[index] = integer_number(lower_limit, upper_limit);
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
                a[index] = float_number(lower_limit, upper_limit);
                ++ cnt;
            }
        }
    }
}

/*
生成不重复数列:
仅支持 0 ~ n
n  数据范围0 ~ n
a  数列
*/

template<typename T>
void nr_numbers(T n, T *a){
    int x;
    for (int i = 0; i <= n; i ++){
        while (a[x = rand() % (n + 1)]);
        a[x] = i;
    }
}
