#include"stdio.h"

int main()
{
	FILE* in = fopen("in.c","r");
	FILE* out = fopen("out.c","w");
	char c;
	
	while ((c = fgetc(in)) != EOF )
	{
		if (c=='/')
		{
			int flag = 0;
			c = fgetc(in);
			if (c=='/')
			{
				flag = 1;
				while ((c=fgetc(in)) != '\n');
			///	break;	
			}
			else if (c=='*')
			{
				flag=1;
				while ((c = fgetc(in)) != EOF)
				{
					if ((c = fgetc(in)) == '*' && (c = fgetc(in)) == '/')
					{
						c = '\n';
						break;
					}				
				}
			}
			if (!flag)
				fputc('/',out);
		}
	fputc(c,out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
