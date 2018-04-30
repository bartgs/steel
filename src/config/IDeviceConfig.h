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


#pragma once


#include <string>


namespace steel
{
    namespace config
    {
        class IDeviceConfig
        {
            public:
                enum class DeviceType { Invalid = 0, MsiKeyboard, Rival100 };


            public:
                IDeviceConfig();
                IDeviceConfig( const DeviceType deviceType, const std::string& deviceName );
                IDeviceConfig( const IDeviceConfig& other ) = default;
                IDeviceConfig( IDeviceConfig&& other ) = default;
                IDeviceConfig& operator = ( const IDeviceConfig& other ) = default;
                IDeviceConfig& operator = ( IDeviceConfig&& other ) = default;
                virtual ~ IDeviceConfig();


                DeviceType deviceType() const;
                const std::string& deviceName() const;


            private:
                DeviceType _deviceType;
                std::string _deviceName;
        };
    }
}
