# Hellowrold
## English vocabulary
```
immutable 不可改变的
miscellaneous 混合的
oriented 导向的
abstraction 抽象
derived 派生，衍生
infrastructure 基础建设
```

```
def indexList(start, stop):
    indexList = []
    if start < stop :
        for i in range(1,stop + 1):
            if i <= start:
                listTmp = [ [x,i] for x in range(start,stop + 1 ) ]
                indexList.append(listTmp)
            else
                listTmp = [ [x,i] for x in range(i,stop + 1 )]
                indexList.append(listTmp)
        print indexList