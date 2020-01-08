#include <stdio.h>

#define STRLEN 200

void escape(char *c_arryDest, char *c_arrySrc);
void unescape(char *c_arryDest, char *c_arrySrc);

int main(int argc, char ** argv)
{
	char c_arryStr1[STRLEN] = "there is a enter:\nend,then is a blank: end!and then, is a tab:\tend,finish";
	char c_arryStr2[STRLEN];
	printf("now, it is a string:\n");
	printf("%s\n", c_arryStr1);
	printf("after changed:\n");
	escape(c_arryStr2, c_arryStr1);
	printf("%s\n", c_arryStr2);
	printf("and, changed back is:\n");
	unescape(c_arryStr1, c_arryStr2);
	printf("%s\n", c_arryStr1);
	printf("Finish!\n");
	return 0;
}

void escape(char *c_arryDest, char *c_arrySrc)
{
	int iJack = 0, iKey = 0;
//	for(iKey = 0; iKey < STRLEN; iKey++)
//	{
//		c_arryDest[iKey] = '\0';
//	}
	while ( (c_arrySrc[iJack] != '\0') && (iJack < STRLEN-1) &&(iKey < STRLEN) )
	{
		switch(c_arrySrc[iJack])
		{
			case '\n':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'n';
				break;
			case '\t':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 't';
				break;
			case '\a':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'a';
				break;
			case '\b':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'b';
				break;
			case '\f':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'f';
				break;
			case '\r':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'r';
				break;
			case '\v':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = 'v';
				break;
			case '\\':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = '\\';
				break;
			case '\"':
				c_arryDest[iKey++] = '\\';
				c_arryDest[iKey] = '\"';
				break;
			default:
				c_arryDest[iKey] = c_arrySrc[iJack];
				break;
		}
		iJack++;
		iKey++;
	}
	
	c_arryDest[iKey] = '\0';
	
	
}
void unescape(char *c_arryDest, char *c_arrySrc)
{
	int iJack = 0, iKey = 0;
//	for(iKey = 0; iKey < STRLEN; iKey++)
//	{
//		c_arryDest[iKey] = '\0';
//	}
	while ( (c_arrySrc[iJack] != '\0') && (iJack < STRLEN-1) &&(iKey < STRLEN) )
	{
		switch(c_arrySrc[iJack])
		{
			case '\\':
				iJack++;
				
				switch(c_arrySrc[iJack])
				{
					case 'n':
						c_arryDest[iKey] = '\n';
						break;
					case 't':
						c_arryDest[iKey] = '\t';
						break;
					case 'a':
						c_arryDest[iKey] = '\a';
						break;
					case 'b':
						c_arryDest[iKey] = '\b';
						break;
					case 'f':
						c_arryDest[iKey] = '\f';
						break;
					case 'r':
						c_arryDest[iKey] = '\r';
						break;
					case 'v':
						c_arryDest[iKey] = '\v';
						break;
					case '\\':
						c_arryDest[iKey] = '\\';
						break;
					case '\"':
						c_arryDest[iKey] = '\"';
						break;
					default:
						c_arryDest[iKey++] = '\\';
						c_arryDest[iKey] = c_arrySrc[iJack];
				}
				break;

			default:
				c_arryDest[iKey] = c_arrySrc[iJack];
		}
		iJack++;
		iKey++;
	}
	
	c_arryDest[iKey] = '\0';
	
}
