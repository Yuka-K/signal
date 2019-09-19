#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void handle_signal(int sig){
	printf("opening the website");
	fflush(stdout);
//	system("C:\Program Files (x86)\Google\Chrom\Application\chrome.exe  http://www.google.com");
	system("xdg-open http://google.com");
}


int main(){
	signal(SIGINT, handle_signal);
	while(1){}
	return 0; 
}


