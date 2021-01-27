char * longestCommonPrefix(char ** strs, int strsSize)
{
    char *str = strs[0];    //利用第一个来判断
    int i = 0, j = 0;
    if (strsSize == 0)
    {
        return "";
    }
    for (i = 1; i < strsSize; i++)
    {
        j = 0;  //j=0要放在这里，不能放在上面的for里面，因为每次要清零
        //避免数组溢出并判断下一个元素是否相同
        while (str[j] && strs[i][j] && (str[j] == strs[i][j]))
        {
            j++;
        }
        str[j] = '\0';  //字符串结束符只输出前面对应相同的
    }
    return (str);
}
/***********************
* * 执行用时： 0ms, 在所有 C 提交中击败了 100%的用户
* * 内存消耗： 5.7 MB, 在所有 C 提交中击败了 78.56%的用户
***********************/
