#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyString.h"


int main() {

    return 0;
}
void *My_memchr(const void *str, int c, unsigned int length){
    char *temp = str;
    char *ValStatue = NULL;

    if(NULL != temp){
       while(length){
            if(*temp == c){
                ValStatue = temp;
                break;
            }
            else{
                temp++;
                length--;
            }
        }
    }
    else{}

    return ValStatue;
}
int My_memcmp(const void *str1, const void *str2, unsigned int length){
    char *TempStr1 = str1;
    char *TempStr2 = str2;
    unsigned char RetValue= 0;

    if(TempStr1 == TempStr2){
        RetValue= 0;
       }
    else{
        while(length--){
            if(*TempStr1 != *TempStr2){
                RetValue = (*TempStr1 < *TempStr2)? -1:1;
                break;
            }
            else{
                TempStr1++;
                TempStr2++;
            }
        }
    }
    return RetValue;
}
void *My_memcpy(void *destAddress, const void *srcAddress, unsigned int length){
    char *ptrdestAddress = destAddress;
    char *ptrsrcAddress  = srcAddress;
    if((NULL == destAddress)||( NULL == srcAddress)){
        printf("Invalid addresses !! \n");
    }
    else{
        while(length){
            *ptrdestAddress = *ptrsrcAddress;
            length--;
            ptrdestAddress++;
            ptrsrcAddress++;
        }
    }
    return destAddress;
}
void *My_memmove(void *str1, const void *str2, unsigned int length){
    char *ptrstr1 = str1;
    char *ptrstr2 = str2;

    if((NULL == str1)||( NULL == str2)){
        printf("Invalid addresses !! \n");
    }
    else{
        while(length){
            *ptrstr1 = *ptrstr2;
            length--;
            ptrstr1++;
            ptrstr2++;
        }
    }
    return str1;

}
void *My_memset(void *str, int c, unsigned int length){
    char *ptrstr = str;

    if(NULL == str){
        printf("Invalid Address !! \n");
    }
    else{
        while(length--){
            *ptrstr = c;
            ptrstr++;
        }
    }

    return str;
}
char *My_strcat(char *destAddress, const char *srcAddress){

    unsigned int length = 0;

    if((NULL == destAddress)||(NULL == srcAddress)){
        printf("Invalid Addresses !! \n");
    }
    else{
        while(destAddress[length] != '\0'){
            length++;
        }
        while(*srcAddress != '\0'){
            destAddress[length] = *srcAddress;
            srcAddress++;
            length++;
        }
    }

    return destAddress;
}
char *My_strncat(char *destAddress, const char *srcAddress, unsigned int length){
    unsigned int i = 0 , j = 0;

    if((NULL == destAddress)||(NULL == srcAddress)){
        printf("Invalid Addresses !! \n");
    }
    else{
        while(destAddress[i] != '\0'){
            i++;
        }
        while((j<length)&&(*srcAddress !='\0')){
            destAddress[i] = *srcAddress;
            srcAddress++;
            i++;
            j++;
        }
    }

    return destAddress;
}
char *My_strchr(const char *str, int c){
    char *TempStr = str;
    char *RetVal = NULL;

    while(*TempStr != '\0'){
        if(*TempStr == c){
            RetVal = TempStr;
            break;
        }
        else{
            TempStr++;
        }
    }
    return RetVal;
}
int My_strcmp(const char *str1, const char *str2){
    char *TempStr1 = str1;
    char *TempStr2 = str2;
    unsigned char RetValue= 0;

    if(TempStr1 == TempStr2){
        RetValue= 0;
       }
    else{
        while((*TempStr1 != '\0')||(*TempStr2 != '\0')){
            if(*TempStr1 != *TempStr2){
                RetValue = (*TempStr1 < *TempStr2)? -1:1;
                break;
            }
            else{
                TempStr1++;
                TempStr2++;
            }
        }
    }
    return RetValue;
}
int My_strncmp(const char *str1, const char *str2, unsigned int length){
    char *TempStr1 = str1;
    char *TempStr2 = str2;
    unsigned char RetValue= 0;

    if(TempStr1 == TempStr2){
        RetValue= 0;
       }
    else{
        while(length--){
            if(*TempStr1 != *TempStr2){
                RetValue = (*TempStr1 < *TempStr2)? -1:1;
                break;
            }
            else{
                TempStr1++;
                TempStr2++;
            }
        }
    }
    return RetValue;
}
int My_strcoll(const char *str1, const char *str2){
    char *TempStr1 = str1;
    char *TempStr2 = str2;
    unsigned char RetValue= 0;

    if(TempStr1 == TempStr2){
        RetValue= 0;
       }
    else{
        while((*TempStr1 != '\0')||(*TempStr2 != '\0')){
            if(*TempStr1 != *TempStr2){
                RetValue = (*TempStr1 < *TempStr2)? -1:1;
                break;
            }
            else{
                TempStr1++;
                TempStr2++;
            }
        }
    }
    return RetValue;
}
char *My_strcpy(char *destAddress, const char *srcAddress){
    char *TempdestAddress = destAddress;
    char *TempsrcAddress = srcAddress;

    if((destAddress == NULL)||(srcAddress == NULL)){
        printf("NULL Pointers !! \n");
    }
    else{
        while(*TempsrcAddress != '\0'){
            *TempdestAddress = *TempsrcAddress;
            TempdestAddress++;
            TempsrcAddress++;
        }
    }

    return destAddress;
}
char *My_strncpy(char *destAddress, const char *srcAddress, unsigned int length){
    char *TempdestAddress = destAddress;
    char *TempsrcAddress = srcAddress;

    if((destAddress == NULL)||(srcAddress == NULL)){
        printf("NULL Pointers !! \n");
    }
    else{
        while(length--){
            *TempdestAddress = *TempsrcAddress;
            TempdestAddress++;
            TempsrcAddress++;
        }
    }

    return destAddress;
}
unsigned int  My_strcspn(const char *str1, const char *str2){
    unsigned int NumberOfChar = 0;
    unsigned int lengthOfStr[2] = {0,0};

    if((str1 == NULL)||(str2==NULL)){
        printf("NULL Pointers !! \n");
    }
    else{
        while(str1[lengthOfStr[0]] != '\0'){
                lengthOfStr[0]++;
            }
        while(str1[lengthOfStr[1]] != '\0'){
                lengthOfStr[1]++;
            }
        for(int i = 0; i < lengthOfStr[0] ; i++){
            for(int j = 0; j < lengthOfStr[0] ; j++){
                if(str1[i] == str2[j]){
                   NumberOfChar++;
                    break;
                }
            }
        }
    }
    NumberOfChar = lengthOfStr[0] - NumberOfChar;

    return NumberOfChar;
    }
char *My_strerror(int errnum){
     static char Errors[][50] = {
        "Unknown Error",
        "Unknown File",
    };
    int totalErrors = sizeof(Errors) / sizeof(Errors[0]);

    if(errnum <0 || errnum > totalErrors){
       return  "unknown error";
    }
    else{
        return  Errors[errnum];
    }
}
unsigned int My_strlen(const char *str){
    unsigned int length = 0;

    while(str[length] != '\0'){
        length++;
    }

    return length;
}
char *My_strpbrk(const char *str1 , const char *str2){
    unsigned int i = 0;
    unsigned int j = 0;

    if((str1 == NULL)|| (str2 == NULL)){
        printf("NULL Pointers");
        return NULL;
    }
    else{
        for(i = 0; i < strlen(str1) ; i++){
            for(j = 0; j < strlen(str2); j++){
                if(str1[i] == str2[j])
                    return &str1[i];
            }
        }
    }
}
char *My_strrchr(const char *str, int c){
    unsigned int i = 0;
    char *ptr =NULL;

    for(i =0; i < My_strlen(str); i++){
        if(str[i] == c){
            ptr = &str[i];
        }
        else{

        }
    }

    return ptr;
}
unsigned int My_strspn(const char *str1, const char *str2){
    unsigned int len = 0;
    unsigned int i = 0 , j = 0;
    unsigned int flag = 0;

    for(i = 0; i < My_strlen(str1); i++){
        for(j = 0; j < My_strlen(str2); j++){
            if(str1[i] == str2[j]){
                flag  = 1;
                len++;
            }
            else{
            }
        }
        if(flag == 0){
            break;
        }
        else{
            flag = 0;
        }
    }

    return len;
}
char *My_strstr(const char *haystack, const char *needle){

    char *Retval = NULL;
    unsigned int count = 0;
    char *ptrAddresses[My_strlen(haystack)] ;
    unsigned int flag = 0;

    if((haystack == NULL)||(needle == NULL)){
        printf("NULL Pointers !! \n");
    }
    else{
        for(int i = 0; i < My_strlen(haystack); i++){
            if(needle[0] == haystack[i]){
                ptrAddresses[count] = &haystack[i];
                count++;
            }
        }
        while(count--){
            for(int i = 0; i < My_strlen(needle); i++){
                if(needle[i] == *ptrAddresses[count]){
                    flag = 1;
                    ptrAddresses[count]++;
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag != 0){
                    Retval = needle;
                    break;
                }
        }
    }

    return Retval;
}
char *My_strtok(char *str, const char *delim){
    char *retval = NULL;
    static char *contAdsress = NULL;

    if(str != NULL) {
        retval = str;
        for (int i = 0; i < My_strlen(str); i++) {
            if (str[i] == *delim) {
                str[i] = '\0';
                contAdsress = &str[i + 1];
                break;
            }
        }
    } else {
        if (contAdsress == NULL || *contAdsress == '\0') {
            retval = NULL;
        }else{
            retval = contAdsress;
            while(*contAdsress != '\0'){
                if(*contAdsress == *delim){
                    *contAdsress = '\0';
                }
                else{
                    contAdsress++;
                }
            }
            contAdsress++;
        }

    }

    return retval;
}
unsigned int My_strxfrm(char *dest, const char *src, unsigned int length){
    My_memcpy(dest,src,length);
    return My_strlen(src);
}
