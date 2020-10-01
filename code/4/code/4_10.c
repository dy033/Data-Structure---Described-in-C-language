int StrIndex(SString s,int pos, SString t) 
/*求从主串s的下标pos起，串t第一次出现的位置，成功返回位置序号，不成功返回-1*/
{ 
	int i, j, start;
	if (t.len==0)  
		return(0);   /* 模式串为空串时，是任意串的匹配串 */
	start=pos; 
	i=start; 
	j=0;  /* 主串从pos开始，模式串从头（0）开始 */
	while (i<s.len && j<t.len)
		if (s.ch[i]==t.ch[j]) 
		{
			i++;
			j++;
		}   /* 当前对应字符相等时推进 */
		else 
		{ 
			start++;        /* 当前对应字符不等时回溯 */
			i=start; 
			j=0;   /* 主串从start+1开始，模式串从头（0）开始*/
		} 
		if (j>=t.len) 
			return(start);    /* 匹配成功时，返回匹配起始位置 */
		else 
			return(-1);    /* 匹配不成功时，返回-1 */
}
