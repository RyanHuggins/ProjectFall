#pragma once

#ifndef __FALL_FALL_H__
#define __FALL_FALL_H__

#include "Common.h"
#include <Arc/Program.h>

class Fall :
    public Program
{
public:

    Fall( void );
    virtual ~Fall( void ) { term(); }

    virtual string toString( void ) const { return "Fall"; }

    virtual void init( void );
    virtual void term( void );

    virtual void update( const Event& event );
    virtual void render( const Event& event );

};

#endif // __FALL_FALL_H__