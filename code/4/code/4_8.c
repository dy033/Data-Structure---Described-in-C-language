int StrCat(SString *s, SString t)
/*将串连接在串s的后面*/
{ 
	int i, flag;
	if (s->len + t.len<=MAXLEN)  /*连接后串长小于MAXLEN*/
	{ 
		for (i=s->len; i<s->len + t.len; i++)
			s->ch[i]=t.ch[i-s->len];
		s->len+=t.len;
		flag=1;
	}
	else 
	if (s->len<MAXLEN)  /*连接后串长大于MAXLEN，但串s的长度小于MAXLEN，即连接后串t的部分字符序列被舍弃*/
	{ 
		for (i=s->len;i<MAXLEN;i++)
			s->ch[i]=t.ch[i-s->len];
		s->len=MAXLEN;
		flag=0;
	}
	else 
		flag=0;  /* 串s的长度等于MAXLEN ,串t不被连接*/
	return(flag);
}