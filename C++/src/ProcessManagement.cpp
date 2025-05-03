#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

enum ProcessState {
  READY,
  RUNNING,
  WAITING,
  TERMINATED
};

std::string stateToString(ProcessState state) {
  switch (state) {
    case ProcessState::READY: return "ready";
    case ProcessState::RUNNING: return "running";
    case ProcessState::WAITING: return "waiting";
    case ProcessState::TERMINATED: return "terminated";

  }
}




int main() {
  pid_t process = fork();

  if(process < 0) {

}