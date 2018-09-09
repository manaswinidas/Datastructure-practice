n=input()
base=input()
f=1
if base=="Binary":
    for i in n:
        if i=='0' or i=='1':
           f=1
        else:
           f=0
elif base=="Octal":
    for i in n:
        if i>='0' and i<='7':
           f=1
        else:
           f=0          
elif base=="Decimal":
    for i in n:
        if i>='0' and i<='9':
           f=1
        else:
           f=0
elif base=="Hex":
    for i in n:
        if (i>='0' and i<='9') or (i>='A' and i<='F'):
           f=1
        else:
           f=0
if f==1:
    print("true")
else:
    print("false")