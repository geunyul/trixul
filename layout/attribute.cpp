/*

Trixul Cross-Platform GUI Toolkit

Copyright (c) 2006, Syd Logan
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation 
and/or other materials provided with the distribution.
* Neither the name trixul nor the names of its contributors may be used to
endorse or promote products derived from this software without specific prior
written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR 
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF 
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "attribute.h"
#include <stdlib.h>

AnAttribute::AnAttribute()
{
}

AnAttribute::~AnAttribute()
{
}

void AnAttribute::SetName(const string& name)
{
	m_name = name;
}

void AnAttribute::SetValue(const string& value)
{
	m_value = value;
}

void AnAttribute::SetValue(const bool value)
{
    if (value == true) 
	    m_value = "true";
    else
        m_value = "false";
}

string& AnAttribute::GetName()
{
	return m_name;
}

string& AnAttribute::GetValue()
{
	return m_value;
}

int AnAttribute::GetValueAsInt()
{
	// convert to int

	return atoi(m_value.c_str());
}

bool AnAttribute::GetValueAsBool()
{
	// convert to bool

    if (m_value == "true")
        return true;
    return false;
}


