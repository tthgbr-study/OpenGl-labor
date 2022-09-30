#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
	// the program ID
	GLuint ID;

	// constructor reads and builds the shader
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	~Shader();
	// use/activate the shader
	void use();
	// utility uniform functions
	void setBool(const std::string& name, GLboolean value) const;
	void setInt(const std::string& name, GLint value) const;
	void setFloat(const std::string& name, GLfloat value) const;
};

#endif