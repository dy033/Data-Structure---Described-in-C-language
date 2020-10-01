void Get_nextpos(SString t, int next[])
/*求模式串t的next函数修正值并存入数组next[]中*/
{
	int i,j;
	i=0; 
	j=-1; 
	next[0]=-1;
	while(i<t.len) 
	{
		if(j==-1 || t.ch[i]==t.ch[j]) 
		{
			i++;
			j++;
			if (t.ch[i]!=t.ch[j]) 
				next[i]=j;
			else 
				next[i]=next[j]+1;
		}
		else 
			j=next[j];
	}
}
