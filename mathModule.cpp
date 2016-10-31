#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846

//testsss
float initialLength(unsigned int index,float radius){
	return 2 * (index - 1) * radius;
}
//
float getPointX(unsigned int row,unsigned int index, float radius){
	return (2 * row  - index - 1 ) * radius;	
}	

float getPointY(unsigned int index,float radius){
	return 2 * (index -1) * radius * sin(PI/3);
}		

float getPolarX(float pointX,float pointY){
	return sqrt(pow(pointX,2) + pow(pointY,2));

}

float getPolarY(float pointX,float pointY){
	return atan2(pointX,pointY);
}

float getMirrorThetaX(float pointX,float pointY,float theta){
    return pointX * cos(theta) - pointY * sin(theta);
}

float getMirrorThetaY(float pointX,float pointY,float theta){
	return pointY * cos(theta) + pointX * sin(theta);

}

int main(){
	float lenght = initialLength(3,3.5);
	float x = getPointX(3,2,5);
	using namespace std;
	cout << lenght << "and " << x << endl;
	return 0;
}

