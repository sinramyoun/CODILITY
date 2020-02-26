파일을 받아보면 컴파일된 python 코드임을 확인 할 수 있습니다.<br>
python은 일반적으로 디컴파일이 간단하게 가능합니다.<br>
<br>
uncompyle6을 이용하여 해당 파일을 디컴파일 해보면 간단한 코드임을 알수 있습니다.<br>
<br>
uncompyle6 -o reversing.py reversing2.pyc<br>
<br>
# uncompyle6 version 3.6.4<br>
# Python bytecode 2.7 (62211)<br>
# Decompiled from: Python 2.7.17 (v2.7.17:c2f86d86e6, Oct 19 2019, 21:01:17) [MSC v.1500 64 bit (AMD64)]<br>
# Embedded file name: reversing2.py<br>
# Compiled at: 2018-10-08 04:28:58<br>
from datetime import datetime<br>
Fqaa = [102, 108, 97, 103, 123, 100, 101, 99, 111, 109, 112, 105, 108, 101, 125]<br>
XidT = [83, 117, 112, 101, 114, 83, 101, 99, 114, 101, 116, 75, 101, 121]<br>
<br>
def main():<br>
    print 'Clock.exe'<br>
    input = raw_input('>: ').strip()<br>
    kUIl = ''<br>
    for i in XidT:<br>
        kUIl += chr(i)<br>
    #input=kUIl<br>
    if input == kUIl:<br>
        alYe = ''<br>
        for i in Fqaa:<br>
            alYe += chr(i)<br>
<br>
        print alYe<br>
    else:<br>
        print datetime.now()<br>
<br>
<br>
if __name__ == '__main__':<br>
    main()<br>
<br>
입력받은 값과 입력된 값과 이미 컴파일된 값을 비교하여 같으면 플래그를 출력해주는데<br> 
코드에서 비교하는 대상을 변경해주거나 input에 다른것을 넣어주면 결과가 나옵니다.<br>
<br>
<br>
flag{decompile}<br>