#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	chdir("C:\\Users\\SUBHADEEP\\Desktop");

	FILE *fp;
	char text[100];
	fp = fopen("Test_file.txt", "w");
	if(fp==NULL)
	{
		puts("Cannot Open the File!");
		exit(0);
	}
	while (strlen(gets(text)) > 0)
    {
        fputs(text, fp);
        fputs("\n", fp);
    }
    
    fclose(fp);
    return 0;
}
