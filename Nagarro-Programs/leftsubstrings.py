str=input()
str1=input()
str2=input()
str3=input()

if str1 in str:
    str=str.replace(str1,'')
    if str2 in str:
        str=str.replace(str2,'')
        if str3 in str:
            str=str.replace(str3,'')
print(len(str)) 