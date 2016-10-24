#ifdef _MATHMODULE_H_
#define _MATHMODULE_H_
/*
 * Initial basic Row length
 * @param index -> start row index
 * @param radius -> hole radius.
 */

float initialLength(unsigned int index, float radius)

/*
 * Return x location 
 * @param row -> row number 
 * @param index -> index for the hole in row
 * @param radius -> hole radius
 */
float getPointX(unsigned int row,unsigned int index, float radius)	

/*
 * Return y location
 * @param index -> ...
 * @param radius -> ...
 */
float getPointY(unsigned int index,float radius,float theta)

/*
 * Return x polar value
 * @param pointX -> x loaction in cadis coordinate
 * @param pointY -> y location in cadis coordinate
 */
float getPolarX(float pointX,float pointY)

/*
 * Return y  polar value
 * @param pointX -> x loaction in cadis coordinate
 * @param pointY -> y location in cadis coordinate
 */
float getPolarY(float pointX,float pointY)

/*
 * Return mirror locat x
 * @param pointX -> x loaction in cadis coordinate
 * @param pointY -> y location in cadis coordinate
 */
float getMirrorThetaX(float pointX,float pointY,float theta)

/*
 * Return mirror locat y
 * @param pointX -> x loaction in cadis coordinate
 * @param pointY -> y location in cadis coordinate
 */
float getMirrorThetaY(float pointX,float pointY,float theta)
	
#endif	
	
