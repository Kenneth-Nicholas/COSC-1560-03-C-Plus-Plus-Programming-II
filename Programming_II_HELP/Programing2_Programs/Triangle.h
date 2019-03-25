// Triangle class declaration

#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{	private:
		float base;
		float height;
		
	public:
		bool setBase(float b) 
		{
			if (b > 0) 
			{
				base = b;
				return true;
			}
		else 
			return false;		
		}
		void setHeight(float h) {if (h > 0) height = h;}

		float calcArea();
		float calcCircumference();
		Triangle();
		Triangle(float, float);
		~Triangle();
};
#endif