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

#if !defined(__WINDOWSMENUBARIMPL__H__)
#define __WINDOWSMENUBARIMPL__H__

#include "../menubarimpl.h"
#include "../menuimpl.h"

#include "stdafx.h"

// for discussion of gcroot.h, see
// http://www.ondotnet.com/pub/a/dotnet/2003/03/03/mcppp2.html?page=2

#include <gcroot.h>

#using <mscorlib.dll>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::Windows::Forms;

#include "windowswidgetimpl.h"

#include "commandhandler.h"

class WindowsMenubarImpl : public MenubarImpl, public WindowsWidgetImpl 
{
public:
	WindowsMenubarImpl();
	virtual ~WindowsMenubarImpl();
   	virtual PRStatus PreCreate();
   	virtual PRStatus Create();
   	virtual PRStatus PostCreate();
   	virtual PRStatus Show();
   	virtual PRStatus Hide();
    virtual PRStatus Enable();
    virtual PRStatus Disable();
    virtual PRStatus GetGeometry(int &x, int &y, int &width, int &height);
    virtual PRStatus SetGeometry(const int &x, const int &y, 
        const int &width, const int &height, const char &mask);
    MainMenu *GetMenubar() {return m_menubar;};
    PRStatus AddToMenubar(System::Windows::Forms::MenuItem *menu);
    PRStatus AddToMenubar(System::Windows::Forms::MenuItem *menu, int index);
private:
    //PRStatus CreateToolsMenu();
	gcroot<MainMenu *> m_menubar;
};
#endif