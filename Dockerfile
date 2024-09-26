FROM ubuntu:18.04

RUN mkdir -p /home/app
RUN apt-get update
RUN apt-get install -y build-essential qemu-system-i386 gdb gcc-multilib

WORKDIR /home/app

COPY ./src .