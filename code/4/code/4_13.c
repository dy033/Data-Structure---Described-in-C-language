int StrAssign(HString *s, char *tval)
/*将字符串常量tval的值赋给堆串s */
{
	int len, i=0;
	if (s->ch!=NULL) 
		free(s->ch);
	while (tval[i]!='\0')
		i++;
	len=i;
	if (len) 
	{
		s->ch=(char *)malloc(len);
		if (s->ch==NULL) 
			return(0);
		for (i=0;i<len;i++) 
			s->ch[i]=tval[i];
	}
	else
		s->ch=NULL;
	s->len=len;
	return(1);
}