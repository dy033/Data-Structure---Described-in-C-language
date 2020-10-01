int	StrDelete(HString *s, int pos,int len)
/*在串s中删除从下标pos起len个字符 */
{ 
	int i;
	char *temp;
	if (pos<0 || pos>(s->len - len)) 
		return(0);
	temp=(char *)malloc(s->len - len);
	if (temp==NULL) 
		return(0);
	for (i=0;i<pos;i++)
		temp[i]=s->ch[i];
	for (i=pos;i<s->len - len;i++)
		temp[i]=s->ch[i+len];
	s->len=s->len-len;
	free(s->ch);
	s->ch=temp;
	return(1);
}