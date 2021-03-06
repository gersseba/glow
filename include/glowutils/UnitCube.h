#pragma once

#include <hash_map>

#include <glm/glm.hpp>

#include <glow/Array.h>
#include <glow/VertexArrayObject.h>
#include <glow/Buffer.h>
#include <glow/Referenced.h>

#include <glowutils/glowutils.h>

namespace glow 
{

class GLOWUTILS_API UnitCube : public Referenced
{
    static const Array<glm::vec3> strip();

public:
    UnitCube(
        const GLuint vertexAttribLocation = 0
    ,   const GLuint normalAttribLocation = 1);

    /** draws the unit cube as single triangle strip. Note: interleaved array 
        is used, so the normal comes from the provoking vertex (expected to be
        the default GL_LAST_VERTEX_CONVENTION). use flat interpolation to get 
        the face normal within the fragment shader.
    */
    void draw();

private:
    VertexArrayObject m_vao;

    Buffer m_strip;
};

} // namespace glow
