/*************** <auto-copyright.pl BEGIN do not edit this line> **************
 *
 * PyJuggler is (C) Copyright 2002, 2003 by Patrick Hartling
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * -----------------------------------------------------------------
 * File:          $RCSfile: _Coord_gmtl_Vec_double_3_gmtl_EulerAngle_double_gmtl_ZYX.cpp,v $
 * Date modified: $Date: 2005-07-14 02:48:22 $
 * Version:       $Revision: 1.5 $
 * -----------------------------------------------------------------
 *
 *************** <auto-copyright.pl END do not edit this line> ***************/

// Includes ====================================================================
#include <boost/python.hpp>
#include <gmtl/Coord.h>
#include <gmtl/EulerAngleOps.h>
#include <gmtl/CoordOps.h>
#include <gmtl/Output.h>
#include <gmtl-pickle.h>

// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void _Export_Coord_gmtl_Vec_double_3_gmtl_EulerAngle_double_gmtl_ZYX()
{
    scope* gmtl_Coord_gmtl_Vec_double_3_gmtl_EulerAngle_double_gmtl_ZYX_scope = new scope(
    class_< gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> > >("Coord3dZYX", init<  >())
        .def(init< const gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> > & >())
        .def(init< const gmtl::Vec<double,3> &, const gmtl::EulerAngle<double,gmtl::ZYX> & >())
        .def_readwrite("pos", &gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::mPos)
        .def_readwrite("rot", &gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::mRot)
        .def("getPos", &gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::getPos, return_internal_reference< 1 >())
        .def("getRot", &gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::getRot, return_internal_reference< 1 >())
        .def("set",
             (gmtl::Coord<gmtl::Vec<double, 3>, gmtl::EulerAngle<double, gmtl::ZYX> >& (gmtl::Coord<gmtl::Vec<double, 3>, gmtl::EulerAngle<double, gmtl::ZYX> >::*)(const gmtl::Coord<gmtl::Vec<double, 3>, gmtl::EulerAngle<double, gmtl::ZYX> >&)) &gmtl::Coord<gmtl::Vec<double, 3>, gmtl::EulerAngle<double, gmtl::ZYX> >::operator=,
             return_internal_reference<1>())
        .def(self == self)
        .def(self != self)
        .def(self_ns::str(self))
    );

    enum_< gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::Params >("Params")
        .value("RotSize", gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::RotSize)
        .value("PosSize", gmtl::Coord<gmtl::Vec<double, 3>,gmtl::EulerAngle<double, gmtl::ZYX> >::PosSize)
    ;

    delete gmtl_Coord_gmtl_Vec_double_3_gmtl_EulerAngle_double_gmtl_ZYX_scope;

}
