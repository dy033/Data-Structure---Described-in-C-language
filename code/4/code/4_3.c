
void StrCopy(SString *s, SString t)
/*将串t的值复制到串s中*/
{ 
	int i;
	for (i=0;i<t.len;i++)
		s->ch[i]=t.ch[i];
	s->len=t.len;
}