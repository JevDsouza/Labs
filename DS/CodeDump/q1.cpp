#include<unistd.h>
#include<sys/types.h>
#include<bits/stdc++.h>

int main(){
	pid_t pid = fork();
	pid_t ppid;	
	if(pid == 0){
		printf("\nThis is the child process!");
		pid = getpid();
		printf("\nCurrent process' PID: %d",pid);
		pid = getppid();
		printf("\nCurrent process' PPID: %d",pid);
	}

	else if(pid > 0){
		printf("\nThis is the parent process!");
		pid = getpid();
		printf("\nCurrent process' PID: %d",pid);
		pid = getppid();
		printf("\nCurrent process' PPID: %d",pid);
	}	
	
}
