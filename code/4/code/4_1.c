int StrInsert(SString *s, int pos, SString t)
/*在串s中下标为pos的字符之前插入串t */
{
	int i;
	if (pos<0 || pos>s->len) /*插入位置不合法*/
		return(0); 
	if (s->len + t.len<=MAXLEN) /*插入后串长≤MAXLEN*/
	{
		for (i=s->len + t.len-1;i>=t.len + pos;i--)
			s->ch[i]=s->ch[i-t.len];
		for (i=0;i<t.len;i++) 
			s->ch[i+pos]=t.ch[i];
		s->len=s->len+t.len;
	}
	else
	{
		if (pos+t.len<=MAXLEN) /*插入后串长>MAXLEN,但串t的字符序列可以全部插入*/
		{
			for (i=MAXLEN-1;i>t.len+pos-1;i--) 
				s->ch[i]=s->ch[i-t.len];
			for (i=0;i<t.len;i++)
				s->ch[i+pos]=t.ch[i];
			s->len=MAXLEN;
		}
		else /*插入后串长>MAXLEN,并且串t的部分字符也要舍弃*/
		{ 
			for (i=0;i<MAXLEN-pos;i++)
				s->ch[i+pos]=t.ch[i];
			s->len=MAXLEN;
		}
		return(1);
	}
}
