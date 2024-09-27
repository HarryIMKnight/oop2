#pragma once

class Triangle
{
public:
	enum triangleColour { red, green, blue, white, black };
	Triangle() = default;
	Triangle(int t_base, int t_height, triangleColour t_colour);
	triangleColour compare(triangleColour t_colour);
	void setColour(triangleColour t_colour) const;
	float hypot();
	float area();

private:
	int lenght{ 10 };
	int height{ 10 };
	triangleColour m_colour{ red };
};