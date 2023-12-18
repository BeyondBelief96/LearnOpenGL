#pragma once
#ifndef MESH_H
#define MESH_H

#include <glm/glm.hpp>
#include <string.h>
#include <string>
#include <vector>
#include "shaders.h"
using namespace std;

#define MAX_BONE_INFLUENCE 4

struct Vertex {
	// position
	glm::vec3 Position;
	// normal
	glm::vec3 Normal;
	// texCoords
	glm::vec2 TexCoords;
	// tangent
	glm::vec3 Tangent;
	// bitangent
	glm::vec3 Bitangent;
	//bone indexes which will influence this vertex
	int m_BoneIDs[MAX_BONE_INFLUENCE];
	//weights from each bone
	float m_Weights[MAX_BONE_INFLUENCE];
};

struct Texture {
	unsigned int id;
	 std::string type;
	 std::string path; // we store the path of the texture to compare with other textures.
};

class Mesh {
public:
	// mesh data
	std::vector<Vertex> vertices;
	std::vector<unsigned int> indices;
	std::vector<Texture> textures;

	Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
	void Draw(Shader& shader);
private:
	// render data
	unsigned int VAO, VBO, EBO;

	void setupMesh();
};

#endif