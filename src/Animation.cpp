#include "Animation.h"

Animation::Animation() {
	this->m_model_mat = glm::mat4(1.0f);
}

Animation::~Animation() {
}

void Animation::init() {
	reset();
}

void Animation::reset() {
	m_model_mat = glm::mat4(1.0f);
	m_model_mat = glm::translate(m_model_mat, glm::vec3(5.0, 0.0, 0.0));
	a_angle = 0.0f;
	b_angle = 0.0f;
}

//Rotate the bunny along x-axis of LCS
void Animation::rotate_x(float angle) {
	a_angle += angle;
	m_model_mat = glm::rotate(m_model_mat, glm::radians(angle), glm::vec3(1.0f, 0.0f, 0.0f));
}

//Rotate the bunny along y-axis of WCS
void Animation::rotate_y(float angle) {
	b_angle += angle;
	m_model_mat = glm::rotate(glm::mat4(1.0f), glm::radians(angle), glm::vec3(0.0f, 1.0f, 0.0f)) * m_model_mat;
}

void Animation::update(float delta_time) {
	/////////
	// Task 3: implement the update function for rotation
	// 1. Rotate bunny around its own x-axis (local)
	// 2. Then rotate bunny around global y-axis (world)
}
