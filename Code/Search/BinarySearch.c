#include <stdio.h>

int n, x, flag = 0, l, r, mid;
//nΪ���ݼ�������Ԫ�صĸ�����xΪ������Ԫ�أ�flagΪ�Ƿ���ҳɹ��ı��
//lΪ�����������߽磬rΪ����������ұ߽磬midΪ����������м����ݵ�λ��
int arr[105];//����arrΪ���ݼ�

int main() {
    //���ݼ����������������
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    //�������ݳ�ʼ��
    l = 1;
    r = n;

    //���ֲ��ҵĹ���
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
        printf("���ҳɹ�\n");
        printf("%d", mid);
    } else {
        printf("����ʧ��");
    }

    return 0;
}
