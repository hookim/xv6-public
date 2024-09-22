# How to start

1. make sure your current working directory is the project's root
2. `docker build -t [image-name] .`
3. `docker run -it [image-name]`
4. `git checkout [target-branch]`
5. `make qemu-nox`

you are good to go.

# assignment1

### `memsizetest`

It is responsible for displaying information about the process that invoked the system call.

1. Display the memory size occupied by the process.
2. Allocate additional memory using umalloc and print the updated memory size.
3. Free the allocated memory and print the memory size again.

### `ssu_trace [mask] [shell_command] [args...]`

It is responsible for tracking the system calls used by the command passed as an argument.

A mask is used to filter specific system calls.

Each system call has a unique number associated with it.

Some commonly used system calls and their numbers include:(1 - fork, 2 - exit, 5 - read, 6 - kill, 15 - write)\

You can find more details in `src/syscall.h`.
