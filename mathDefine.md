###################################
Math Module Define
##################################


##Variable
    *   radius  : radius for hole,float(mm)
    *   spaceDist  : distance between 2 hole center,float(mm)
    *   rIndex  : Index of row , unsign(int)
    *   cIndex  : Index of colum ,unsign int.
    *   pointX : X location ,float(mm)
    *   pointY  :Y location,float(mm)
    *   pointR  :R location,float(mm)
    *   pointT  *Theta location,float(mm)
    *   zone    : test area,unsign(int)
    *   shiftTheta : shift theta,unsign(rad)


##function
    *   getIniPointX(unsigned int rIndex,unsigned int cIndex,float spaceDist)
    *   getIniPointY(unsigned int rIndex,unsigned int Cindex,float spaceDist)
    *   getPointX(float pointX0,float pointY0, int zone)
    *   getPointR(float pointX,float pointY)
    *   getPointTheta(float pointX,float pointY)



##Path choice function
```
Path Choice -> 

Start::N to END::M

if Start::N1 
    N1 -> M1
    M2 -> N2

if Start::M1
    M1 -> N1
    N2 -> M2
    Index(8,2)
```



