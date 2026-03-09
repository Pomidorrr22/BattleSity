#pragma once

#include <glad/glad.h>
#include <string>


namespace Renderer
{
	class ShaderProgram
	{
	public:
		ShaderProgram(const std::string& vertex_Shader, const std::string& fragment_Shader);
		~ShaderProgram();
		bool isCompiled() const { return m_isCompiled; }
		bool use();

	private:
		bool createShader(const std::string& source, const GLenum shaderType, Gluint& shaderID);
		bool m_isCompiled = false;
		Gluint m_ID = 0;
	};
}