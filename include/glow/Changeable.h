#pragma once

#include <set>

#include <glow/glow.h>
#include <glow/ChangeListener.h>

namespace glow 
{

/**
 * \brief A Changeable is the superclass of all objects that want others to signal that they have changed.
 * 
 * It implements the observer pattern.
 * Listeners to the subclass change can be registered using registerListener() and deregistered using deregisterListener().
 * 
 * \see ChangeListener
 */
class GLOW_API Changeable
{
public:
	void changed();

	void registerListener(ChangeListener * listener);
	void deregisterListener(ChangeListener * listener);

protected:
	std::set<ChangeListener *> m_listeners;
};

} // namespace glow
