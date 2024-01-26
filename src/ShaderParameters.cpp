#ifndef SHADERPARAMETER_H
#define SHADERPARAMETER_H

#include <string>
#include <unordered_map>
#include <glm/glm.hpp>

class ShaderParameter {
public:
    ShaderParameter() = default;

    void setFloat(const std::string& name, float value);
    void setInt(const std::string& name, int value);
    void setVec2(const std::string& name, const glm::vec2 &value);
    void setVec3(const std::string& name, const glm::vec3 &value);
    void setVec4(const std::string& name, const glm::vec4 &value);
    void setMat4(const std::string& name, const glm::mat4 &value);

    void applyToShader(unsigned int shaderProgramID) const;

private:
    std::unordered_map<std::string, float> floatParams;
    std::unordered_map<std::string, int> intParams;
    std::unordered_map<std::string, glm::vec2> vec2Params;
    std::unordered_map<std::string, glm::vec3> vec3Params;
    std::unordered_map<std::string, glm::vec4> vec4Params;
    std::unordered_map<std::string, glm::mat4> mat4Params;

    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, float value) const;
    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, int value) const;
    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, the glm::vec2 &value) const;
    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, the glm::vec3 &value) const;
    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, the glm::vec4 &value) const;
    void setShaderUniform(unsigned int shaderProgramID, const std::string& name, the glm::mat4 &value) const;
};

#endif
