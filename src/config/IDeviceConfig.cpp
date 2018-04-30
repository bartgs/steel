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


#include "config/IDeviceConfig.h"


namespace steel
{
    namespace config
    {
        IDeviceConfig::IDeviceConfig()
            : _deviceType{ IDeviceConfig::DeviceType::Invalid }
            , _deviceName{ "invalid" }
        {
        }


        IDeviceConfig::IDeviceConfig( const DeviceType deviceType, const std::string& deviceName )
            : _deviceType{ deviceType }
            , _deviceName{ deviceName }
        {
        }


        IDeviceConfig::~IDeviceConfig()
        {
        }


        IDeviceConfig::DeviceType IDeviceConfig::deviceType() const
        {
            return _deviceType;
        }


        const std::string& IDeviceConfig::deviceName() const
        {
            return _deviceName;
        }
    }
}
