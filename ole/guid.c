#ifndef __guid_h_
#define __guid_h_

#define INITGUID

/* FIXME: we include all the header files containing GUIDs
 * so that the corresponding variables get defined. But they
 * don't even all belong to the same DLL !!!
 */
#include "oleidl.h"
#include "oaidl.h"
#include "olectl.h"
#include "ocidl.h"
#include "objbase.h"
#include "servprov.h"
#include "ddraw.h"
#include "d3d.h"
#include "dinput.h"
#include "dsound.h"
#include "dplay.h"
#include "vfw.h"
#include "shlguid.h"
#include "shlobj.h"

/* FIXME: don't really know where to put this. */
DEFINE_GUID(GUID_NULL,   0,0,0,0,0,0,0,0,0,0,0);

#endif
