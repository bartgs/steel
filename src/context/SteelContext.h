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
#include <tuple>
#include <vector>
#include "context/IContext.h"


namespace steel
{
    namespace context
    {
        class SteelContext : public IContext
        {
            public:
                enum class Command { Invalid, Help, Query, Version, Active, Profile, MsiKeyboard, Rival };


            public:
                SteelContext();
                SteelContext( const SteelContext& other ) = default;
                SteelContext( SteelContext&& other ) = default;
                SteelContext& operator = ( const SteelContext& other ) = default;
                SteelContext& operator = ( SteelContext&& other ) = default;
                ~SteelContext() = default;


                int create( int argc, char* argv[] );
                std::string syntax( int indent = 0 ) const;
                Command command() const;


            private:
                int _error( int result, const char* fmt, ... );


            private:
                Command _command;

                static std::vector<std::tuple<Command,std::string,std::string>> _commands;
        };
    }
}
