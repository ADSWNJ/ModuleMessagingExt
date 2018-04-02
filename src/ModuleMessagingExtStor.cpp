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

#include "ModuleMessagingExtStor.hpp"
#include "ModuleMessagingExtPut.hpp"
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

MMExt2::Advanced EnjoLib::ModuleMessagingExtStor::mm("<MMExtv1>");

using namespace EnjoLib;
using namespace std;

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, bool var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, int var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, double var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, const VECTOR3& var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX3& var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX4& var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, const ModuleMessagingExtBase* var, const VESSEL* myVessel)
{
//    mm.UpdMod(sender.ModuleMessagingGetModuleName());
//    mm.PutMMBase(varName, var, myVessel->GetHandle());
  return; // Funciotn now deprecated
}

void ModuleMessagingExtStor::Put(const ModuleMessagingExtPut& sender, const char* varName, std::string var, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    mm.Put(varName, var, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, bool value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, int value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, double value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, const VECTOR3 & value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX3 & value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, const MATRIX4 & value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, const ModuleMessagingExtBase* value, const VESSEL* myVessel)
{
    return false; // deprecated function ... dangerous to remove a pointer when client may have pcked it up already
}

bool ModuleMessagingExtStor::Delete(const ModuleMessagingExtPut& sender, const char* varName, std::string value, const VESSEL* myVessel)
{
    mm.UpdMod(sender.ModuleMessagingGetModuleName());
    return mm.Delete(varName, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, bool* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, int* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, double* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, VECTOR3* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, MATRIX3* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, MATRIX4* value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, const ModuleMessagingExtBase** value, const unsigned int ver, const unsigned int siz, const VESSEL* myVessel)
{
  //  if (!mm.GetMMBase(moduleName, varName, value, ver, siz, myVessel->GetHandle())) return false;
  //  return true;
  return false; // function now deprecated
}

bool ModuleMessagingExtStor::Get(const char* moduleName, const char* varName, std::string *value, const VESSEL* myVessel)
{
    return mm.Get(moduleName, varName, value, myVessel->GetHandle());
}