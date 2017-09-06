#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>

class Shader
{
    public:
        Shader(const std::string& fileName);

        void Bind();

        virtual ~Shader();

    private:
        static const unsigned int NUM_SHADER = 2;
        Shader(const Shader& other) {}
        void operator=(const Shader& other) {}

        GLUint m_program;
        GLUint m_shaders[NUM_SHADER];
};

#endif // SHADER_H
