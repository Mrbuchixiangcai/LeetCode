int reverse(int x)
{
    int ret = 0, max = 0x7fffffff, min = 0;
    long rs = 0;
    for (; x; rs = rs * 10 + x % 10, x /= 10)
        ;
    return ret = rs > max || rs < min ? 0 : rs;
}
bool isPalindrome(int x)
{
    return x == reverse(x);
}
/***********************
* * 执行用时： 0-16ms(根据电脑性能), 在所有 C 提交中击败了 91.16%的用户
* * 内存消耗： 5.8 MB, 在所有 C 提交中击败了 48.68%的用户
***********************/
