/*
* Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
*
* This file is part of HyTeG
* (see https://i10git.cs.fau.de/hyteg/hyteg).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/*
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/

























#include "../P1ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDiffusion::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
{
    {
       const double tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double tmp_WHITE_UP_5 = jac_affine_0_2*jac_affine_1_1;
       const double jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const double tmp_WHITE_UP_3 = jac_affine_0_1*jac_affine_1_2;
       const double jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const double jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const double tmp_WHITE_UP_2 = jac_affine_1_2*jac_affine_2_1;
       const double jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const double tmp_WHITE_UP_1 = jac_affine_1_1*jac_affine_2_2;
       const double tmp_WHITE_UP_4 = jac_affine_0_1*jac_affine_2_2;
       const double tmp_WHITE_UP_6 = jac_affine_0_0*tmp_WHITE_UP_1 - jac_affine_0_0*tmp_WHITE_UP_2 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_1_0*tmp_WHITE_UP_4 + jac_affine_2_0*tmp_WHITE_UP_3 - jac_affine_2_0*tmp_WHITE_UP_5;
       const double tmp_WHITE_UP_7 = 1.0 / (tmp_WHITE_UP_6);
       const double jac_affine_inv_0_0 = tmp_WHITE_UP_7*(tmp_WHITE_UP_1 - tmp_WHITE_UP_2);
       const double jac_affine_inv_0_1 = tmp_WHITE_UP_7*(jac_affine_0_2*jac_affine_2_1 - tmp_WHITE_UP_4);
       const double jac_affine_inv_0_2 = tmp_WHITE_UP_7*(tmp_WHITE_UP_3 - tmp_WHITE_UP_5);
       const double jac_affine_inv_1_0 = tmp_WHITE_UP_7*(-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0);
       const double jac_affine_inv_1_1 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0);
       const double jac_affine_inv_1_2 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0);
       const double jac_affine_inv_2_0 = tmp_WHITE_UP_7*(jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_2_1 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0);
       const double jac_affine_inv_2_2 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double abs_det_jac_affine = fabs(tmp_WHITE_UP_6);
       const double tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
       const double tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
       const double tmp_2 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
       const double tmp_3 = abs_det_jac_affine*0.16666666666666666;
       const double tmp_4 = tmp_3*(jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1 + jac_affine_inv_0_2*tmp_2);
       const double tmp_5 = tmp_3*(jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1 + jac_affine_inv_1_2*tmp_2);
       const double tmp_6 = tmp_3*(jac_affine_inv_2_0*tmp_0 + jac_affine_inv_2_1*tmp_1 + jac_affine_inv_2_2*tmp_2);
       const double tmp_7 = tmp_3*(jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1 + jac_affine_inv_0_2*jac_affine_inv_1_2);
       const double tmp_8 = tmp_3*(jac_affine_inv_0_0*jac_affine_inv_2_0 + jac_affine_inv_0_1*jac_affine_inv_2_1 + jac_affine_inv_0_2*jac_affine_inv_2_2);
       const double tmp_9 = tmp_3*(jac_affine_inv_1_0*jac_affine_inv_2_0 + jac_affine_inv_1_1*jac_affine_inv_2_1 + jac_affine_inv_1_2*jac_affine_inv_2_2);
       const double elMat_0_0 = tmp_3*((tmp_0*tmp_0) + (tmp_1*tmp_1) + (tmp_2*tmp_2));
       const double elMat_0_1 = tmp_4;
       const double elMat_0_2 = tmp_5;
       const double elMat_0_3 = tmp_6;
       const double elMat_1_0 = tmp_4;
       const double elMat_1_1 = tmp_3*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
       const double elMat_1_2 = tmp_7;
       const double elMat_1_3 = tmp_8;
       const double elMat_2_0 = tmp_5;
       const double elMat_2_1 = tmp_7;
       const double elMat_2_2 = tmp_3*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
       const double elMat_2_3 = tmp_9;
       const double elMat_3_0 = tmp_6;
       const double elMat_3_1 = tmp_8;
       const double elMat_3_2 = tmp_9;
       const double elMat_3_3 = tmp_3*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2));
       const double tmp_WHITE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_WHITE_DOWN_1 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_WHITE_DOWN_2 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_WHITE_DOWN_3 = tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_2;
       const double tmp_WHITE_DOWN_4 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_WHITE_DOWN_5 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_WHITE_DOWN_6 = tmp_WHITE_DOWN_4 + tmp_WHITE_DOWN_5;
       const double tmp_WHITE_DOWN_7 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_WHITE_DOWN_8 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_WHITE_DOWN_9 = tmp_WHITE_DOWN_7 + tmp_WHITE_DOWN_8;
       const double tmp_WHITE_DOWN_10 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_WHITE_DOWN_11 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_WHITE_DOWN_12 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_1965 = tmp_WHITE_DOWN_3;
       const double Dummy_1966 = tmp_WHITE_DOWN_6;
       const double Dummy_1967 = tmp_WHITE_DOWN_9;
       const double Dummy_1968 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const double Dummy_1969 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const double Dummy_1970 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const double Dummy_1971 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const double Dummy_1972 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const double Dummy_1973 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const double Dummy_1974 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const double Dummy_1975 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const double Dummy_1976 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const double Dummy_1977 = -Dummy_1965 + Dummy_1968;
       const double Dummy_1978 = -Dummy_1965 + Dummy_1971;
       const double Dummy_1979 = -Dummy_1965 + Dummy_1974;
       const double Dummy_1980 = -Dummy_1966 + Dummy_1969;
       const double Dummy_1981 = -Dummy_1966 + Dummy_1972;
       const double tmp_WHITE_DOWN_17 = Dummy_1979*Dummy_1981;
       const double Dummy_1982 = -Dummy_1966 + Dummy_1975;
       const double tmp_WHITE_DOWN_15 = Dummy_1978*Dummy_1982;
       const double Dummy_1983 = -Dummy_1967 + Dummy_1970;
       const double Dummy_1984 = -Dummy_1967 + Dummy_1973;
       const double tmp_WHITE_DOWN_14 = Dummy_1982*Dummy_1984;
       const double Dummy_1985 = -Dummy_1967 + Dummy_1976;
       const double tmp_WHITE_DOWN_13 = Dummy_1981*Dummy_1985;
       const double tmp_WHITE_DOWN_16 = Dummy_1978*Dummy_1985;
       const double tmp_WHITE_DOWN_18 = Dummy_1977*tmp_WHITE_DOWN_13 - Dummy_1977*tmp_WHITE_DOWN_14 + Dummy_1979*Dummy_1980*Dummy_1984 - Dummy_1980*tmp_WHITE_DOWN_16 + Dummy_1983*tmp_WHITE_DOWN_15 - Dummy_1983*tmp_WHITE_DOWN_17;
       const double tmp_WHITE_DOWN_19 = 1.0 / (tmp_WHITE_DOWN_18);
       const double Dummy_1986 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_13 - tmp_WHITE_DOWN_14);
       const double Dummy_1987 = tmp_WHITE_DOWN_19*(Dummy_1979*Dummy_1984 - tmp_WHITE_DOWN_16);
       const double Dummy_1988 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_15 - tmp_WHITE_DOWN_17);
       const double Dummy_1989 = tmp_WHITE_DOWN_19*(-Dummy_1980*Dummy_1985 + Dummy_1982*Dummy_1983);
       const double Dummy_1990 = tmp_WHITE_DOWN_19*(Dummy_1977*Dummy_1985 - Dummy_1979*Dummy_1983);
       const double Dummy_1991 = tmp_WHITE_DOWN_19*(-Dummy_1977*Dummy_1982 + Dummy_1979*Dummy_1980);
       const double Dummy_1992 = tmp_WHITE_DOWN_19*(Dummy_1980*Dummy_1984 - Dummy_1981*Dummy_1983);
       const double Dummy_1993 = tmp_WHITE_DOWN_19*(-Dummy_1977*Dummy_1984 + Dummy_1978*Dummy_1983);
       const double Dummy_1994 = tmp_WHITE_DOWN_19*(Dummy_1977*Dummy_1981 - Dummy_1978*Dummy_1980);
       const double Dummy_1995 = fabs(tmp_WHITE_DOWN_18);
       const double Dummy_1996 = -Dummy_1986 - Dummy_1989 - Dummy_1992;
       const double Dummy_1997 = -Dummy_1987 - Dummy_1990 - Dummy_1993;
       const double Dummy_1998 = -Dummy_1988 - Dummy_1991 - Dummy_1994;
       const double Dummy_1999 = Dummy_1995*0.16666666666666666;
       const double Dummy_2000 = Dummy_1999*(Dummy_1986*Dummy_1996 + Dummy_1987*Dummy_1997 + Dummy_1988*Dummy_1998);
       const double Dummy_2001 = Dummy_1999*(Dummy_1989*Dummy_1996 + Dummy_1990*Dummy_1997 + Dummy_1991*Dummy_1998);
       const double Dummy_2002 = Dummy_1999*(Dummy_1992*Dummy_1996 + Dummy_1993*Dummy_1997 + Dummy_1994*Dummy_1998);
       const double Dummy_2003 = Dummy_1999*(Dummy_1986*Dummy_1989 + Dummy_1987*Dummy_1990 + Dummy_1988*Dummy_1991);
       const double Dummy_2004 = Dummy_1999*(Dummy_1986*Dummy_1992 + Dummy_1987*Dummy_1993 + Dummy_1988*Dummy_1994);
       const double Dummy_2005 = Dummy_1999*(Dummy_1989*Dummy_1992 + Dummy_1990*Dummy_1993 + Dummy_1991*Dummy_1994);
       const double Dummy_2006 = Dummy_1999*((Dummy_1996*Dummy_1996) + (Dummy_1997*Dummy_1997) + (Dummy_1998*Dummy_1998));
       const double Dummy_2007 = Dummy_2000;
       const double Dummy_2008 = Dummy_2001;
       const double Dummy_2009 = Dummy_2002;
       const double Dummy_2010 = Dummy_2000;
       const double Dummy_2011 = Dummy_1999*((Dummy_1986*Dummy_1986) + (Dummy_1987*Dummy_1987) + (Dummy_1988*Dummy_1988));
       const double Dummy_2012 = Dummy_2003;
       const double Dummy_2013 = Dummy_2004;
       const double Dummy_2014 = Dummy_2001;
       const double Dummy_2015 = Dummy_2003;
       const double Dummy_2016 = Dummy_1999*((Dummy_1989*Dummy_1989) + (Dummy_1990*Dummy_1990) + (Dummy_1991*Dummy_1991));
       const double Dummy_2017 = Dummy_2005;
       const double Dummy_2018 = Dummy_2002;
       const double Dummy_2019 = Dummy_2004;
       const double Dummy_2020 = Dummy_2005;
       const double Dummy_2021 = Dummy_1999*((Dummy_1992*Dummy_1992) + (Dummy_1993*Dummy_1993) + (Dummy_1994*Dummy_1994));
       const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_2022 = tmp_BLUE_UP_1;
       const double Dummy_2023 = tmp_BLUE_UP_2;
       const double Dummy_2024 = tmp_BLUE_UP_3;
       const double Dummy_2025 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const double Dummy_2026 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const double Dummy_2027 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const double Dummy_2028 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const double Dummy_2029 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const double Dummy_2030 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const double Dummy_2031 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const double Dummy_2032 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const double Dummy_2033 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const double Dummy_2034 = -Dummy_2022 + Dummy_2025;
       const double Dummy_2035 = -Dummy_2022 + Dummy_2028;
       const double Dummy_2036 = -Dummy_2022 + Dummy_2031;
       const double Dummy_2037 = -Dummy_2023 + Dummy_2026;
       const double Dummy_2038 = -Dummy_2023 + Dummy_2029;
       const double tmp_BLUE_UP_11 = Dummy_2036*Dummy_2038;
       const double Dummy_2039 = -Dummy_2023 + Dummy_2032;
       const double tmp_BLUE_UP_9 = Dummy_2035*Dummy_2039;
       const double Dummy_2040 = -Dummy_2024 + Dummy_2027;
       const double Dummy_2041 = -Dummy_2024 + Dummy_2030;
       const double tmp_BLUE_UP_8 = Dummy_2039*Dummy_2041;
       const double Dummy_2042 = -Dummy_2024 + Dummy_2033;
       const double tmp_BLUE_UP_7 = Dummy_2038*Dummy_2042;
       const double tmp_BLUE_UP_10 = Dummy_2035*Dummy_2042;
       const double tmp_BLUE_UP_12 = Dummy_2034*tmp_BLUE_UP_7 - Dummy_2034*tmp_BLUE_UP_8 + Dummy_2036*Dummy_2037*Dummy_2041 - Dummy_2037*tmp_BLUE_UP_10 - Dummy_2040*tmp_BLUE_UP_11 + Dummy_2040*tmp_BLUE_UP_9;
       const double tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
       const double Dummy_2043 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
       const double Dummy_2044 = tmp_BLUE_UP_13*(Dummy_2036*Dummy_2041 - tmp_BLUE_UP_10);
       const double Dummy_2045 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
       const double Dummy_2046 = tmp_BLUE_UP_13*(-Dummy_2037*Dummy_2042 + Dummy_2039*Dummy_2040);
       const double Dummy_2047 = tmp_BLUE_UP_13*(Dummy_2034*Dummy_2042 - Dummy_2036*Dummy_2040);
       const double Dummy_2048 = tmp_BLUE_UP_13*(-Dummy_2034*Dummy_2039 + Dummy_2036*Dummy_2037);
       const double Dummy_2049 = tmp_BLUE_UP_13*(Dummy_2037*Dummy_2041 - Dummy_2038*Dummy_2040);
       const double Dummy_2050 = tmp_BLUE_UP_13*(-Dummy_2034*Dummy_2041 + Dummy_2035*Dummy_2040);
       const double Dummy_2051 = tmp_BLUE_UP_13*(Dummy_2034*Dummy_2038 - Dummy_2035*Dummy_2037);
       const double Dummy_2052 = fabs(tmp_BLUE_UP_12);
       const double Dummy_2053 = -Dummy_2043 - Dummy_2046 - Dummy_2049;
       const double Dummy_2054 = -Dummy_2044 - Dummy_2047 - Dummy_2050;
       const double Dummy_2055 = -Dummy_2045 - Dummy_2048 - Dummy_2051;
       const double Dummy_2056 = Dummy_2052*0.16666666666666666;
       const double Dummy_2057 = Dummy_2056*(Dummy_2043*Dummy_2053 + Dummy_2044*Dummy_2054 + Dummy_2045*Dummy_2055);
       const double Dummy_2058 = Dummy_2056*(Dummy_2046*Dummy_2053 + Dummy_2047*Dummy_2054 + Dummy_2048*Dummy_2055);
       const double Dummy_2059 = Dummy_2056*(Dummy_2049*Dummy_2053 + Dummy_2050*Dummy_2054 + Dummy_2051*Dummy_2055);
       const double Dummy_2060 = Dummy_2056*(Dummy_2043*Dummy_2046 + Dummy_2044*Dummy_2047 + Dummy_2045*Dummy_2048);
       const double Dummy_2061 = Dummy_2056*(Dummy_2043*Dummy_2049 + Dummy_2044*Dummy_2050 + Dummy_2045*Dummy_2051);
       const double Dummy_2062 = Dummy_2056*(Dummy_2046*Dummy_2049 + Dummy_2047*Dummy_2050 + Dummy_2048*Dummy_2051);
       const double Dummy_2063 = Dummy_2056*((Dummy_2053*Dummy_2053) + (Dummy_2054*Dummy_2054) + (Dummy_2055*Dummy_2055));
       const double Dummy_2064 = Dummy_2057;
       const double Dummy_2065 = Dummy_2058;
       const double Dummy_2066 = Dummy_2059;
       const double Dummy_2067 = Dummy_2057;
       const double Dummy_2068 = Dummy_2056*((Dummy_2043*Dummy_2043) + (Dummy_2044*Dummy_2044) + (Dummy_2045*Dummy_2045));
       const double Dummy_2069 = Dummy_2060;
       const double Dummy_2070 = Dummy_2061;
       const double Dummy_2071 = Dummy_2058;
       const double Dummy_2072 = Dummy_2060;
       const double Dummy_2073 = Dummy_2056*((Dummy_2046*Dummy_2046) + (Dummy_2047*Dummy_2047) + (Dummy_2048*Dummy_2048));
       const double Dummy_2074 = Dummy_2062;
       const double Dummy_2075 = Dummy_2059;
       const double Dummy_2076 = Dummy_2061;
       const double Dummy_2077 = Dummy_2062;
       const double Dummy_2078 = Dummy_2056*((Dummy_2049*Dummy_2049) + (Dummy_2050*Dummy_2050) + (Dummy_2051*Dummy_2051));
       const double tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
       const double tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
       const double tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
       const double Dummy_2079 = tmp_BLUE_DOWN_1;
       const double Dummy_2080 = tmp_BLUE_DOWN_2;
       const double Dummy_2081 = tmp_BLUE_DOWN_3;
       const double Dummy_2082 = tmp_BLUE_DOWN_5;
       const double Dummy_2083 = tmp_BLUE_DOWN_7;
       const double Dummy_2084 = tmp_BLUE_DOWN_9;
       const double Dummy_2085 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const double Dummy_2086 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const double Dummy_2087 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const double Dummy_2088 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const double Dummy_2089 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const double Dummy_2090 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const double Dummy_2091 = -Dummy_2079 + Dummy_2082;
       const double Dummy_2092 = -Dummy_2079 + Dummy_2085;
       const double Dummy_2093 = -Dummy_2079 + Dummy_2088;
       const double Dummy_2094 = -Dummy_2080 + Dummy_2083;
       const double Dummy_2095 = -Dummy_2080 + Dummy_2086;
       const double tmp_BLUE_DOWN_14 = Dummy_2093*Dummy_2095;
       const double Dummy_2096 = -Dummy_2080 + Dummy_2089;
       const double tmp_BLUE_DOWN_12 = Dummy_2092*Dummy_2096;
       const double Dummy_2097 = -Dummy_2081 + Dummy_2084;
       const double Dummy_2098 = -Dummy_2081 + Dummy_2087;
       const double tmp_BLUE_DOWN_11 = Dummy_2096*Dummy_2098;
       const double Dummy_2099 = -Dummy_2081 + Dummy_2090;
       const double tmp_BLUE_DOWN_10 = Dummy_2095*Dummy_2099;
       const double tmp_BLUE_DOWN_13 = Dummy_2092*Dummy_2099;
       const double tmp_BLUE_DOWN_15 = Dummy_2091*tmp_BLUE_DOWN_10 - Dummy_2091*tmp_BLUE_DOWN_11 + Dummy_2093*Dummy_2094*Dummy_2098 - Dummy_2094*tmp_BLUE_DOWN_13 + Dummy_2097*tmp_BLUE_DOWN_12 - Dummy_2097*tmp_BLUE_DOWN_14;
       const double tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
       const double Dummy_2100 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
       const double Dummy_2101 = tmp_BLUE_DOWN_16*(Dummy_2093*Dummy_2098 - tmp_BLUE_DOWN_13);
       const double Dummy_2102 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
       const double Dummy_2103 = tmp_BLUE_DOWN_16*(-Dummy_2094*Dummy_2099 + Dummy_2096*Dummy_2097);
       const double Dummy_2104 = tmp_BLUE_DOWN_16*(Dummy_2091*Dummy_2099 - Dummy_2093*Dummy_2097);
       const double Dummy_2105 = tmp_BLUE_DOWN_16*(-Dummy_2091*Dummy_2096 + Dummy_2093*Dummy_2094);
       const double Dummy_2106 = tmp_BLUE_DOWN_16*(Dummy_2094*Dummy_2098 - Dummy_2095*Dummy_2097);
       const double Dummy_2107 = tmp_BLUE_DOWN_16*(-Dummy_2091*Dummy_2098 + Dummy_2092*Dummy_2097);
       const double Dummy_2108 = tmp_BLUE_DOWN_16*(Dummy_2091*Dummy_2095 - Dummy_2092*Dummy_2094);
       const double Dummy_2109 = fabs(tmp_BLUE_DOWN_15);
       const double Dummy_2110 = -Dummy_2100 - Dummy_2103 - Dummy_2106;
       const double Dummy_2111 = -Dummy_2101 - Dummy_2104 - Dummy_2107;
       const double Dummy_2112 = -Dummy_2102 - Dummy_2105 - Dummy_2108;
       const double Dummy_2113 = Dummy_2109*0.16666666666666666;
       const double Dummy_2114 = Dummy_2113*(Dummy_2100*Dummy_2110 + Dummy_2101*Dummy_2111 + Dummy_2102*Dummy_2112);
       const double Dummy_2115 = Dummy_2113*(Dummy_2103*Dummy_2110 + Dummy_2104*Dummy_2111 + Dummy_2105*Dummy_2112);
       const double Dummy_2116 = Dummy_2113*(Dummy_2106*Dummy_2110 + Dummy_2107*Dummy_2111 + Dummy_2108*Dummy_2112);
       const double Dummy_2117 = Dummy_2113*(Dummy_2100*Dummy_2103 + Dummy_2101*Dummy_2104 + Dummy_2102*Dummy_2105);
       const double Dummy_2118 = Dummy_2113*(Dummy_2100*Dummy_2106 + Dummy_2101*Dummy_2107 + Dummy_2102*Dummy_2108);
       const double Dummy_2119 = Dummy_2113*(Dummy_2103*Dummy_2106 + Dummy_2104*Dummy_2107 + Dummy_2105*Dummy_2108);
       const double Dummy_2120 = Dummy_2113*((Dummy_2110*Dummy_2110) + (Dummy_2111*Dummy_2111) + (Dummy_2112*Dummy_2112));
       const double Dummy_2121 = Dummy_2114;
       const double Dummy_2122 = Dummy_2115;
       const double Dummy_2123 = Dummy_2116;
       const double Dummy_2124 = Dummy_2114;
       const double Dummy_2125 = Dummy_2113*((Dummy_2100*Dummy_2100) + (Dummy_2101*Dummy_2101) + (Dummy_2102*Dummy_2102));
       const double Dummy_2126 = Dummy_2117;
       const double Dummy_2127 = Dummy_2118;
       const double Dummy_2128 = Dummy_2115;
       const double Dummy_2129 = Dummy_2117;
       const double Dummy_2130 = Dummy_2113*((Dummy_2103*Dummy_2103) + (Dummy_2104*Dummy_2104) + (Dummy_2105*Dummy_2105));
       const double Dummy_2131 = Dummy_2119;
       const double Dummy_2132 = Dummy_2116;
       const double Dummy_2133 = Dummy_2118;
       const double Dummy_2134 = Dummy_2119;
       const double Dummy_2135 = Dummy_2113*((Dummy_2106*Dummy_2106) + (Dummy_2107*Dummy_2107) + (Dummy_2108*Dummy_2108));
       const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_2136 = tmp_GREEN_UP_1;
       const double Dummy_2137 = tmp_GREEN_UP_2;
       const double Dummy_2138 = tmp_GREEN_UP_3;
       const double Dummy_2139 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double Dummy_2140 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double Dummy_2141 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_2142 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const double Dummy_2143 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const double Dummy_2144 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const double Dummy_2145 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const double Dummy_2146 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const double Dummy_2147 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const double Dummy_2148 = -Dummy_2136 + Dummy_2139;
       const double Dummy_2149 = -Dummy_2136 + Dummy_2142;
       const double Dummy_2150 = -Dummy_2136 + Dummy_2145;
       const double Dummy_2151 = -Dummy_2137 + Dummy_2140;
       const double Dummy_2152 = -Dummy_2137 + Dummy_2143;
       const double tmp_GREEN_UP_11 = Dummy_2150*Dummy_2152;
       const double Dummy_2153 = -Dummy_2137 + Dummy_2146;
       const double tmp_GREEN_UP_9 = Dummy_2149*Dummy_2153;
       const double Dummy_2154 = -Dummy_2138 + Dummy_2141;
       const double Dummy_2155 = -Dummy_2138 + Dummy_2144;
       const double tmp_GREEN_UP_8 = Dummy_2153*Dummy_2155;
       const double Dummy_2156 = -Dummy_2138 + Dummy_2147;
       const double tmp_GREEN_UP_7 = Dummy_2152*Dummy_2156;
       const double tmp_GREEN_UP_10 = Dummy_2149*Dummy_2156;
       const double tmp_GREEN_UP_12 = Dummy_2148*tmp_GREEN_UP_7 - Dummy_2148*tmp_GREEN_UP_8 + Dummy_2150*Dummy_2151*Dummy_2155 - Dummy_2151*tmp_GREEN_UP_10 - Dummy_2154*tmp_GREEN_UP_11 + Dummy_2154*tmp_GREEN_UP_9;
       const double tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
       const double Dummy_2157 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
       const double Dummy_2158 = tmp_GREEN_UP_13*(Dummy_2150*Dummy_2155 - tmp_GREEN_UP_10);
       const double Dummy_2159 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
       const double Dummy_2160 = tmp_GREEN_UP_13*(-Dummy_2151*Dummy_2156 + Dummy_2153*Dummy_2154);
       const double Dummy_2161 = tmp_GREEN_UP_13*(Dummy_2148*Dummy_2156 - Dummy_2150*Dummy_2154);
       const double Dummy_2162 = tmp_GREEN_UP_13*(-Dummy_2148*Dummy_2153 + Dummy_2150*Dummy_2151);
       const double Dummy_2163 = tmp_GREEN_UP_13*(Dummy_2151*Dummy_2155 - Dummy_2152*Dummy_2154);
       const double Dummy_2164 = tmp_GREEN_UP_13*(-Dummy_2148*Dummy_2155 + Dummy_2149*Dummy_2154);
       const double Dummy_2165 = tmp_GREEN_UP_13*(Dummy_2148*Dummy_2152 - Dummy_2149*Dummy_2151);
       const double Dummy_2166 = fabs(tmp_GREEN_UP_12);
       const double Dummy_2167 = -Dummy_2157 - Dummy_2160 - Dummy_2163;
       const double Dummy_2168 = -Dummy_2158 - Dummy_2161 - Dummy_2164;
       const double Dummy_2169 = -Dummy_2159 - Dummy_2162 - Dummy_2165;
       const double Dummy_2170 = Dummy_2166*0.16666666666666666;
       const double Dummy_2171 = Dummy_2170*(Dummy_2157*Dummy_2167 + Dummy_2158*Dummy_2168 + Dummy_2159*Dummy_2169);
       const double Dummy_2172 = Dummy_2170*(Dummy_2160*Dummy_2167 + Dummy_2161*Dummy_2168 + Dummy_2162*Dummy_2169);
       const double Dummy_2173 = Dummy_2170*(Dummy_2163*Dummy_2167 + Dummy_2164*Dummy_2168 + Dummy_2165*Dummy_2169);
       const double Dummy_2174 = Dummy_2170*(Dummy_2157*Dummy_2160 + Dummy_2158*Dummy_2161 + Dummy_2159*Dummy_2162);
       const double Dummy_2175 = Dummy_2170*(Dummy_2157*Dummy_2163 + Dummy_2158*Dummy_2164 + Dummy_2159*Dummy_2165);
       const double Dummy_2176 = Dummy_2170*(Dummy_2160*Dummy_2163 + Dummy_2161*Dummy_2164 + Dummy_2162*Dummy_2165);
       const double Dummy_2177 = Dummy_2170*((Dummy_2167*Dummy_2167) + (Dummy_2168*Dummy_2168) + (Dummy_2169*Dummy_2169));
       const double Dummy_2178 = Dummy_2171;
       const double Dummy_2179 = Dummy_2172;
       const double Dummy_2180 = Dummy_2173;
       const double Dummy_2181 = Dummy_2171;
       const double Dummy_2182 = Dummy_2170*((Dummy_2157*Dummy_2157) + (Dummy_2158*Dummy_2158) + (Dummy_2159*Dummy_2159));
       const double Dummy_2183 = Dummy_2174;
       const double Dummy_2184 = Dummy_2175;
       const double Dummy_2185 = Dummy_2172;
       const double Dummy_2186 = Dummy_2174;
       const double Dummy_2187 = Dummy_2170*((Dummy_2160*Dummy_2160) + (Dummy_2161*Dummy_2161) + (Dummy_2162*Dummy_2162));
       const double Dummy_2188 = Dummy_2176;
       const double Dummy_2189 = Dummy_2173;
       const double Dummy_2190 = Dummy_2175;
       const double Dummy_2191 = Dummy_2176;
       const double Dummy_2192 = Dummy_2170*((Dummy_2163*Dummy_2163) + (Dummy_2164*Dummy_2164) + (Dummy_2165*Dummy_2165));
       const double tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_2193 = tmp_GREEN_DOWN_1;
       const double Dummy_2194 = tmp_GREEN_DOWN_2;
       const double Dummy_2195 = tmp_GREEN_DOWN_3;
       const double Dummy_2196 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const double Dummy_2197 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const double Dummy_2198 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const double Dummy_2199 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const double Dummy_2200 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const double Dummy_2201 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const double Dummy_2202 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const double Dummy_2203 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const double Dummy_2204 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const double Dummy_2205 = -Dummy_2193 + Dummy_2196;
       const double Dummy_2206 = -Dummy_2193 + Dummy_2199;
       const double Dummy_2207 = -Dummy_2193 + Dummy_2202;
       const double Dummy_2208 = -Dummy_2194 + Dummy_2197;
       const double Dummy_2209 = -Dummy_2194 + Dummy_2200;
       const double tmp_GREEN_DOWN_14 = Dummy_2207*Dummy_2209;
       const double Dummy_2210 = -Dummy_2194 + Dummy_2203;
       const double tmp_GREEN_DOWN_12 = Dummy_2206*Dummy_2210;
       const double Dummy_2211 = -Dummy_2195 + Dummy_2198;
       const double Dummy_2212 = -Dummy_2195 + Dummy_2201;
       const double tmp_GREEN_DOWN_11 = Dummy_2210*Dummy_2212;
       const double Dummy_2213 = -Dummy_2195 + Dummy_2204;
       const double tmp_GREEN_DOWN_10 = Dummy_2209*Dummy_2213;
       const double tmp_GREEN_DOWN_13 = Dummy_2206*Dummy_2213;
       const double tmp_GREEN_DOWN_15 = Dummy_2205*tmp_GREEN_DOWN_10 - Dummy_2205*tmp_GREEN_DOWN_11 + Dummy_2207*Dummy_2208*Dummy_2212 - Dummy_2208*tmp_GREEN_DOWN_13 + Dummy_2211*tmp_GREEN_DOWN_12 - Dummy_2211*tmp_GREEN_DOWN_14;
       const double tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
       const double Dummy_2214 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
       const double Dummy_2215 = tmp_GREEN_DOWN_16*(Dummy_2207*Dummy_2212 - tmp_GREEN_DOWN_13);
       const double Dummy_2216 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
       const double Dummy_2217 = tmp_GREEN_DOWN_16*(-Dummy_2208*Dummy_2213 + Dummy_2210*Dummy_2211);
       const double Dummy_2218 = tmp_GREEN_DOWN_16*(Dummy_2205*Dummy_2213 - Dummy_2207*Dummy_2211);
       const double Dummy_2219 = tmp_GREEN_DOWN_16*(-Dummy_2205*Dummy_2210 + Dummy_2207*Dummy_2208);
       const double Dummy_2220 = tmp_GREEN_DOWN_16*(Dummy_2208*Dummy_2212 - Dummy_2209*Dummy_2211);
       const double Dummy_2221 = tmp_GREEN_DOWN_16*(-Dummy_2205*Dummy_2212 + Dummy_2206*Dummy_2211);
       const double Dummy_2222 = tmp_GREEN_DOWN_16*(Dummy_2205*Dummy_2209 - Dummy_2206*Dummy_2208);
       const double Dummy_2223 = fabs(tmp_GREEN_DOWN_15);
       const double Dummy_2224 = -Dummy_2214 - Dummy_2217 - Dummy_2220;
       const double Dummy_2225 = -Dummy_2215 - Dummy_2218 - Dummy_2221;
       const double Dummy_2226 = -Dummy_2216 - Dummy_2219 - Dummy_2222;
       const double Dummy_2227 = Dummy_2223*0.16666666666666666;
       const double Dummy_2228 = Dummy_2227*(Dummy_2214*Dummy_2224 + Dummy_2215*Dummy_2225 + Dummy_2216*Dummy_2226);
       const double Dummy_2229 = Dummy_2227*(Dummy_2217*Dummy_2224 + Dummy_2218*Dummy_2225 + Dummy_2219*Dummy_2226);
       const double Dummy_2230 = Dummy_2227*(Dummy_2220*Dummy_2224 + Dummy_2221*Dummy_2225 + Dummy_2222*Dummy_2226);
       const double Dummy_2231 = Dummy_2227*(Dummy_2214*Dummy_2217 + Dummy_2215*Dummy_2218 + Dummy_2216*Dummy_2219);
       const double Dummy_2232 = Dummy_2227*(Dummy_2214*Dummy_2220 + Dummy_2215*Dummy_2221 + Dummy_2216*Dummy_2222);
       const double Dummy_2233 = Dummy_2227*(Dummy_2217*Dummy_2220 + Dummy_2218*Dummy_2221 + Dummy_2219*Dummy_2222);
       const double Dummy_2234 = Dummy_2227*((Dummy_2224*Dummy_2224) + (Dummy_2225*Dummy_2225) + (Dummy_2226*Dummy_2226));
       const double Dummy_2235 = Dummy_2228;
       const double Dummy_2236 = Dummy_2229;
       const double Dummy_2237 = Dummy_2230;
       const double Dummy_2238 = Dummy_2228;
       const double Dummy_2239 = Dummy_2227*((Dummy_2214*Dummy_2214) + (Dummy_2215*Dummy_2215) + (Dummy_2216*Dummy_2216));
       const double Dummy_2240 = Dummy_2231;
       const double Dummy_2241 = Dummy_2232;
       const double Dummy_2242 = Dummy_2229;
       const double Dummy_2243 = Dummy_2231;
       const double Dummy_2244 = Dummy_2227*((Dummy_2217*Dummy_2217) + (Dummy_2218*Dummy_2218) + (Dummy_2219*Dummy_2219));
       const double Dummy_2245 = Dummy_2233;
       const double Dummy_2246 = Dummy_2230;
       const double Dummy_2247 = Dummy_2232;
       const double Dummy_2248 = Dummy_2233;
       const double Dummy_2249 = Dummy_2227*((Dummy_2220*Dummy_2220) + (Dummy_2221*Dummy_2221) + (Dummy_2222*Dummy_2222));
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_1_0));
                   _data_mat[5] = ((real_t)(elMat_1_1));
                   _data_mat[6] = ((real_t)(elMat_1_2));
                   _data_mat[7] = ((real_t)(elMat_1_3));
                   _data_mat[8] = ((real_t)(elMat_2_0));
                   _data_mat[9] = ((real_t)(elMat_2_1));
                   _data_mat[10] = ((real_t)(elMat_2_2));
                   _data_mat[11] = ((real_t)(elMat_2_3));
                   _data_mat[12] = ((real_t)(elMat_3_0));
                   _data_mat[13] = ((real_t)(elMat_3_1));
                   _data_mat[14] = ((real_t)(elMat_3_2));
                   _data_mat[15] = ((real_t)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2006));
                   _data_mat[1] = ((real_t)(Dummy_2007));
                   _data_mat[2] = ((real_t)(Dummy_2008));
                   _data_mat[3] = ((real_t)(Dummy_2009));
                   _data_mat[4] = ((real_t)(Dummy_2010));
                   _data_mat[5] = ((real_t)(Dummy_2011));
                   _data_mat[6] = ((real_t)(Dummy_2012));
                   _data_mat[7] = ((real_t)(Dummy_2013));
                   _data_mat[8] = ((real_t)(Dummy_2014));
                   _data_mat[9] = ((real_t)(Dummy_2015));
                   _data_mat[10] = ((real_t)(Dummy_2016));
                   _data_mat[11] = ((real_t)(Dummy_2017));
                   _data_mat[12] = ((real_t)(Dummy_2018));
                   _data_mat[13] = ((real_t)(Dummy_2019));
                   _data_mat[14] = ((real_t)(Dummy_2020));
                   _data_mat[15] = ((real_t)(Dummy_2021));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2063));
                   _data_mat[1] = ((real_t)(Dummy_2064));
                   _data_mat[2] = ((real_t)(Dummy_2065));
                   _data_mat[3] = ((real_t)(Dummy_2066));
                   _data_mat[4] = ((real_t)(Dummy_2067));
                   _data_mat[5] = ((real_t)(Dummy_2068));
                   _data_mat[6] = ((real_t)(Dummy_2069));
                   _data_mat[7] = ((real_t)(Dummy_2070));
                   _data_mat[8] = ((real_t)(Dummy_2071));
                   _data_mat[9] = ((real_t)(Dummy_2072));
                   _data_mat[10] = ((real_t)(Dummy_2073));
                   _data_mat[11] = ((real_t)(Dummy_2074));
                   _data_mat[12] = ((real_t)(Dummy_2075));
                   _data_mat[13] = ((real_t)(Dummy_2076));
                   _data_mat[14] = ((real_t)(Dummy_2077));
                   _data_mat[15] = ((real_t)(Dummy_2078));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2120));
                   _data_mat[1] = ((real_t)(Dummy_2121));
                   _data_mat[2] = ((real_t)(Dummy_2122));
                   _data_mat[3] = ((real_t)(Dummy_2123));
                   _data_mat[4] = ((real_t)(Dummy_2124));
                   _data_mat[5] = ((real_t)(Dummy_2125));
                   _data_mat[6] = ((real_t)(Dummy_2126));
                   _data_mat[7] = ((real_t)(Dummy_2127));
                   _data_mat[8] = ((real_t)(Dummy_2128));
                   _data_mat[9] = ((real_t)(Dummy_2129));
                   _data_mat[10] = ((real_t)(Dummy_2130));
                   _data_mat[11] = ((real_t)(Dummy_2131));
                   _data_mat[12] = ((real_t)(Dummy_2132));
                   _data_mat[13] = ((real_t)(Dummy_2133));
                   _data_mat[14] = ((real_t)(Dummy_2134));
                   _data_mat[15] = ((real_t)(Dummy_2135));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2177));
                   _data_mat[1] = ((real_t)(Dummy_2178));
                   _data_mat[2] = ((real_t)(Dummy_2179));
                   _data_mat[3] = ((real_t)(Dummy_2180));
                   _data_mat[4] = ((real_t)(Dummy_2181));
                   _data_mat[5] = ((real_t)(Dummy_2182));
                   _data_mat[6] = ((real_t)(Dummy_2183));
                   _data_mat[7] = ((real_t)(Dummy_2184));
                   _data_mat[8] = ((real_t)(Dummy_2185));
                   _data_mat[9] = ((real_t)(Dummy_2186));
                   _data_mat[10] = ((real_t)(Dummy_2187));
                   _data_mat[11] = ((real_t)(Dummy_2188));
                   _data_mat[12] = ((real_t)(Dummy_2189));
                   _data_mat[13] = ((real_t)(Dummy_2190));
                   _data_mat[14] = ((real_t)(Dummy_2191));
                   _data_mat[15] = ((real_t)(Dummy_2192));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2234));
                   _data_mat[1] = ((real_t)(Dummy_2235));
                   _data_mat[2] = ((real_t)(Dummy_2236));
                   _data_mat[3] = ((real_t)(Dummy_2237));
                   _data_mat[4] = ((real_t)(Dummy_2238));
                   _data_mat[5] = ((real_t)(Dummy_2239));
                   _data_mat[6] = ((real_t)(Dummy_2240));
                   _data_mat[7] = ((real_t)(Dummy_2241));
                   _data_mat[8] = ((real_t)(Dummy_2242));
                   _data_mat[9] = ((real_t)(Dummy_2243));
                   _data_mat[10] = ((real_t)(Dummy_2244));
                   _data_mat[11] = ((real_t)(Dummy_2245));
                   _data_mat[12] = ((real_t)(Dummy_2246));
                   _data_mat[13] = ((real_t)(Dummy_2247));
                   _data_mat[14] = ((real_t)(Dummy_2248));
                   _data_mat[15] = ((real_t)(Dummy_2249));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const double tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
             const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
             const double p_affine_0_2 = macro_vertex_coord_id_0comp2;
             const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const double p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const double p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
             const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
             const double jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
             const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
             const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
             const double tmp_WHITE_UP_5 = jac_affine_0_2*jac_affine_1_1;
             const double jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
             const double tmp_WHITE_UP_3 = jac_affine_0_1*jac_affine_1_2;
             const double jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
             const double jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
             const double tmp_WHITE_UP_2 = jac_affine_1_2*jac_affine_2_1;
             const double jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
             const double tmp_WHITE_UP_1 = jac_affine_1_1*jac_affine_2_2;
             const double tmp_WHITE_UP_4 = jac_affine_0_1*jac_affine_2_2;
             const double tmp_WHITE_UP_6 = jac_affine_0_0*tmp_WHITE_UP_1 - jac_affine_0_0*tmp_WHITE_UP_2 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_1_0*tmp_WHITE_UP_4 + jac_affine_2_0*tmp_WHITE_UP_3 - jac_affine_2_0*tmp_WHITE_UP_5;
             const double tmp_WHITE_UP_7 = 1.0 / (tmp_WHITE_UP_6);
             const double jac_affine_inv_0_0 = tmp_WHITE_UP_7*(tmp_WHITE_UP_1 - tmp_WHITE_UP_2);
             const double jac_affine_inv_0_1 = tmp_WHITE_UP_7*(jac_affine_0_2*jac_affine_2_1 - tmp_WHITE_UP_4);
             const double jac_affine_inv_0_2 = tmp_WHITE_UP_7*(tmp_WHITE_UP_3 - tmp_WHITE_UP_5);
             const double jac_affine_inv_1_0 = tmp_WHITE_UP_7*(-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0);
             const double jac_affine_inv_1_1 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0);
             const double jac_affine_inv_1_2 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0);
             const double jac_affine_inv_2_0 = tmp_WHITE_UP_7*(jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0);
             const double jac_affine_inv_2_1 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0);
             const double jac_affine_inv_2_2 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
             const double abs_det_jac_affine = fabs(tmp_WHITE_UP_6);
             const double tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
             const double tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
             const double tmp_2 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
             const double tmp_3 = abs_det_jac_affine*0.16666666666666666;
             const double tmp_4 = tmp_3*(jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1 + jac_affine_inv_0_2*tmp_2);
             const double tmp_5 = tmp_3*(jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1 + jac_affine_inv_1_2*tmp_2);
             const double tmp_6 = tmp_3*(jac_affine_inv_2_0*tmp_0 + jac_affine_inv_2_1*tmp_1 + jac_affine_inv_2_2*tmp_2);
             const double tmp_7 = tmp_3*(jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1 + jac_affine_inv_0_2*jac_affine_inv_1_2);
             const double tmp_8 = tmp_3*(jac_affine_inv_0_0*jac_affine_inv_2_0 + jac_affine_inv_0_1*jac_affine_inv_2_1 + jac_affine_inv_0_2*jac_affine_inv_2_2);
             const double tmp_9 = tmp_3*(jac_affine_inv_1_0*jac_affine_inv_2_0 + jac_affine_inv_1_1*jac_affine_inv_2_1 + jac_affine_inv_1_2*jac_affine_inv_2_2);
             const double elMat_0_0 = tmp_3*((tmp_0*tmp_0) + (tmp_1*tmp_1) + (tmp_2*tmp_2));
             const double elMat_0_1 = tmp_4;
             const double elMat_0_2 = tmp_5;
             const double elMat_0_3 = tmp_6;
             const double elMat_1_0 = tmp_4;
             const double elMat_1_1 = tmp_3*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
             const double elMat_1_2 = tmp_7;
             const double elMat_1_3 = tmp_8;
             const double elMat_2_0 = tmp_5;
             const double elMat_2_1 = tmp_7;
             const double elMat_2_2 = tmp_3*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
             const double elMat_2_3 = tmp_9;
             const double elMat_3_0 = tmp_6;
             const double elMat_3_1 = tmp_8;
             const double elMat_3_2 = tmp_9;
             const double elMat_3_3 = tmp_3*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_1_0));
                   _data_mat[5] = ((real_t)(elMat_1_1));
                   _data_mat[6] = ((real_t)(elMat_1_2));
                   _data_mat[7] = ((real_t)(elMat_1_3));
                   _data_mat[8] = ((real_t)(elMat_2_0));
                   _data_mat[9] = ((real_t)(elMat_2_1));
                   _data_mat[10] = ((real_t)(elMat_2_2));
                   _data_mat[11] = ((real_t)(elMat_2_3));
                   _data_mat[12] = ((real_t)(elMat_3_0));
                   _data_mat[13] = ((real_t)(elMat_3_1));
                   _data_mat[14] = ((real_t)(elMat_3_2));
                   _data_mat[15] = ((real_t)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double Dummy_2250 = tmp_BLUE_UP_1;
             const double Dummy_2251 = tmp_BLUE_UP_2;
             const double Dummy_2252 = tmp_BLUE_UP_3;
             const double Dummy_2253 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
             const double Dummy_2254 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
             const double Dummy_2255 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
             const double Dummy_2256 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
             const double Dummy_2257 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
             const double Dummy_2258 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
             const double Dummy_2259 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
             const double Dummy_2260 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
             const double Dummy_2261 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
             const double Dummy_2262 = -Dummy_2250 + Dummy_2253;
             const double Dummy_2263 = -Dummy_2250 + Dummy_2256;
             const double Dummy_2264 = -Dummy_2250 + Dummy_2259;
             const double Dummy_2265 = -Dummy_2251 + Dummy_2254;
             const double Dummy_2266 = -Dummy_2251 + Dummy_2257;
             const double tmp_BLUE_UP_11 = Dummy_2264*Dummy_2266;
             const double Dummy_2267 = -Dummy_2251 + Dummy_2260;
             const double tmp_BLUE_UP_9 = Dummy_2263*Dummy_2267;
             const double Dummy_2268 = -Dummy_2252 + Dummy_2255;
             const double Dummy_2269 = -Dummy_2252 + Dummy_2258;
             const double tmp_BLUE_UP_8 = Dummy_2267*Dummy_2269;
             const double Dummy_2270 = -Dummy_2252 + Dummy_2261;
             const double tmp_BLUE_UP_7 = Dummy_2266*Dummy_2270;
             const double tmp_BLUE_UP_10 = Dummy_2263*Dummy_2270;
             const double tmp_BLUE_UP_12 = Dummy_2262*tmp_BLUE_UP_7 - Dummy_2262*tmp_BLUE_UP_8 + Dummy_2264*Dummy_2265*Dummy_2269 - Dummy_2265*tmp_BLUE_UP_10 - Dummy_2268*tmp_BLUE_UP_11 + Dummy_2268*tmp_BLUE_UP_9;
             const double tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
             const double Dummy_2271 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
             const double Dummy_2272 = tmp_BLUE_UP_13*(Dummy_2264*Dummy_2269 - tmp_BLUE_UP_10);
             const double Dummy_2273 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
             const double Dummy_2274 = tmp_BLUE_UP_13*(-Dummy_2265*Dummy_2270 + Dummy_2267*Dummy_2268);
             const double Dummy_2275 = tmp_BLUE_UP_13*(Dummy_2262*Dummy_2270 - Dummy_2264*Dummy_2268);
             const double Dummy_2276 = tmp_BLUE_UP_13*(-Dummy_2262*Dummy_2267 + Dummy_2264*Dummy_2265);
             const double Dummy_2277 = tmp_BLUE_UP_13*(Dummy_2265*Dummy_2269 - Dummy_2266*Dummy_2268);
             const double Dummy_2278 = tmp_BLUE_UP_13*(-Dummy_2262*Dummy_2269 + Dummy_2263*Dummy_2268);
             const double Dummy_2279 = tmp_BLUE_UP_13*(Dummy_2262*Dummy_2266 - Dummy_2263*Dummy_2265);
             const double Dummy_2280 = fabs(tmp_BLUE_UP_12);
             const double Dummy_2281 = -Dummy_2271 - Dummy_2274 - Dummy_2277;
             const double Dummy_2282 = -Dummy_2272 - Dummy_2275 - Dummy_2278;
             const double Dummy_2283 = -Dummy_2273 - Dummy_2276 - Dummy_2279;
             const double Dummy_2284 = Dummy_2280*0.16666666666666666;
             const double Dummy_2285 = Dummy_2284*(Dummy_2271*Dummy_2281 + Dummy_2272*Dummy_2282 + Dummy_2273*Dummy_2283);
             const double Dummy_2286 = Dummy_2284*(Dummy_2274*Dummy_2281 + Dummy_2275*Dummy_2282 + Dummy_2276*Dummy_2283);
             const double Dummy_2287 = Dummy_2284*(Dummy_2277*Dummy_2281 + Dummy_2278*Dummy_2282 + Dummy_2279*Dummy_2283);
             const double Dummy_2288 = Dummy_2284*(Dummy_2271*Dummy_2274 + Dummy_2272*Dummy_2275 + Dummy_2273*Dummy_2276);
             const double Dummy_2289 = Dummy_2284*(Dummy_2271*Dummy_2277 + Dummy_2272*Dummy_2278 + Dummy_2273*Dummy_2279);
             const double Dummy_2290 = Dummy_2284*(Dummy_2274*Dummy_2277 + Dummy_2275*Dummy_2278 + Dummy_2276*Dummy_2279);
             const double Dummy_2291 = Dummy_2284*((Dummy_2281*Dummy_2281) + (Dummy_2282*Dummy_2282) + (Dummy_2283*Dummy_2283));
             const double Dummy_2292 = Dummy_2285;
             const double Dummy_2293 = Dummy_2286;
             const double Dummy_2294 = Dummy_2287;
             const double Dummy_2295 = Dummy_2285;
             const double Dummy_2296 = Dummy_2284*((Dummy_2271*Dummy_2271) + (Dummy_2272*Dummy_2272) + (Dummy_2273*Dummy_2273));
             const double Dummy_2297 = Dummy_2288;
             const double Dummy_2298 = Dummy_2289;
             const double Dummy_2299 = Dummy_2286;
             const double Dummy_2300 = Dummy_2288;
             const double Dummy_2301 = Dummy_2284*((Dummy_2274*Dummy_2274) + (Dummy_2275*Dummy_2275) + (Dummy_2276*Dummy_2276));
             const double Dummy_2302 = Dummy_2290;
             const double Dummy_2303 = Dummy_2287;
             const double Dummy_2304 = Dummy_2289;
             const double Dummy_2305 = Dummy_2290;
             const double Dummy_2306 = Dummy_2284*((Dummy_2277*Dummy_2277) + (Dummy_2278*Dummy_2278) + (Dummy_2279*Dummy_2279));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2291));
                   _data_mat[1] = ((real_t)(Dummy_2292));
                   _data_mat[2] = ((real_t)(Dummy_2293));
                   _data_mat[3] = ((real_t)(Dummy_2294));
                   _data_mat[4] = ((real_t)(Dummy_2295));
                   _data_mat[5] = ((real_t)(Dummy_2296));
                   _data_mat[6] = ((real_t)(Dummy_2297));
                   _data_mat[7] = ((real_t)(Dummy_2298));
                   _data_mat[8] = ((real_t)(Dummy_2299));
                   _data_mat[9] = ((real_t)(Dummy_2300));
                   _data_mat[10] = ((real_t)(Dummy_2301));
                   _data_mat[11] = ((real_t)(Dummy_2302));
                   _data_mat[12] = ((real_t)(Dummy_2303));
                   _data_mat[13] = ((real_t)(Dummy_2304));
                   _data_mat[14] = ((real_t)(Dummy_2305));
                   _data_mat[15] = ((real_t)(Dummy_2306));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const double tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const double tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
             const double tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const double tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
             const double tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const double tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
             const double Dummy_2307 = tmp_BLUE_DOWN_1;
             const double Dummy_2308 = tmp_BLUE_DOWN_2;
             const double Dummy_2309 = tmp_BLUE_DOWN_3;
             const double Dummy_2310 = tmp_BLUE_DOWN_5;
             const double Dummy_2311 = tmp_BLUE_DOWN_7;
             const double Dummy_2312 = tmp_BLUE_DOWN_9;
             const double Dummy_2313 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
             const double Dummy_2314 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
             const double Dummy_2315 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
             const double Dummy_2316 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
             const double Dummy_2317 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
             const double Dummy_2318 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
             const double Dummy_2319 = -Dummy_2307 + Dummy_2310;
             const double Dummy_2320 = -Dummy_2307 + Dummy_2313;
             const double Dummy_2321 = -Dummy_2307 + Dummy_2316;
             const double Dummy_2322 = -Dummy_2308 + Dummy_2311;
             const double Dummy_2323 = -Dummy_2308 + Dummy_2314;
             const double tmp_BLUE_DOWN_14 = Dummy_2321*Dummy_2323;
             const double Dummy_2324 = -Dummy_2308 + Dummy_2317;
             const double tmp_BLUE_DOWN_12 = Dummy_2320*Dummy_2324;
             const double Dummy_2325 = -Dummy_2309 + Dummy_2312;
             const double Dummy_2326 = -Dummy_2309 + Dummy_2315;
             const double tmp_BLUE_DOWN_11 = Dummy_2324*Dummy_2326;
             const double Dummy_2327 = -Dummy_2309 + Dummy_2318;
             const double tmp_BLUE_DOWN_10 = Dummy_2323*Dummy_2327;
             const double tmp_BLUE_DOWN_13 = Dummy_2320*Dummy_2327;
             const double tmp_BLUE_DOWN_15 = Dummy_2319*tmp_BLUE_DOWN_10 - Dummy_2319*tmp_BLUE_DOWN_11 + Dummy_2321*Dummy_2322*Dummy_2326 - Dummy_2322*tmp_BLUE_DOWN_13 + Dummy_2325*tmp_BLUE_DOWN_12 - Dummy_2325*tmp_BLUE_DOWN_14;
             const double tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
             const double Dummy_2328 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
             const double Dummy_2329 = tmp_BLUE_DOWN_16*(Dummy_2321*Dummy_2326 - tmp_BLUE_DOWN_13);
             const double Dummy_2330 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
             const double Dummy_2331 = tmp_BLUE_DOWN_16*(-Dummy_2322*Dummy_2327 + Dummy_2324*Dummy_2325);
             const double Dummy_2332 = tmp_BLUE_DOWN_16*(Dummy_2319*Dummy_2327 - Dummy_2321*Dummy_2325);
             const double Dummy_2333 = tmp_BLUE_DOWN_16*(-Dummy_2319*Dummy_2324 + Dummy_2321*Dummy_2322);
             const double Dummy_2334 = tmp_BLUE_DOWN_16*(Dummy_2322*Dummy_2326 - Dummy_2323*Dummy_2325);
             const double Dummy_2335 = tmp_BLUE_DOWN_16*(-Dummy_2319*Dummy_2326 + Dummy_2320*Dummy_2325);
             const double Dummy_2336 = tmp_BLUE_DOWN_16*(Dummy_2319*Dummy_2323 - Dummy_2320*Dummy_2322);
             const double Dummy_2337 = fabs(tmp_BLUE_DOWN_15);
             const double Dummy_2338 = -Dummy_2328 - Dummy_2331 - Dummy_2334;
             const double Dummy_2339 = -Dummy_2329 - Dummy_2332 - Dummy_2335;
             const double Dummy_2340 = -Dummy_2330 - Dummy_2333 - Dummy_2336;
             const double Dummy_2341 = Dummy_2337*0.16666666666666666;
             const double Dummy_2342 = Dummy_2341*(Dummy_2328*Dummy_2338 + Dummy_2329*Dummy_2339 + Dummy_2330*Dummy_2340);
             const double Dummy_2343 = Dummy_2341*(Dummy_2331*Dummy_2338 + Dummy_2332*Dummy_2339 + Dummy_2333*Dummy_2340);
             const double Dummy_2344 = Dummy_2341*(Dummy_2334*Dummy_2338 + Dummy_2335*Dummy_2339 + Dummy_2336*Dummy_2340);
             const double Dummy_2345 = Dummy_2341*(Dummy_2328*Dummy_2331 + Dummy_2329*Dummy_2332 + Dummy_2330*Dummy_2333);
             const double Dummy_2346 = Dummy_2341*(Dummy_2328*Dummy_2334 + Dummy_2329*Dummy_2335 + Dummy_2330*Dummy_2336);
             const double Dummy_2347 = Dummy_2341*(Dummy_2331*Dummy_2334 + Dummy_2332*Dummy_2335 + Dummy_2333*Dummy_2336);
             const double Dummy_2348 = Dummy_2341*((Dummy_2338*Dummy_2338) + (Dummy_2339*Dummy_2339) + (Dummy_2340*Dummy_2340));
             const double Dummy_2349 = Dummy_2342;
             const double Dummy_2350 = Dummy_2343;
             const double Dummy_2351 = Dummy_2344;
             const double Dummy_2352 = Dummy_2342;
             const double Dummy_2353 = Dummy_2341*((Dummy_2328*Dummy_2328) + (Dummy_2329*Dummy_2329) + (Dummy_2330*Dummy_2330));
             const double Dummy_2354 = Dummy_2345;
             const double Dummy_2355 = Dummy_2346;
             const double Dummy_2356 = Dummy_2343;
             const double Dummy_2357 = Dummy_2345;
             const double Dummy_2358 = Dummy_2341*((Dummy_2331*Dummy_2331) + (Dummy_2332*Dummy_2332) + (Dummy_2333*Dummy_2333));
             const double Dummy_2359 = Dummy_2347;
             const double Dummy_2360 = Dummy_2344;
             const double Dummy_2361 = Dummy_2346;
             const double Dummy_2362 = Dummy_2347;
             const double Dummy_2363 = Dummy_2341*((Dummy_2334*Dummy_2334) + (Dummy_2335*Dummy_2335) + (Dummy_2336*Dummy_2336));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2348));
                   _data_mat[1] = ((real_t)(Dummy_2349));
                   _data_mat[2] = ((real_t)(Dummy_2350));
                   _data_mat[3] = ((real_t)(Dummy_2351));
                   _data_mat[4] = ((real_t)(Dummy_2352));
                   _data_mat[5] = ((real_t)(Dummy_2353));
                   _data_mat[6] = ((real_t)(Dummy_2354));
                   _data_mat[7] = ((real_t)(Dummy_2355));
                   _data_mat[8] = ((real_t)(Dummy_2356));
                   _data_mat[9] = ((real_t)(Dummy_2357));
                   _data_mat[10] = ((real_t)(Dummy_2358));
                   _data_mat[11] = ((real_t)(Dummy_2359));
                   _data_mat[12] = ((real_t)(Dummy_2360));
                   _data_mat[13] = ((real_t)(Dummy_2361));
                   _data_mat[14] = ((real_t)(Dummy_2362));
                   _data_mat[15] = ((real_t)(Dummy_2363));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const double Dummy_2364 = tmp_GREEN_UP_1;
             const double Dummy_2365 = tmp_GREEN_UP_2;
             const double Dummy_2366 = tmp_GREEN_UP_3;
             const double Dummy_2367 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double Dummy_2368 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double Dummy_2369 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double Dummy_2370 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
             const double Dummy_2371 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
             const double Dummy_2372 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
             const double Dummy_2373 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
             const double Dummy_2374 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
             const double Dummy_2375 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
             const double Dummy_2376 = -Dummy_2364 + Dummy_2367;
             const double Dummy_2377 = -Dummy_2364 + Dummy_2370;
             const double Dummy_2378 = -Dummy_2364 + Dummy_2373;
             const double Dummy_2379 = -Dummy_2365 + Dummy_2368;
             const double Dummy_2380 = -Dummy_2365 + Dummy_2371;
             const double tmp_GREEN_UP_11 = Dummy_2378*Dummy_2380;
             const double Dummy_2381 = -Dummy_2365 + Dummy_2374;
             const double tmp_GREEN_UP_9 = Dummy_2377*Dummy_2381;
             const double Dummy_2382 = -Dummy_2366 + Dummy_2369;
             const double Dummy_2383 = -Dummy_2366 + Dummy_2372;
             const double tmp_GREEN_UP_8 = Dummy_2381*Dummy_2383;
             const double Dummy_2384 = -Dummy_2366 + Dummy_2375;
             const double tmp_GREEN_UP_7 = Dummy_2380*Dummy_2384;
             const double tmp_GREEN_UP_10 = Dummy_2377*Dummy_2384;
             const double tmp_GREEN_UP_12 = Dummy_2376*tmp_GREEN_UP_7 - Dummy_2376*tmp_GREEN_UP_8 + Dummy_2378*Dummy_2379*Dummy_2383 - Dummy_2379*tmp_GREEN_UP_10 - Dummy_2382*tmp_GREEN_UP_11 + Dummy_2382*tmp_GREEN_UP_9;
             const double tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
             const double Dummy_2385 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
             const double Dummy_2386 = tmp_GREEN_UP_13*(Dummy_2378*Dummy_2383 - tmp_GREEN_UP_10);
             const double Dummy_2387 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
             const double Dummy_2388 = tmp_GREEN_UP_13*(-Dummy_2379*Dummy_2384 + Dummy_2381*Dummy_2382);
             const double Dummy_2389 = tmp_GREEN_UP_13*(Dummy_2376*Dummy_2384 - Dummy_2378*Dummy_2382);
             const double Dummy_2390 = tmp_GREEN_UP_13*(-Dummy_2376*Dummy_2381 + Dummy_2378*Dummy_2379);
             const double Dummy_2391 = tmp_GREEN_UP_13*(Dummy_2379*Dummy_2383 - Dummy_2380*Dummy_2382);
             const double Dummy_2392 = tmp_GREEN_UP_13*(-Dummy_2376*Dummy_2383 + Dummy_2377*Dummy_2382);
             const double Dummy_2393 = tmp_GREEN_UP_13*(Dummy_2376*Dummy_2380 - Dummy_2377*Dummy_2379);
             const double Dummy_2394 = fabs(tmp_GREEN_UP_12);
             const double Dummy_2395 = -Dummy_2385 - Dummy_2388 - Dummy_2391;
             const double Dummy_2396 = -Dummy_2386 - Dummy_2389 - Dummy_2392;
             const double Dummy_2397 = -Dummy_2387 - Dummy_2390 - Dummy_2393;
             const double Dummy_2398 = Dummy_2394*0.16666666666666666;
             const double Dummy_2399 = Dummy_2398*(Dummy_2385*Dummy_2395 + Dummy_2386*Dummy_2396 + Dummy_2387*Dummy_2397);
             const double Dummy_2400 = Dummy_2398*(Dummy_2388*Dummy_2395 + Dummy_2389*Dummy_2396 + Dummy_2390*Dummy_2397);
             const double Dummy_2401 = Dummy_2398*(Dummy_2391*Dummy_2395 + Dummy_2392*Dummy_2396 + Dummy_2393*Dummy_2397);
             const double Dummy_2402 = Dummy_2398*(Dummy_2385*Dummy_2388 + Dummy_2386*Dummy_2389 + Dummy_2387*Dummy_2390);
             const double Dummy_2403 = Dummy_2398*(Dummy_2385*Dummy_2391 + Dummy_2386*Dummy_2392 + Dummy_2387*Dummy_2393);
             const double Dummy_2404 = Dummy_2398*(Dummy_2388*Dummy_2391 + Dummy_2389*Dummy_2392 + Dummy_2390*Dummy_2393);
             const double Dummy_2405 = Dummy_2398*((Dummy_2395*Dummy_2395) + (Dummy_2396*Dummy_2396) + (Dummy_2397*Dummy_2397));
             const double Dummy_2406 = Dummy_2399;
             const double Dummy_2407 = Dummy_2400;
             const double Dummy_2408 = Dummy_2401;
             const double Dummy_2409 = Dummy_2399;
             const double Dummy_2410 = Dummy_2398*((Dummy_2385*Dummy_2385) + (Dummy_2386*Dummy_2386) + (Dummy_2387*Dummy_2387));
             const double Dummy_2411 = Dummy_2402;
             const double Dummy_2412 = Dummy_2403;
             const double Dummy_2413 = Dummy_2400;
             const double Dummy_2414 = Dummy_2402;
             const double Dummy_2415 = Dummy_2398*((Dummy_2388*Dummy_2388) + (Dummy_2389*Dummy_2389) + (Dummy_2390*Dummy_2390));
             const double Dummy_2416 = Dummy_2404;
             const double Dummy_2417 = Dummy_2401;
             const double Dummy_2418 = Dummy_2403;
             const double Dummy_2419 = Dummy_2404;
             const double Dummy_2420 = Dummy_2398*((Dummy_2391*Dummy_2391) + (Dummy_2392*Dummy_2392) + (Dummy_2393*Dummy_2393));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2405));
                   _data_mat[1] = ((real_t)(Dummy_2406));
                   _data_mat[2] = ((real_t)(Dummy_2407));
                   _data_mat[3] = ((real_t)(Dummy_2408));
                   _data_mat[4] = ((real_t)(Dummy_2409));
                   _data_mat[5] = ((real_t)(Dummy_2410));
                   _data_mat[6] = ((real_t)(Dummy_2411));
                   _data_mat[7] = ((real_t)(Dummy_2412));
                   _data_mat[8] = ((real_t)(Dummy_2413));
                   _data_mat[9] = ((real_t)(Dummy_2414));
                   _data_mat[10] = ((real_t)(Dummy_2415));
                   _data_mat[11] = ((real_t)(Dummy_2416));
                   _data_mat[12] = ((real_t)(Dummy_2417));
                   _data_mat[13] = ((real_t)(Dummy_2418));
                   _data_mat[14] = ((real_t)(Dummy_2419));
                   _data_mat[15] = ((real_t)(Dummy_2420));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const double tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const double tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const double tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const double Dummy_2421 = tmp_GREEN_DOWN_1;
             const double Dummy_2422 = tmp_GREEN_DOWN_2;
             const double Dummy_2423 = tmp_GREEN_DOWN_3;
             const double Dummy_2424 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
             const double Dummy_2425 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
             const double Dummy_2426 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
             const double Dummy_2427 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
             const double Dummy_2428 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
             const double Dummy_2429 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
             const double Dummy_2430 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
             const double Dummy_2431 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
             const double Dummy_2432 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
             const double Dummy_2433 = -Dummy_2421 + Dummy_2424;
             const double Dummy_2434 = -Dummy_2421 + Dummy_2427;
             const double Dummy_2435 = -Dummy_2421 + Dummy_2430;
             const double Dummy_2436 = -Dummy_2422 + Dummy_2425;
             const double Dummy_2437 = -Dummy_2422 + Dummy_2428;
             const double tmp_GREEN_DOWN_14 = Dummy_2435*Dummy_2437;
             const double Dummy_2438 = -Dummy_2422 + Dummy_2431;
             const double tmp_GREEN_DOWN_12 = Dummy_2434*Dummy_2438;
             const double Dummy_2439 = -Dummy_2423 + Dummy_2426;
             const double Dummy_2440 = -Dummy_2423 + Dummy_2429;
             const double tmp_GREEN_DOWN_11 = Dummy_2438*Dummy_2440;
             const double Dummy_2441 = -Dummy_2423 + Dummy_2432;
             const double tmp_GREEN_DOWN_10 = Dummy_2437*Dummy_2441;
             const double tmp_GREEN_DOWN_13 = Dummy_2434*Dummy_2441;
             const double tmp_GREEN_DOWN_15 = Dummy_2433*tmp_GREEN_DOWN_10 - Dummy_2433*tmp_GREEN_DOWN_11 + Dummy_2435*Dummy_2436*Dummy_2440 - Dummy_2436*tmp_GREEN_DOWN_13 + Dummy_2439*tmp_GREEN_DOWN_12 - Dummy_2439*tmp_GREEN_DOWN_14;
             const double tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
             const double Dummy_2442 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
             const double Dummy_2443 = tmp_GREEN_DOWN_16*(Dummy_2435*Dummy_2440 - tmp_GREEN_DOWN_13);
             const double Dummy_2444 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
             const double Dummy_2445 = tmp_GREEN_DOWN_16*(-Dummy_2436*Dummy_2441 + Dummy_2438*Dummy_2439);
             const double Dummy_2446 = tmp_GREEN_DOWN_16*(Dummy_2433*Dummy_2441 - Dummy_2435*Dummy_2439);
             const double Dummy_2447 = tmp_GREEN_DOWN_16*(-Dummy_2433*Dummy_2438 + Dummy_2435*Dummy_2436);
             const double Dummy_2448 = tmp_GREEN_DOWN_16*(Dummy_2436*Dummy_2440 - Dummy_2437*Dummy_2439);
             const double Dummy_2449 = tmp_GREEN_DOWN_16*(-Dummy_2433*Dummy_2440 + Dummy_2434*Dummy_2439);
             const double Dummy_2450 = tmp_GREEN_DOWN_16*(Dummy_2433*Dummy_2437 - Dummy_2434*Dummy_2436);
             const double Dummy_2451 = fabs(tmp_GREEN_DOWN_15);
             const double Dummy_2452 = -Dummy_2442 - Dummy_2445 - Dummy_2448;
             const double Dummy_2453 = -Dummy_2443 - Dummy_2446 - Dummy_2449;
             const double Dummy_2454 = -Dummy_2444 - Dummy_2447 - Dummy_2450;
             const double Dummy_2455 = Dummy_2451*0.16666666666666666;
             const double Dummy_2456 = Dummy_2455*(Dummy_2442*Dummy_2452 + Dummy_2443*Dummy_2453 + Dummy_2444*Dummy_2454);
             const double Dummy_2457 = Dummy_2455*(Dummy_2445*Dummy_2452 + Dummy_2446*Dummy_2453 + Dummy_2447*Dummy_2454);
             const double Dummy_2458 = Dummy_2455*(Dummy_2448*Dummy_2452 + Dummy_2449*Dummy_2453 + Dummy_2450*Dummy_2454);
             const double Dummy_2459 = Dummy_2455*(Dummy_2442*Dummy_2445 + Dummy_2443*Dummy_2446 + Dummy_2444*Dummy_2447);
             const double Dummy_2460 = Dummy_2455*(Dummy_2442*Dummy_2448 + Dummy_2443*Dummy_2449 + Dummy_2444*Dummy_2450);
             const double Dummy_2461 = Dummy_2455*(Dummy_2445*Dummy_2448 + Dummy_2446*Dummy_2449 + Dummy_2447*Dummy_2450);
             const double Dummy_2462 = Dummy_2455*((Dummy_2452*Dummy_2452) + (Dummy_2453*Dummy_2453) + (Dummy_2454*Dummy_2454));
             const double Dummy_2463 = Dummy_2456;
             const double Dummy_2464 = Dummy_2457;
             const double Dummy_2465 = Dummy_2458;
             const double Dummy_2466 = Dummy_2456;
             const double Dummy_2467 = Dummy_2455*((Dummy_2442*Dummy_2442) + (Dummy_2443*Dummy_2443) + (Dummy_2444*Dummy_2444));
             const double Dummy_2468 = Dummy_2459;
             const double Dummy_2469 = Dummy_2460;
             const double Dummy_2470 = Dummy_2457;
             const double Dummy_2471 = Dummy_2459;
             const double Dummy_2472 = Dummy_2455*((Dummy_2445*Dummy_2445) + (Dummy_2446*Dummy_2446) + (Dummy_2447*Dummy_2447));
             const double Dummy_2473 = Dummy_2461;
             const double Dummy_2474 = Dummy_2458;
             const double Dummy_2475 = Dummy_2460;
             const double Dummy_2476 = Dummy_2461;
             const double Dummy_2477 = Dummy_2455*((Dummy_2448*Dummy_2448) + (Dummy_2449*Dummy_2449) + (Dummy_2450*Dummy_2450));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_2462));
                   _data_mat[1] = ((real_t)(Dummy_2463));
                   _data_mat[2] = ((real_t)(Dummy_2464));
                   _data_mat[3] = ((real_t)(Dummy_2465));
                   _data_mat[4] = ((real_t)(Dummy_2466));
                   _data_mat[5] = ((real_t)(Dummy_2467));
                   _data_mat[6] = ((real_t)(Dummy_2468));
                   _data_mat[7] = ((real_t)(Dummy_2469));
                   _data_mat[8] = ((real_t)(Dummy_2470));
                   _data_mat[9] = ((real_t)(Dummy_2471));
                   _data_mat[10] = ((real_t)(Dummy_2472));
                   _data_mat[11] = ((real_t)(Dummy_2473));
                   _data_mat[12] = ((real_t)(Dummy_2474));
                   _data_mat[13] = ((real_t)(Dummy_2475));
                   _data_mat[14] = ((real_t)(Dummy_2476));
                   _data_mat[15] = ((real_t)(Dummy_2477));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          } 
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_1_0));
                   _data_mat[5] = ((real_t)(elMat_1_1));
                   _data_mat[6] = ((real_t)(elMat_1_2));
                   _data_mat[7] = ((real_t)(elMat_1_3));
                   _data_mat[8] = ((real_t)(elMat_2_0));
                   _data_mat[9] = ((real_t)(elMat_2_1));
                   _data_mat[10] = ((real_t)(elMat_2_2));
                   _data_mat[11] = ((real_t)(elMat_2_3));
                   _data_mat[12] = ((real_t)(elMat_3_0));
                   _data_mat[13] = ((real_t)(elMat_3_1));
                   _data_mat[14] = ((real_t)(elMat_3_2));
                   _data_mat[15] = ((real_t)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
