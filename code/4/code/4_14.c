int  StrIndex_KMP(SString s,int pos, SString t,int next[]) 
/*求从主串s的下标pos起，串t第一次出现的位置*/
{
	int i, j;
	if (t.len==0) 
		return(0);    /* 空串是任意字符串的子串 */
	i=pos;  
	j=0;
	while (i<s.len && j<t.len)
		if (s.ch[i]==t.ch[j])      /* 主串与子串的对应字符相等，则继续比较下一字符 */
		{
			i++; 
			j++;
		} 
		else 
			j=next[j];          /* 发现失配字符则用next函数值更新j值，而i值不变 */
	if (j>=t.len) 
		return(i-j);   /* 成功则返回主串的当前起始匹配位置 */
	else 
		return(-1);         /* 不成功则返回-1 */
}
