#include "Screen.h"

char Screen::get(pos ht, pos wd) const
{
	pos row = ht * width;
	return contents[row + wd];
}

inline Screen & Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline Screen & Screen::set(char c)
{
	this->contents[this->cursor] = c;
	return *this;
}

Screen & Screen::set(pos r, pos col, char ch)
{
	this->contents[r*this->width + col] = ch;
	return *this;
}

