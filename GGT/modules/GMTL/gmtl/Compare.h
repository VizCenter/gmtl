/************************************************************** ggt-head beg
 *
 * GGT: Generic Graphics Toolkit
 *
 * Original Authors:
 *   Allen Bierbaum
 *
 * -----------------------------------------------------------------
 * File:          $RCSfile: Compare.h,v $
 * Date modified: $Date: 2002-02-11 20:19:31 $
 * Version:       $Revision: 1.2 $
 * -----------------------------------------------------------------
 *
 *********************************************************** ggt-head end */
/*************************************************************** ggt-cpr beg
*
* GGT: The Generic Graphics Toolkit
* Copyright (C) 2001,2002 Allen Bierbaum
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*
 ************************************************************ ggt-cpr end */
#ifndef _GMTL_COMPARE_H_
#define _GMTL_COMPARE_H_

#include <gmtl/gmtlConfig.h>

// Core types
#include <gmtl/Vec.h>
#include <gmtl/Point.h>

namespace gmtl
{


// --- VEC comparisons -- //


/** Compare two vecs */
template<class DATA_TYPE, unsigned SIZE>
bool operator ==(const VecBase<DATA_TYPE, SIZE>& v1, const VecBase<DATA_TYPE, SIZE>& v2)
{
   for(unsigned i=0;i<SIZE;++i)
   {
      if(v1[i] != v2[i])
      {
         return false;
      }
   }

   return true;

   /*  Would like this
   return(vec[0] == _v[0] &&
          vec[1] == _v[1] &&
          vec[2] == _v[2]);
          */
}

template<class DATA_TYPE, unsigned SIZE>
bool operator !=(const VecBase<DATA_TYPE, SIZE>& v1, const VecBase<DATA_TYPE, SIZE>& v2)
{
   return(! (v1 == v2));
}

/** Compare two vectors with a tolerance
* @pre eps must be >= 0
*/
template<class DATA_TYPE, unsigned SIZE>
bool isEqual(const VecBase<DATA_TYPE, SIZE>& v1, const VecBase<DATA_TYPE, SIZE>& v2, const DATA_TYPE& eps)
{  
   ggtASSERT(eps >= 0);

  for(int i=0;i<SIZE;++i)
  {
     if (fabs(v1[i] - v2[i]) > eps)
        return false;
  }
  return true;
}




};

#endif

