#pragma once

#include <string>

#include <glow/glow.h>
#include <glow/ShaderSource.h>

namespace glow 
{

/**
 * \brief The ShaderCode class is a ShaderSource for direct strings.
 *
 * The shader string can be queried with source().
 *
 * \see ShaderSource
 */
class GLOW_API ShaderCode : public ShaderSource
{
public:
	ShaderCode(const std::string & source);
	virtual const std::string & source();

protected:
	std::string m_source;
};

} // namespace glow
