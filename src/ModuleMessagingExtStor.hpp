// ==============================================================
//                ORBITER AUX LIBRARY: ModuleMessagingExt
//             http://sf.net/projects/enjomitchsorbit
//
// Allows Orbiter modules to communicate with each other,
// using predefined module and variable names.
//
// Copyright  (C) 2014-2016 Szymon "Enjo" Ender and Andrew "ADSWNJ" Stokes
//
//                         All rights reserved
//
// ModuleMessagingExt is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// ModuleMessagingExt is distributed in the hope that it will
// be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with ModuleMessagingExt. If not, see
// <http://www.gnu.org/licenses/>.
// ==============================================================

#ifndef ModuleMessagingExtStor_H
#define ModuleMessagingExtStor_H

#include <OrbiterSDK.h>
#include <map>
#include <string>
#include "ModuleMessagingExtBase.hpp"
#include "ModuleMessagingExtBaseWrapper.hpp"
#include "MMExt2_Advanced.hpp"

namespace EnjoLib
{
/*
	Purpose:

	Internal implementation of the Module Messaging Library.

	Developer Instructions:

	None. Do not call this directly or try to use this directly.
*/

	class ModuleMessagingExtPut;
	class ModuleMessagingExtStor
	{
	public:

		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, bool var,                           const VESSEL* myVessel);
		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, int var,                            const VESSEL* myVessel);
		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, double var,                         const VESSEL* myVessel);
		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, const VECTOR3& var,                 const VESSEL* myVessel);
		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, const MATRIX3& var,                 const VESSEL* myVessel);
		static void Put(const ModuleMessagingExtPut& sender,    const char* varName, const MATRIX4& var,                 const VESSEL* myVessel);
    static void Put(const ModuleMessagingExtPut& sender,    const char* varName, std::string var,                    const VESSEL* myVessel);

		static bool Get(const char* moduleName,                 const char* varName, bool* var,                          const VESSEL* myVessel);
		static bool Get(const char* moduleName,                 const char* varName, int* var,                           const VESSEL* myVessel);
		static bool Get(const char* moduleName,                 const char* varName, double* var,                        const VESSEL* myVessel);
		static bool Get(const char* moduleName,                 const char* varName, VECTOR3* var,                       const VESSEL* myVessel);
		static bool Get(const char* moduleName,                 const char* varName, MATRIX3* var,                       const VESSEL* myVessel);
		static bool Get(const char* moduleName,                 const char* varName, MATRIX4* var,                       const VESSEL* myVessel);
    static bool Get(const char* moduleName,                 const char* varName, std::string *var,                   const VESSEL* myVessel);

		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, bool var,                           const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, int var,                            const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, double var,                         const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, const VECTOR3& var,                 const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX3& var,                 const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX4& var,                 const VESSEL* myVessel);
		static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, const ModuleMessagingExtBase* var,  const VESSEL* myVessel);
    static bool Delete(const ModuleMessagingExtPut& sender, const char* varName, std::string var,                    const VESSEL* myVessel);

    static void Put(const ModuleMessagingExtPut& sender, const char* varName, const ModuleMessagingExtBase* var,                                                    const VESSEL* myVessel);
    static bool Get(const char* moduleName,              const char* varName, const ModuleMessagingExtBase** value, const unsigned int ver, const unsigned int siz, const VESSEL* myVessel);

	protected:
	private:
        static MMExt2::Advanced mm;
	};
}

#endif // ModuleMessagingExtStor_H
