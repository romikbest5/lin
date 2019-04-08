#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syslog.h>


#define LOG_FILE "exampled.log"
#define RUNNING_DIR "/tmp"
#define LOCK_FILE "exampled.lock"


void signal_handler(sig)
int sig;
{
	switch(sig){
	case SIGHUP:
		log_message()
}
static void skeleton_daemon()
{
	pid_t pid;
	pid=fork();
	if (pid<0)
		exit(EXIT_FAILURE);
	if (pid>0)
		exit(EXIT_SUCCESS);
	if (setsid()<0)
		exit(EXIT_FAILURE);
	signal(SIGCHLD, SIG_IGN);
	pid=fork();
	if (pid<0)
		exit(EXIT_FAILURE);
	if (pid>0)
		exit(EXIT_SUCCESS);
	umask(0);
	chdir("/");
	int x;
	for(x=sysconf(_SC_OPEN_MAX);x>=0;x--)
		{
			close(x);
		}
	openlog ("firstdaemon", LOG_PID, LOG_DAEMON);
}
