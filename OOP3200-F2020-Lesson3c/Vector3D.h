/*
 * Author: Domenic Catalano
 * Date: Wednesday, October 14, 2020
 * Program Name: ICE 5 (Lesson 6)
 */

#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__

#include <string>

template <class T>
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	~Vector3D();

	// accessors
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	// mutators
	void setX(const T x);
	void setY(const T y);
	void setZ(const T z);
	void set(const T x, const T y, const T z);

	std::string ToString() const;

private:
	T m_x;
	T m_y;
	T m_z;
};

#endif /* defined (__VECTOR3D__) */


