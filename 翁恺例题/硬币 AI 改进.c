
int main() {
    int money, n1, n2, n5;
    printf("请输入金额 单位为分\n");
    scanf("%d", &money);

    // 先尽可能多地使用5分硬币
    n5 = money / 5;
    money = money % 5;

    // 然后尽可能多地使用2分硬币
    n2 = money / 2;
    money = money % 2;

    // 最后剩下的都是1分硬币
    n1 = money;

    printf("5分硬币%d\n", n5);
    printf("2分硬币%d\n", n2);
    printf("1分硬币%d\n", n1);
    return 0;
}
