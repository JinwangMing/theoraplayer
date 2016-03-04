/// @file
/// @version 2.0
/// 
/// @section LICENSE
/// 
/// This program is free software; you can redistribute it and/or modify it under
/// the terms of the BSD license: http://opensource.org/licenses/BSD-3-Clause
/// 
/// @section DESCRIPTION
/// 
/// Defines a public interface with helper functions.

#ifndef THEORAPLAYER_H
#define THEORAPLAYER_H

#include "theoraplayerExport.h"
#include <string>

namespace theoraplayer
{
	theoraplayerFnExport void init(int workerThreadCount = 1);
	theoraplayerFnExport void destroy();

	theoraplayerFnExport void setLogFunction(void (*function)(const std::string&));
	theoraplayerFnExport void log(const std::string& message);
	theoraplayerFnExport void registerFormatLoader();

}
#endif

