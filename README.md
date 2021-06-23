# 半自动强密码转换器

## 使用方法

找一个句子

Where no counsel is, the people fall, but in the multitude of counselors there is safety.

取其每一个词的第一个字母

wncitpfbitmoctis

丢进去

```
mike@DELL-PC:~/dev2/pvvgen$ pcc pvvgen.c -o pvvgen && ./pvvgen
请输入要转换的字符串并回车（英文）：
wncitpfbitmoctis
wnC!tPfdItm0ctI5
```
## 参考

* [StrongPasswords](https://help.ubuntu.com/community/StrongPasswords)
