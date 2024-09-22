#include "user.h"

// This is for shell command. it uses my
int main(int argc, char **argv)
{
  if (argc < 3)
  {
    printf(1, "usage : ssu_trace [mask] [command] [arg...]\n");
    exit();
  }

  int pid;

  trace(atoi(argv[1]));

  if (!(pid = fork()))
  {
    exec(argv[2], argv + 2);
  }

  wait();

  if (pid)
    trace(0);

  exit();
}

// ssu_trace 32 grep ssu README