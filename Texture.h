#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include<glad/glad.h>
#include<stb_image.h>

#include"Shader.h"

class Texture
{
	public:
		/* Reference ID */
		GLuint ID;
		GLenum type;
		GLuint unit;
		Texture(const char* image, GLenum texType, GLuint slot, GLenum format, GLenum pixelType);

		/* Assigns a texture unit to a texture */
		void texUnit(Shader& shader, const char* uniform, GLuint unit);
		void Bind();
		void Unbind();
		void Delete();
};
#endif