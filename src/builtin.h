#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#ifndef _BUILT_IN_H
#define _BUILT_IN_H
//api
int builtin_command(char **argv);

//private functions for built-in command
static void cd(const char[]);
static void ls(void);
static void cat(const char[]);
static void help(void);

#endif