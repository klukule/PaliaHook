#pragma once

#include <string>
#include <sstream>

#define StrPrinter ::_StrPrinter()
class _StrPrinter : public std::string
{
public:
	_StrPrinter()
	{
	}

	template <typename T>
	_StrPrinter& operator<<(T&& data)
	{
		_stream << std::forward<T>(data);
		this->std::string::operator=(_stream.str());
		return *this;
	}

	std::string operator<<(std::ostream& (*f)(std::ostream&)) const
	{
		return *this;
	}

private:
	std::stringstream _stream;
};

#define WStrPrinter ::_WStrPrinter()
class _WStrPrinter : public std::wstring
{
public:
	_WStrPrinter()
	{
	}

	template <typename T>
	_WStrPrinter& operator<<(T&& data)
	{
		_stream << std::forward<T>(data);
		this->std::wstring::operator=(_stream.str());
		return *this;
	}

	std::wstring operator<<(std::ostream& (*f)(std::ostream&)) const
	{
		return *this;
	}

private:
	std::wstringstream _stream;
};