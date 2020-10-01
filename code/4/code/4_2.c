int StrDelete(SString *s, int pos, int len)
/*在串s中删除从下标pos起len个字符*/
{ 
	int i;
	if (pos<0 || pos>(s->len-len))/*删除参数不合法*/
		return(0); 
	for (i=pos+len;i<s->len;i++)
		s->ch[i-len]=s->ch[i]; /*从pos+len开始至串尾依次向前移动，实现删除len个字符*/
	s->len=s->len - len; /*s串长减len*/
	return(1);
}