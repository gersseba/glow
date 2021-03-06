#pragma once

#include <glow/glow.h>

namespace glow {

/**
 * \brief A ChangeListener can listen to any Changeable.
 *
 * If a Changeable this ChangeListener is registered on signals a change, the notifyChanged() method is called.
 * This class implements the observer pattern.
 *
 * \see Changeable
 */
class GLOW_API ChangeListener
{
public:
	virtual void notifyChanged() = 0;
};

} // namespace glow
