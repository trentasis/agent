/*
 * HTTPDefines.cpp
 *
 *  Created on: 23/lug/2013
 *      Author: stefano
 */


#include "HTTPDefines.h"

#include <iostream>

std::string HTTPHost = "Host";
std::string HTTPContentType = "Content-Type";
std::string HTTPContentLength = "Content-Length";
std::string HTTPUserAgent = "User-Agent";
std::string HTTPProtocolPrefix = "http://";


std::string
HostFromConnectionString(std::string string)
{
	std::cout << "HostFromConnectionString: " << string << "-> ";
	// TODO: Remove port if specified
	size_t prefixPos = string.find(HTTPProtocolPrefix);
	if (prefixPos == std::string::npos) {
		std::cout << string << std::endl;
		return string;
	}

	size_t slashPos = string.find('/', HTTPProtocolPrefix.length());
	std::string result = string.substr(HTTPProtocolPrefix.length(), slashPos - HTTPProtocolPrefix.length());
	std::cout << result << std::endl;
	return result;
}
