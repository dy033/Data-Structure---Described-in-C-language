int StrCompare(SString s, SString t)
/*若串s和t相等则返回0；若s>t则返回正数；若s<t则返回负数*/
{ 
	int i;
	for (i=0;i<s.len&&i<t.len;i++)
		if (s.ch[i]!=t.ch[i]) 
			return(s.ch[i] - t.ch[i]);
	return(s.len - t.len);
}