#pragma once

namespace glow 
{

/**
 * \brief The ref_ptr class provides the interface for a reference pointer.
 *
 * It is meant to be used together with subclasses of Referenced*
 * The usage of a ref_ptr is quite the same as the work with normal pointers.
 * This ref_ptr will be automatically cast to a normal pointer automatically so it can be used with the glow API without any inconvenience.
 *
 * Example code:
 * \code
 * ref_ptr<VertexArrayObject> vao = new VertexArrayObject();
 *
 * vao->drawElements(GL_TRIANGLE_STRIP, 0, 4);
 *
 * // vao will be deleted automatically as the ref_ptr goes out of scope
 * \endcode
 *
 * \see Referenced
 */
template<typename T>
class ref_ptr
{
public:
	ref_ptr();
	ref_ptr(T * referenced);
	ref_ptr(const ref_ptr & reference);
	~ref_ptr();

	T * get();
	const T * get() const;

	ref_ptr & operator=(const ref_ptr & reference);
	T & operator*();
	const T * operator*() const;
	T * operator->();
	const T * operator->() const;
	operator T *();
	operator const T *() const;
	operator bool() const;
	bool operator<(const ref_ptr & reference) const;
	bool operator>(const ref_ptr & reference) const;
	bool operator==(const ref_ptr & reference) const;
	bool operator!=(const ref_ptr & reference) const;
protected:
	T * m_referenced;

	void increaseRef();
	void decreaseRef();
};

} // namespace glow

#include <glow/ref_ptr.hpp>
