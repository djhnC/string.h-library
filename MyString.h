#ifndef _MyString_H_
#define _MyString_H_

void *My_memchr(const void *str, int c, unsigned int length);
int My_memcmp(const void *str1, const void *str2, unsigned int length);
void *My_memcpy(void *destAddress, const void *srcAddress, unsigned int length);
void *My_memmove(void *str1, const void *str2, unsigned int length);
void *My_memset(void *str, int c, unsigned int length);
char *My_strcat(char *destAddress, const char *srcAddress);
char *My_strncat(char *destAddress, const char *srcAddress, unsigned int length);
char *My_strchr(const char *str, int c);
int My_strcmp(const char *str1, const char *str2);
int My_strncmp(const char *str1, const char *str2, unsigned int length);
int My_strcoll(const char *str1, const char *str2);
char *My_strcpy(char *destAddress, const char *srcAddress);
char *My_strncpy(char *destAddress, const char *srcAddress, unsigned int length);
unsigned int  My_strcspn(const char *str1, const char *str2);
char *My_strerror(int errnum);
unsigned int My_strlen(const char *str);
char *My_strpbrk(const char *str1, const char *str2);
char *My_strrchr(const char *str, int c);
unsigned int My_strspn(const char *str1, const char *str2);
char *My_strstr(const char *haystack, const char *needle);
char *My_strtok(char *str, const char *delim);
unsigned int My_strxfrm(char *dest, const char *src, unsigned int length);



#endif // _MyString_H_
