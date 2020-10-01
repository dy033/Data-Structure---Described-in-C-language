int	StrInsert(HString *s,int pos,HString *t)
/*在串s中下标为pos的字符之前插入串t */
{ 
	int i;
	char *temp;
	if (pos<0 || pos>s->len || s->len==0) 
		return(0);
	temp=(char *)malloc(s->len + t->len);
	if (temp==NULL) 
		return(0);
	for (i=0;i<pos;i++) 
		temp[i]=s->ch[i];
	for (i=0;i<t->len;i++) 
		temp[i+pos]=t->ch[i];
	for (i=pos;i<s->len;i++) 
		temp[i + t->len]=s->ch[i];
	s->len+=t->len;
	free(s->ch);
	s->ch=temp;
	return(1);
}
