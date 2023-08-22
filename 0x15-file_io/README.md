0x15. C - File I/O

Mandatory Tasks

0. Tread lightly, she is near - Write a function that reads a text file and prints it to the POSIX standard output.

1. Under the snow - Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if filename is NULL return -1
if text_content is NULL create an empty file

2. Speak gently, she can hear - Write a function that appends text at the end of a file.

3. cp - Write a program that copies the content of a file to another file.

Advanced Task

4. elf - Write a program that displays the information contained in the ELF header at the start of an ELF file.

