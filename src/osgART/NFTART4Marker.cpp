///////////////////////////////////////////////////////////////////////////////
// File name : NFTART4Marker.C
//
// Creation : YYY
//
// Version : YYY
//
// Author : Raphael Grasset
//
// email : Raphael.Grasset@imag.fr
//
// Purpose : ??
//
// Distribution :
//
// Use :
//	??
//
// Todo :
//	O ??
//	/
//	X
//
// History :
//	YYY : Mr Grasset : Creation of the file
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// include file
///////////////////////////////////////////////////////////////////////////////

#include <osgART/NFTART4Marker>

using namespace std;
using namespace osgART;

///////////////////////////////////////////////////////////////////////////////
// Macro 
///////////////////////////////////////////////////////////////////////////////

#if defined(NO_DEBUG)
#define ASSERT(x)
#else //defined(NO_DEBUG)
#define ASSERT(x) if(!(x)) \
    { cerr << "Assertion failed : (" << #x << ')' << endl \
    << "In file : " << __FILE__ << "at line #" << __LINE__ << endl \
    << "Compiled the " << __DATE__ << " at " << __TIME__ << endl; abort();}
#endif // else defined(NO_DEBUG)

const char* const NFTART4Marker_RCS_ID = "@(#)class NFTART4Marker definition.";

///////////////////////////////////////////////////////////////////////////////
// class NFTART4Marker
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Static variable
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// PUBLIC: Standard services 
///////////////////////////////////////////////////////////////////////////////

NFTART4Marker::NFTART4Marker():Marker()
{

}

NFTART4Marker::~NFTART4Marker(void)
{
    
}


Marker::MarkerType NFTART4Marker::getType() const
{
	return Marker::ART_MULTI;
}


void NFTART4Marker::setActive(bool a) {
	m_active = a;
	
	//TO FIX HERE
}


bool 
NFTART4Marker::initialise() 
{
	return true;
}

void 
NFTART4Marker::update(double trans[3][4]) 
{
	if (trans!=NULL)
		m_valid = true;
	else
		m_valid = false;
	
	if (m_valid)
		updateTransform(trans);
		
}
