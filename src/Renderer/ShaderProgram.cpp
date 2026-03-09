#include <ShaderProgram.h>
namespace Randerer
{
	ShaderProgram::ShaderProgram(const std::string& vertex_Shader, const std::string& fragment_Shader)
	{ }
	bool ShaderProgram::createShader(const std::string& source, const GLenum shaderType, Gluint& shaderID)
	{
		shaderID = glCreateShader(shaderType);
		const char* code = source.c_str();
		glShaderSource(shaderID, 1, &code, nullptr);
		glCompileShader(shaderID);

		glGetShaderiv(ShaderID, GL_COMILE_STATUS, )
	}
}