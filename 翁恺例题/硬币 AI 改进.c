
int main() {
    int money, n1, n2, n5;
    printf("�������� ��λΪ��\n");
    scanf("%d", &money);

    // �Ⱦ����ܶ��ʹ��5��Ӳ��
    n5 = money / 5;
    money = money % 5;

    // Ȼ�󾡿��ܶ��ʹ��2��Ӳ��
    n2 = money / 2;
    money = money % 2;

    // ���ʣ�µĶ���1��Ӳ��
    n1 = money;

    printf("5��Ӳ��%d\n", n5);
    printf("2��Ӳ��%d\n", n2);
    printf("1��Ӳ��%d\n", n1);
    return 0;
}
