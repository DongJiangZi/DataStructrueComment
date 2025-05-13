#include <stdio.h>

int n, x, flag = 0, l, r, mid;
//n为数据集中数据元素的个数；x为待查找元素；flag为是否查找成功的标记
//l为查找数组的左边界，r为查找数组的右边界，mid为查找数组的中间数据的位置
int arr[105];//数组arr为数据集

int main() {
    //数据集与待查找数据输入
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    //查找数据初始化
    l = 1;
    r = n;

    //二分查找的过程
    while(l <= r) {
        mid = (l + r) / 2;
        if(arr[mid] == x) {
            flag = 1;
            break;
        } else if(arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if(flag) {
        printf("查找成功\n");
        printf("%d", mid);
    } else {
        printf("查找失败");
    }

    return 0;
}
