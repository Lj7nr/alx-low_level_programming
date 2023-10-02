#ifndef MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t Read_textfile(const char *filename, size_t letters);
int Create_file(const char *filename, char *text_content);
int Append_text_to_file(const char *filename, char *text_content);

#Endif
