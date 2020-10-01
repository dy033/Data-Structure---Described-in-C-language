int SubString(SString *sub, SString s, int pos, int len) 
/*将串s中下标pos起len个字符复制到sub中*/
{ 
	int i;
	if (pos<0 || pos>s.len || len<1 || len>s.len-pos)
	{
		sub->len=0;
		return(0); 
	}
	else 
	{
		for (i=0; i<len; i++)
			sub->ch[i]=s.ch[i+pos];
		sub->len=len;
		return(1);
	}
}