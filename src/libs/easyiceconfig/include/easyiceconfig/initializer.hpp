/*
 *  Copyright (C) 1997-2015 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Victor Arribas Raigadas <.varribas.urjc@gmail.com>
 */

#ifndef EASYICECONFIG_INITIALIZER_H
#define EASYICECONFIG_INITIALIZER_H

#include <Ice/Initialize.h>
#include <easyiceconfig/loader.hpp>

namespace easyiceconfig {
namespace initializer {

Ice::CommunicatorPtr initialize(int argc, char* argv[]);
Ice::CommunicatorPtr initialize(Ice::StringSeq args);

Ice::PropertiesPtr createProperties(int argc, char* argv[]);
Ice::PropertiesPtr createProperties(Ice::StringSeq args);

}}//NS


#endif // EASYICECONFIG_INITIALIZER_H
