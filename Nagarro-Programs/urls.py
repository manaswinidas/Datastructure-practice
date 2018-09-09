import os
url=input()
final=(os.path.normpath(url))
if(final=='//'):
    print(-1)
else:    
    str=''
    str+='/'.join(final.split('//'))
    str+='/'
    print(str)