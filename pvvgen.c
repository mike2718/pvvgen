// 部分参考了 https://help.ubuntu.com/community/StrongPasswords
#include <stdio.h>
#include <ctype.h>
int main() {
    char w[100];
    printf("请输入要转换的字符串并回车（英文）：\n");
    scanf("%s", w);
    for(int i=0; w[i]!='\0'; i++)
    {
        if((i+1)%3==0 && i>0)
        {
            w[i]=toupper(w[i]);
        }
    }
    for(int i=0; w[i]!='\0'; i++)
    {
        switch(w[i])
        {
            case 'O':
                w[i] = '0';
                break;
            case 'T':
                w[i] = '7';
                break;
            case 'S':
                w[i] = '5';
                break;
            case 'Z':
                w[i] = '2';
                break;
            case 'l':
                w[i] = '1';
                break;
            case 'i':
                w[i] = '!';
                break;
            case 'g':
                w[i] = '9';
                break;
            default:
                continue;
        }
    }
    for(int i=0; w[i]!='\0'; i++)
    {
        printf("%c",w[i]);
    }
    printf("\n");
    return 0;
}
