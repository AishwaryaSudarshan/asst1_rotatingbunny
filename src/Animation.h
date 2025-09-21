#pragma once

#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Animation {
public:
	Animation();
	~Animation();

	void init();
	void update(float delta_time);
	void reset();
	glm::mat4 get_model_mat() { return m_model_mat; };

	//////////
	// Task 3: define rotation variables/functions here
	float a_angle;
	float b_angle;
	void rotate_x(float angle);
	void rotate_y(float angle);

private:
	glm::mat4 m_model_mat;
};

