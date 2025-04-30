#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() {
  pid_t process = fork();

  if(process < 0) {

}