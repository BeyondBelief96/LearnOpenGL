#pragma once
#ifndef TEXTURE_H
#define TEXTURE_H

class Texture2D
{
public:
	unsigned int ID;

	Texture2D(const char* fileName, GLenum color_format, GLenum color_type);
};

#endif