int Push(SeqStack *S,StackElementType x)
{
	if(S->top==(Stack_Size-1))  
		return(FALSE);  /*栈已满*/
	S->top++;
	S->elem[S->top]=x;
	return(TRUE);
}
