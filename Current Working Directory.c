#include <unistd.h>
#include <stdio.h>
int main() {
  char cwd[256];


    if (getcwd(cwd, sizeof(cwd)) == NULL)
    	perror("getcwd() error");
    else
		printf("current working directory is: %s\n", cwd);
   
   return 0;   
  
}
