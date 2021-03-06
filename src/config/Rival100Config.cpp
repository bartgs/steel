//
//  Copyright 2015-2018
//  Author(s): Bart Gysens <gysens.bart@gmx.com>
//
//  This file is part of Steel.
//
//  Steel is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Steel is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Steel. If not, see <http://www.gnu.org/licenses/>.
//


#include <fstream>
#include <iostream>
#include "config/Rival100Config.h"


namespace steel
{
    namespace config
    {
        Rival100Config::Rival100Config( const std::string& deviceName )
            : IDeviceConfig{ IDeviceConfig::DeviceType::Rival100, deviceName }
        {
        }


        const Rival100Profile& Rival100Config::active() const
        {
            return _active;
        }


        const std::vector<Rival100Profile>& Rival100Config::profiles() const
        {
            return _profiles;
        }
    }
}
