/* C version of the "免翻墙镜像" project
 * License: WTFPL
 * Usage: 
 * 	gcc -o README.exe README.c
 * 	./README.exe */
#include <stdlib.h>

int main(void){
	/* TODO: don't use external cat, implement the cat inside instead. */
	return system("cat README.md");
}
