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

void P1ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_3D( double * RESTRICT  _data_invDiag_, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
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
       const double tmp_0 = abs_det_jac_affine*0.16666666666666666;
       const double elMatDiag_0 = tmp_0*(((-jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0)*(-jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0)) + ((-jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1)*(-jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1)) + ((-jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2)*(-jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2)));
       const double elMatDiag_1 = tmp_0*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
       const double elMatDiag_2 = tmp_0*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
       const double elMatDiag_3 = tmp_0*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2));
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
       const double Dummy_2705 = tmp_WHITE_DOWN_3;
       const double Dummy_2706 = tmp_WHITE_DOWN_6;
       const double Dummy_2707 = tmp_WHITE_DOWN_9;
       const double Dummy_2708 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const double Dummy_2709 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const double Dummy_2710 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const double Dummy_2711 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const double Dummy_2712 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const double Dummy_2713 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const double Dummy_2714 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const double Dummy_2715 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const double Dummy_2716 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const double Dummy_2717 = -Dummy_2705 + Dummy_2708;
       const double Dummy_2718 = -Dummy_2705 + Dummy_2711;
       const double Dummy_2719 = -Dummy_2705 + Dummy_2714;
       const double Dummy_2720 = -Dummy_2706 + Dummy_2709;
       const double Dummy_2721 = -Dummy_2706 + Dummy_2712;
       const double tmp_WHITE_DOWN_17 = Dummy_2719*Dummy_2721;
       const double Dummy_2722 = -Dummy_2706 + Dummy_2715;
       const double tmp_WHITE_DOWN_15 = Dummy_2718*Dummy_2722;
       const double Dummy_2723 = -Dummy_2707 + Dummy_2710;
       const double Dummy_2724 = -Dummy_2707 + Dummy_2713;
       const double tmp_WHITE_DOWN_14 = Dummy_2722*Dummy_2724;
       const double Dummy_2725 = -Dummy_2707 + Dummy_2716;
       const double tmp_WHITE_DOWN_13 = Dummy_2721*Dummy_2725;
       const double tmp_WHITE_DOWN_16 = Dummy_2718*Dummy_2725;
       const double tmp_WHITE_DOWN_18 = Dummy_2717*tmp_WHITE_DOWN_13 - Dummy_2717*tmp_WHITE_DOWN_14 + Dummy_2719*Dummy_2720*Dummy_2724 - Dummy_2720*tmp_WHITE_DOWN_16 + Dummy_2723*tmp_WHITE_DOWN_15 - Dummy_2723*tmp_WHITE_DOWN_17;
       const double tmp_WHITE_DOWN_19 = 1.0 / (tmp_WHITE_DOWN_18);
       const double Dummy_2726 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_13 - tmp_WHITE_DOWN_14);
       const double Dummy_2727 = tmp_WHITE_DOWN_19*(Dummy_2719*Dummy_2724 - tmp_WHITE_DOWN_16);
       const double Dummy_2728 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_15 - tmp_WHITE_DOWN_17);
       const double Dummy_2729 = tmp_WHITE_DOWN_19*(-Dummy_2720*Dummy_2725 + Dummy_2722*Dummy_2723);
       const double Dummy_2730 = tmp_WHITE_DOWN_19*(Dummy_2717*Dummy_2725 - Dummy_2719*Dummy_2723);
       const double Dummy_2731 = tmp_WHITE_DOWN_19*(-Dummy_2717*Dummy_2722 + Dummy_2719*Dummy_2720);
       const double Dummy_2732 = tmp_WHITE_DOWN_19*(Dummy_2720*Dummy_2724 - Dummy_2721*Dummy_2723);
       const double Dummy_2733 = tmp_WHITE_DOWN_19*(-Dummy_2717*Dummy_2724 + Dummy_2718*Dummy_2723);
       const double Dummy_2734 = tmp_WHITE_DOWN_19*(Dummy_2717*Dummy_2721 - Dummy_2718*Dummy_2720);
       const double Dummy_2735 = fabs(tmp_WHITE_DOWN_18);
       const double Dummy_2736 = Dummy_2735*0.16666666666666666;
       const double Dummy_2737 = Dummy_2736*(((-Dummy_2726 - Dummy_2729 - Dummy_2732)*(-Dummy_2726 - Dummy_2729 - Dummy_2732)) + ((-Dummy_2727 - Dummy_2730 - Dummy_2733)*(-Dummy_2727 - Dummy_2730 - Dummy_2733)) + ((-Dummy_2728 - Dummy_2731 - Dummy_2734)*(-Dummy_2728 - Dummy_2731 - Dummy_2734)));
       const double Dummy_2738 = Dummy_2736*((Dummy_2726*Dummy_2726) + (Dummy_2727*Dummy_2727) + (Dummy_2728*Dummy_2728));
       const double Dummy_2739 = Dummy_2736*((Dummy_2729*Dummy_2729) + (Dummy_2730*Dummy_2730) + (Dummy_2731*Dummy_2731));
       const double Dummy_2740 = Dummy_2736*((Dummy_2732*Dummy_2732) + (Dummy_2733*Dummy_2733) + (Dummy_2734*Dummy_2734));
       const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_2741 = tmp_BLUE_UP_1;
       const double Dummy_2742 = tmp_BLUE_UP_2;
       const double Dummy_2743 = tmp_BLUE_UP_3;
       const double Dummy_2744 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const double Dummy_2745 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const double Dummy_2746 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const double Dummy_2747 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const double Dummy_2748 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const double Dummy_2749 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const double Dummy_2750 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const double Dummy_2751 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const double Dummy_2752 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const double Dummy_2753 = -Dummy_2741 + Dummy_2744;
       const double Dummy_2754 = -Dummy_2741 + Dummy_2747;
       const double Dummy_2755 = -Dummy_2741 + Dummy_2750;
       const double Dummy_2756 = -Dummy_2742 + Dummy_2745;
       const double Dummy_2757 = -Dummy_2742 + Dummy_2748;
       const double tmp_BLUE_UP_11 = Dummy_2755*Dummy_2757;
       const double Dummy_2758 = -Dummy_2742 + Dummy_2751;
       const double tmp_BLUE_UP_9 = Dummy_2754*Dummy_2758;
       const double Dummy_2759 = -Dummy_2743 + Dummy_2746;
       const double Dummy_2760 = -Dummy_2743 + Dummy_2749;
       const double tmp_BLUE_UP_8 = Dummy_2758*Dummy_2760;
       const double Dummy_2761 = -Dummy_2743 + Dummy_2752;
       const double tmp_BLUE_UP_7 = Dummy_2757*Dummy_2761;
       const double tmp_BLUE_UP_10 = Dummy_2754*Dummy_2761;
       const double tmp_BLUE_UP_12 = Dummy_2753*tmp_BLUE_UP_7 - Dummy_2753*tmp_BLUE_UP_8 + Dummy_2755*Dummy_2756*Dummy_2760 - Dummy_2756*tmp_BLUE_UP_10 - Dummy_2759*tmp_BLUE_UP_11 + Dummy_2759*tmp_BLUE_UP_9;
       const double tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
       const double Dummy_2762 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
       const double Dummy_2763 = tmp_BLUE_UP_13*(Dummy_2755*Dummy_2760 - tmp_BLUE_UP_10);
       const double Dummy_2764 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
       const double Dummy_2765 = tmp_BLUE_UP_13*(-Dummy_2756*Dummy_2761 + Dummy_2758*Dummy_2759);
       const double Dummy_2766 = tmp_BLUE_UP_13*(Dummy_2753*Dummy_2761 - Dummy_2755*Dummy_2759);
       const double Dummy_2767 = tmp_BLUE_UP_13*(-Dummy_2753*Dummy_2758 + Dummy_2755*Dummy_2756);
       const double Dummy_2768 = tmp_BLUE_UP_13*(Dummy_2756*Dummy_2760 - Dummy_2757*Dummy_2759);
       const double Dummy_2769 = tmp_BLUE_UP_13*(-Dummy_2753*Dummy_2760 + Dummy_2754*Dummy_2759);
       const double Dummy_2770 = tmp_BLUE_UP_13*(Dummy_2753*Dummy_2757 - Dummy_2754*Dummy_2756);
       const double Dummy_2771 = fabs(tmp_BLUE_UP_12);
       const double Dummy_2772 = Dummy_2771*0.16666666666666666;
       const double Dummy_2773 = Dummy_2772*(((-Dummy_2762 - Dummy_2765 - Dummy_2768)*(-Dummy_2762 - Dummy_2765 - Dummy_2768)) + ((-Dummy_2763 - Dummy_2766 - Dummy_2769)*(-Dummy_2763 - Dummy_2766 - Dummy_2769)) + ((-Dummy_2764 - Dummy_2767 - Dummy_2770)*(-Dummy_2764 - Dummy_2767 - Dummy_2770)));
       const double Dummy_2774 = Dummy_2772*((Dummy_2762*Dummy_2762) + (Dummy_2763*Dummy_2763) + (Dummy_2764*Dummy_2764));
       const double Dummy_2775 = Dummy_2772*((Dummy_2765*Dummy_2765) + (Dummy_2766*Dummy_2766) + (Dummy_2767*Dummy_2767));
       const double Dummy_2776 = Dummy_2772*((Dummy_2768*Dummy_2768) + (Dummy_2769*Dummy_2769) + (Dummy_2770*Dummy_2770));
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
       const double Dummy_2777 = tmp_BLUE_DOWN_1;
       const double Dummy_2778 = tmp_BLUE_DOWN_2;
       const double Dummy_2779 = tmp_BLUE_DOWN_3;
       const double Dummy_2780 = tmp_BLUE_DOWN_5;
       const double Dummy_2781 = tmp_BLUE_DOWN_7;
       const double Dummy_2782 = tmp_BLUE_DOWN_9;
       const double Dummy_2783 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const double Dummy_2784 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const double Dummy_2785 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const double Dummy_2786 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const double Dummy_2787 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const double Dummy_2788 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const double Dummy_2789 = -Dummy_2777 + Dummy_2780;
       const double Dummy_2790 = -Dummy_2777 + Dummy_2783;
       const double Dummy_2791 = -Dummy_2777 + Dummy_2786;
       const double Dummy_2792 = -Dummy_2778 + Dummy_2781;
       const double Dummy_2793 = -Dummy_2778 + Dummy_2784;
       const double tmp_BLUE_DOWN_14 = Dummy_2791*Dummy_2793;
       const double Dummy_2794 = -Dummy_2778 + Dummy_2787;
       const double tmp_BLUE_DOWN_12 = Dummy_2790*Dummy_2794;
       const double Dummy_2795 = -Dummy_2779 + Dummy_2782;
       const double Dummy_2796 = -Dummy_2779 + Dummy_2785;
       const double tmp_BLUE_DOWN_11 = Dummy_2794*Dummy_2796;
       const double Dummy_2797 = -Dummy_2779 + Dummy_2788;
       const double tmp_BLUE_DOWN_10 = Dummy_2793*Dummy_2797;
       const double tmp_BLUE_DOWN_13 = Dummy_2790*Dummy_2797;
       const double tmp_BLUE_DOWN_15 = Dummy_2789*tmp_BLUE_DOWN_10 - Dummy_2789*tmp_BLUE_DOWN_11 + Dummy_2791*Dummy_2792*Dummy_2796 - Dummy_2792*tmp_BLUE_DOWN_13 + Dummy_2795*tmp_BLUE_DOWN_12 - Dummy_2795*tmp_BLUE_DOWN_14;
       const double tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
       const double Dummy_2798 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
       const double Dummy_2799 = tmp_BLUE_DOWN_16*(Dummy_2791*Dummy_2796 - tmp_BLUE_DOWN_13);
       const double Dummy_2800 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
       const double Dummy_2801 = tmp_BLUE_DOWN_16*(-Dummy_2792*Dummy_2797 + Dummy_2794*Dummy_2795);
       const double Dummy_2802 = tmp_BLUE_DOWN_16*(Dummy_2789*Dummy_2797 - Dummy_2791*Dummy_2795);
       const double Dummy_2803 = tmp_BLUE_DOWN_16*(-Dummy_2789*Dummy_2794 + Dummy_2791*Dummy_2792);
       const double Dummy_2804 = tmp_BLUE_DOWN_16*(Dummy_2792*Dummy_2796 - Dummy_2793*Dummy_2795);
       const double Dummy_2805 = tmp_BLUE_DOWN_16*(-Dummy_2789*Dummy_2796 + Dummy_2790*Dummy_2795);
       const double Dummy_2806 = tmp_BLUE_DOWN_16*(Dummy_2789*Dummy_2793 - Dummy_2790*Dummy_2792);
       const double Dummy_2807 = fabs(tmp_BLUE_DOWN_15);
       const double Dummy_2808 = Dummy_2807*0.16666666666666666;
       const double Dummy_2809 = Dummy_2808*(((-Dummy_2798 - Dummy_2801 - Dummy_2804)*(-Dummy_2798 - Dummy_2801 - Dummy_2804)) + ((-Dummy_2799 - Dummy_2802 - Dummy_2805)*(-Dummy_2799 - Dummy_2802 - Dummy_2805)) + ((-Dummy_2800 - Dummy_2803 - Dummy_2806)*(-Dummy_2800 - Dummy_2803 - Dummy_2806)));
       const double Dummy_2810 = Dummy_2808*((Dummy_2798*Dummy_2798) + (Dummy_2799*Dummy_2799) + (Dummy_2800*Dummy_2800));
       const double Dummy_2811 = Dummy_2808*((Dummy_2801*Dummy_2801) + (Dummy_2802*Dummy_2802) + (Dummy_2803*Dummy_2803));
       const double Dummy_2812 = Dummy_2808*((Dummy_2804*Dummy_2804) + (Dummy_2805*Dummy_2805) + (Dummy_2806*Dummy_2806));
       const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_2813 = tmp_GREEN_UP_1;
       const double Dummy_2814 = tmp_GREEN_UP_2;
       const double Dummy_2815 = tmp_GREEN_UP_3;
       const double Dummy_2816 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double Dummy_2817 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double Dummy_2818 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_2819 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const double Dummy_2820 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const double Dummy_2821 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const double Dummy_2822 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const double Dummy_2823 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const double Dummy_2824 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const double Dummy_2825 = -Dummy_2813 + Dummy_2816;
       const double Dummy_2826 = -Dummy_2813 + Dummy_2819;
       const double Dummy_2827 = -Dummy_2813 + Dummy_2822;
       const double Dummy_2828 = -Dummy_2814 + Dummy_2817;
       const double Dummy_2829 = -Dummy_2814 + Dummy_2820;
       const double tmp_GREEN_UP_11 = Dummy_2827*Dummy_2829;
       const double Dummy_2830 = -Dummy_2814 + Dummy_2823;
       const double tmp_GREEN_UP_9 = Dummy_2826*Dummy_2830;
       const double Dummy_2831 = -Dummy_2815 + Dummy_2818;
       const double Dummy_2832 = -Dummy_2815 + Dummy_2821;
       const double tmp_GREEN_UP_8 = Dummy_2830*Dummy_2832;
       const double Dummy_2833 = -Dummy_2815 + Dummy_2824;
       const double tmp_GREEN_UP_7 = Dummy_2829*Dummy_2833;
       const double tmp_GREEN_UP_10 = Dummy_2826*Dummy_2833;
       const double tmp_GREEN_UP_12 = Dummy_2825*tmp_GREEN_UP_7 - Dummy_2825*tmp_GREEN_UP_8 + Dummy_2827*Dummy_2828*Dummy_2832 - Dummy_2828*tmp_GREEN_UP_10 - Dummy_2831*tmp_GREEN_UP_11 + Dummy_2831*tmp_GREEN_UP_9;
       const double tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
       const double Dummy_2834 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
       const double Dummy_2835 = tmp_GREEN_UP_13*(Dummy_2827*Dummy_2832 - tmp_GREEN_UP_10);
       const double Dummy_2836 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
       const double Dummy_2837 = tmp_GREEN_UP_13*(-Dummy_2828*Dummy_2833 + Dummy_2830*Dummy_2831);
       const double Dummy_2838 = tmp_GREEN_UP_13*(Dummy_2825*Dummy_2833 - Dummy_2827*Dummy_2831);
       const double Dummy_2839 = tmp_GREEN_UP_13*(-Dummy_2825*Dummy_2830 + Dummy_2827*Dummy_2828);
       const double Dummy_2840 = tmp_GREEN_UP_13*(Dummy_2828*Dummy_2832 - Dummy_2829*Dummy_2831);
       const double Dummy_2841 = tmp_GREEN_UP_13*(-Dummy_2825*Dummy_2832 + Dummy_2826*Dummy_2831);
       const double Dummy_2842 = tmp_GREEN_UP_13*(Dummy_2825*Dummy_2829 - Dummy_2826*Dummy_2828);
       const double Dummy_2843 = fabs(tmp_GREEN_UP_12);
       const double Dummy_2844 = Dummy_2843*0.16666666666666666;
       const double Dummy_2845 = Dummy_2844*(((-Dummy_2834 - Dummy_2837 - Dummy_2840)*(-Dummy_2834 - Dummy_2837 - Dummy_2840)) + ((-Dummy_2835 - Dummy_2838 - Dummy_2841)*(-Dummy_2835 - Dummy_2838 - Dummy_2841)) + ((-Dummy_2836 - Dummy_2839 - Dummy_2842)*(-Dummy_2836 - Dummy_2839 - Dummy_2842)));
       const double Dummy_2846 = Dummy_2844*((Dummy_2834*Dummy_2834) + (Dummy_2835*Dummy_2835) + (Dummy_2836*Dummy_2836));
       const double Dummy_2847 = Dummy_2844*((Dummy_2837*Dummy_2837) + (Dummy_2838*Dummy_2838) + (Dummy_2839*Dummy_2839));
       const double Dummy_2848 = Dummy_2844*((Dummy_2840*Dummy_2840) + (Dummy_2841*Dummy_2841) + (Dummy_2842*Dummy_2842));
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
       const double Dummy_2849 = tmp_GREEN_DOWN_1;
       const double Dummy_2850 = tmp_GREEN_DOWN_2;
       const double Dummy_2851 = tmp_GREEN_DOWN_3;
       const double Dummy_2852 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const double Dummy_2853 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const double Dummy_2854 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const double Dummy_2855 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const double Dummy_2856 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const double Dummy_2857 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const double Dummy_2858 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const double Dummy_2859 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const double Dummy_2860 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const double Dummy_2861 = -Dummy_2849 + Dummy_2852;
       const double Dummy_2862 = -Dummy_2849 + Dummy_2855;
       const double Dummy_2863 = -Dummy_2849 + Dummy_2858;
       const double Dummy_2864 = -Dummy_2850 + Dummy_2853;
       const double Dummy_2865 = -Dummy_2850 + Dummy_2856;
       const double tmp_GREEN_DOWN_14 = Dummy_2863*Dummy_2865;
       const double Dummy_2866 = -Dummy_2850 + Dummy_2859;
       const double tmp_GREEN_DOWN_12 = Dummy_2862*Dummy_2866;
       const double Dummy_2867 = -Dummy_2851 + Dummy_2854;
       const double Dummy_2868 = -Dummy_2851 + Dummy_2857;
       const double tmp_GREEN_DOWN_11 = Dummy_2866*Dummy_2868;
       const double Dummy_2869 = -Dummy_2851 + Dummy_2860;
       const double tmp_GREEN_DOWN_10 = Dummy_2865*Dummy_2869;
       const double tmp_GREEN_DOWN_13 = Dummy_2862*Dummy_2869;
       const double tmp_GREEN_DOWN_15 = Dummy_2861*tmp_GREEN_DOWN_10 - Dummy_2861*tmp_GREEN_DOWN_11 + Dummy_2863*Dummy_2864*Dummy_2868 - Dummy_2864*tmp_GREEN_DOWN_13 + Dummy_2867*tmp_GREEN_DOWN_12 - Dummy_2867*tmp_GREEN_DOWN_14;
       const double tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
       const double Dummy_2870 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
       const double Dummy_2871 = tmp_GREEN_DOWN_16*(Dummy_2863*Dummy_2868 - tmp_GREEN_DOWN_13);
       const double Dummy_2872 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
       const double Dummy_2873 = tmp_GREEN_DOWN_16*(-Dummy_2864*Dummy_2869 + Dummy_2866*Dummy_2867);
       const double Dummy_2874 = tmp_GREEN_DOWN_16*(Dummy_2861*Dummy_2869 - Dummy_2863*Dummy_2867);
       const double Dummy_2875 = tmp_GREEN_DOWN_16*(-Dummy_2861*Dummy_2866 + Dummy_2863*Dummy_2864);
       const double Dummy_2876 = tmp_GREEN_DOWN_16*(Dummy_2864*Dummy_2868 - Dummy_2865*Dummy_2867);
       const double Dummy_2877 = tmp_GREEN_DOWN_16*(-Dummy_2861*Dummy_2868 + Dummy_2862*Dummy_2867);
       const double Dummy_2878 = tmp_GREEN_DOWN_16*(Dummy_2861*Dummy_2865 - Dummy_2862*Dummy_2864);
       const double Dummy_2879 = fabs(tmp_GREEN_DOWN_15);
       const double Dummy_2880 = Dummy_2879*0.16666666666666666;
       const double Dummy_2881 = Dummy_2880*(((-Dummy_2870 - Dummy_2873 - Dummy_2876)*(-Dummy_2870 - Dummy_2873 - Dummy_2876)) + ((-Dummy_2871 - Dummy_2874 - Dummy_2877)*(-Dummy_2871 - Dummy_2874 - Dummy_2877)) + ((-Dummy_2872 - Dummy_2875 - Dummy_2878)*(-Dummy_2872 - Dummy_2875 - Dummy_2878)));
       const double Dummy_2882 = Dummy_2880*((Dummy_2870*Dummy_2870) + (Dummy_2871*Dummy_2871) + (Dummy_2872*Dummy_2872));
       const double Dummy_2883 = Dummy_2880*((Dummy_2873*Dummy_2873) + (Dummy_2874*Dummy_2874) + (Dummy_2875*Dummy_2875));
       const double Dummy_2884 = Dummy_2880*((Dummy_2876*Dummy_2876) + (Dummy_2877*Dummy_2877) + (Dummy_2878*Dummy_2878));
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2737 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2738 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2739 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2740 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2773 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2774 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2775 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2776 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2809 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2810 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2811 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2812 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2845 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2846 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2847 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2848 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2881 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2882 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_2883 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_2884 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
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
             const double tmp_0 = abs_det_jac_affine*0.16666666666666666;
             const double elMatDiag_0 = tmp_0*(((-jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0)*(-jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0)) + ((-jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1)*(-jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1)) + ((-jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2)*(-jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2)));
             const double elMatDiag_1 = tmp_0*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
             const double elMatDiag_2 = tmp_0*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
             const double elMatDiag_3 = tmp_0*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_0 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_1 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_2 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_3 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double Dummy_2885 = tmp_BLUE_UP_1;
             const double Dummy_2886 = tmp_BLUE_UP_2;
             const double Dummy_2887 = tmp_BLUE_UP_3;
             const double Dummy_2888 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
             const double Dummy_2889 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
             const double Dummy_2890 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
             const double Dummy_2891 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
             const double Dummy_2892 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
             const double Dummy_2893 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
             const double Dummy_2894 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
             const double Dummy_2895 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
             const double Dummy_2896 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
             const double Dummy_2897 = -Dummy_2885 + Dummy_2888;
             const double Dummy_2898 = -Dummy_2885 + Dummy_2891;
             const double Dummy_2899 = -Dummy_2885 + Dummy_2894;
             const double Dummy_2900 = -Dummy_2886 + Dummy_2889;
             const double Dummy_2901 = -Dummy_2886 + Dummy_2892;
             const double tmp_BLUE_UP_11 = Dummy_2899*Dummy_2901;
             const double Dummy_2902 = -Dummy_2886 + Dummy_2895;
             const double tmp_BLUE_UP_9 = Dummy_2898*Dummy_2902;
             const double Dummy_2903 = -Dummy_2887 + Dummy_2890;
             const double Dummy_2904 = -Dummy_2887 + Dummy_2893;
             const double tmp_BLUE_UP_8 = Dummy_2902*Dummy_2904;
             const double Dummy_2905 = -Dummy_2887 + Dummy_2896;
             const double tmp_BLUE_UP_7 = Dummy_2901*Dummy_2905;
             const double tmp_BLUE_UP_10 = Dummy_2898*Dummy_2905;
             const double tmp_BLUE_UP_12 = Dummy_2897*tmp_BLUE_UP_7 - Dummy_2897*tmp_BLUE_UP_8 + Dummy_2899*Dummy_2900*Dummy_2904 - Dummy_2900*tmp_BLUE_UP_10 - Dummy_2903*tmp_BLUE_UP_11 + Dummy_2903*tmp_BLUE_UP_9;
             const double tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
             const double Dummy_2906 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
             const double Dummy_2907 = tmp_BLUE_UP_13*(Dummy_2899*Dummy_2904 - tmp_BLUE_UP_10);
             const double Dummy_2908 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
             const double Dummy_2909 = tmp_BLUE_UP_13*(-Dummy_2900*Dummy_2905 + Dummy_2902*Dummy_2903);
             const double Dummy_2910 = tmp_BLUE_UP_13*(Dummy_2897*Dummy_2905 - Dummy_2899*Dummy_2903);
             const double Dummy_2911 = tmp_BLUE_UP_13*(-Dummy_2897*Dummy_2902 + Dummy_2899*Dummy_2900);
             const double Dummy_2912 = tmp_BLUE_UP_13*(Dummy_2900*Dummy_2904 - Dummy_2901*Dummy_2903);
             const double Dummy_2913 = tmp_BLUE_UP_13*(-Dummy_2897*Dummy_2904 + Dummy_2898*Dummy_2903);
             const double Dummy_2914 = tmp_BLUE_UP_13*(Dummy_2897*Dummy_2901 - Dummy_2898*Dummy_2900);
             const double Dummy_2915 = fabs(tmp_BLUE_UP_12);
             const double Dummy_2916 = Dummy_2915*0.16666666666666666;
             const double Dummy_2917 = Dummy_2916*(((-Dummy_2906 - Dummy_2909 - Dummy_2912)*(-Dummy_2906 - Dummy_2909 - Dummy_2912)) + ((-Dummy_2907 - Dummy_2910 - Dummy_2913)*(-Dummy_2907 - Dummy_2910 - Dummy_2913)) + ((-Dummy_2908 - Dummy_2911 - Dummy_2914)*(-Dummy_2908 - Dummy_2911 - Dummy_2914)));
             const double Dummy_2918 = Dummy_2916*((Dummy_2906*Dummy_2906) + (Dummy_2907*Dummy_2907) + (Dummy_2908*Dummy_2908));
             const double Dummy_2919 = Dummy_2916*((Dummy_2909*Dummy_2909) + (Dummy_2910*Dummy_2910) + (Dummy_2911*Dummy_2911));
             const double Dummy_2920 = Dummy_2916*((Dummy_2912*Dummy_2912) + (Dummy_2913*Dummy_2913) + (Dummy_2914*Dummy_2914));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2917 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2918 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2919 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2920 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
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
             const double Dummy_2921 = tmp_BLUE_DOWN_1;
             const double Dummy_2922 = tmp_BLUE_DOWN_2;
             const double Dummy_2923 = tmp_BLUE_DOWN_3;
             const double Dummy_2924 = tmp_BLUE_DOWN_5;
             const double Dummy_2925 = tmp_BLUE_DOWN_7;
             const double Dummy_2926 = tmp_BLUE_DOWN_9;
             const double Dummy_2927 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
             const double Dummy_2928 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
             const double Dummy_2929 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
             const double Dummy_2930 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
             const double Dummy_2931 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
             const double Dummy_2932 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
             const double Dummy_2933 = -Dummy_2921 + Dummy_2924;
             const double Dummy_2934 = -Dummy_2921 + Dummy_2927;
             const double Dummy_2935 = -Dummy_2921 + Dummy_2930;
             const double Dummy_2936 = -Dummy_2922 + Dummy_2925;
             const double Dummy_2937 = -Dummy_2922 + Dummy_2928;
             const double tmp_BLUE_DOWN_14 = Dummy_2935*Dummy_2937;
             const double Dummy_2938 = -Dummy_2922 + Dummy_2931;
             const double tmp_BLUE_DOWN_12 = Dummy_2934*Dummy_2938;
             const double Dummy_2939 = -Dummy_2923 + Dummy_2926;
             const double Dummy_2940 = -Dummy_2923 + Dummy_2929;
             const double tmp_BLUE_DOWN_11 = Dummy_2938*Dummy_2940;
             const double Dummy_2941 = -Dummy_2923 + Dummy_2932;
             const double tmp_BLUE_DOWN_10 = Dummy_2937*Dummy_2941;
             const double tmp_BLUE_DOWN_13 = Dummy_2934*Dummy_2941;
             const double tmp_BLUE_DOWN_15 = Dummy_2933*tmp_BLUE_DOWN_10 - Dummy_2933*tmp_BLUE_DOWN_11 + Dummy_2935*Dummy_2936*Dummy_2940 - Dummy_2936*tmp_BLUE_DOWN_13 + Dummy_2939*tmp_BLUE_DOWN_12 - Dummy_2939*tmp_BLUE_DOWN_14;
             const double tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
             const double Dummy_2942 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
             const double Dummy_2943 = tmp_BLUE_DOWN_16*(Dummy_2935*Dummy_2940 - tmp_BLUE_DOWN_13);
             const double Dummy_2944 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
             const double Dummy_2945 = tmp_BLUE_DOWN_16*(-Dummy_2936*Dummy_2941 + Dummy_2938*Dummy_2939);
             const double Dummy_2946 = tmp_BLUE_DOWN_16*(Dummy_2933*Dummy_2941 - Dummy_2935*Dummy_2939);
             const double Dummy_2947 = tmp_BLUE_DOWN_16*(-Dummy_2933*Dummy_2938 + Dummy_2935*Dummy_2936);
             const double Dummy_2948 = tmp_BLUE_DOWN_16*(Dummy_2936*Dummy_2940 - Dummy_2937*Dummy_2939);
             const double Dummy_2949 = tmp_BLUE_DOWN_16*(-Dummy_2933*Dummy_2940 + Dummy_2934*Dummy_2939);
             const double Dummy_2950 = tmp_BLUE_DOWN_16*(Dummy_2933*Dummy_2937 - Dummy_2934*Dummy_2936);
             const double Dummy_2951 = fabs(tmp_BLUE_DOWN_15);
             const double Dummy_2952 = Dummy_2951*0.16666666666666666;
             const double Dummy_2953 = Dummy_2952*(((-Dummy_2942 - Dummy_2945 - Dummy_2948)*(-Dummy_2942 - Dummy_2945 - Dummy_2948)) + ((-Dummy_2943 - Dummy_2946 - Dummy_2949)*(-Dummy_2943 - Dummy_2946 - Dummy_2949)) + ((-Dummy_2944 - Dummy_2947 - Dummy_2950)*(-Dummy_2944 - Dummy_2947 - Dummy_2950)));
             const double Dummy_2954 = Dummy_2952*((Dummy_2942*Dummy_2942) + (Dummy_2943*Dummy_2943) + (Dummy_2944*Dummy_2944));
             const double Dummy_2955 = Dummy_2952*((Dummy_2945*Dummy_2945) + (Dummy_2946*Dummy_2946) + (Dummy_2947*Dummy_2947));
             const double Dummy_2956 = Dummy_2952*((Dummy_2948*Dummy_2948) + (Dummy_2949*Dummy_2949) + (Dummy_2950*Dummy_2950));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2953 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2954 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2955 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2956 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const double Dummy_2957 = tmp_GREEN_UP_1;
             const double Dummy_2958 = tmp_GREEN_UP_2;
             const double Dummy_2959 = tmp_GREEN_UP_3;
             const double Dummy_2960 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const double Dummy_2961 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const double Dummy_2962 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const double Dummy_2963 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
             const double Dummy_2964 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
             const double Dummy_2965 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
             const double Dummy_2966 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
             const double Dummy_2967 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
             const double Dummy_2968 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
             const double Dummy_2969 = -Dummy_2957 + Dummy_2960;
             const double Dummy_2970 = -Dummy_2957 + Dummy_2963;
             const double Dummy_2971 = -Dummy_2957 + Dummy_2966;
             const double Dummy_2972 = -Dummy_2958 + Dummy_2961;
             const double Dummy_2973 = -Dummy_2958 + Dummy_2964;
             const double tmp_GREEN_UP_11 = Dummy_2971*Dummy_2973;
             const double Dummy_2974 = -Dummy_2958 + Dummy_2967;
             const double tmp_GREEN_UP_9 = Dummy_2970*Dummy_2974;
             const double Dummy_2975 = -Dummy_2959 + Dummy_2962;
             const double Dummy_2976 = -Dummy_2959 + Dummy_2965;
             const double tmp_GREEN_UP_8 = Dummy_2974*Dummy_2976;
             const double Dummy_2977 = -Dummy_2959 + Dummy_2968;
             const double tmp_GREEN_UP_7 = Dummy_2973*Dummy_2977;
             const double tmp_GREEN_UP_10 = Dummy_2970*Dummy_2977;
             const double tmp_GREEN_UP_12 = Dummy_2969*tmp_GREEN_UP_7 - Dummy_2969*tmp_GREEN_UP_8 + Dummy_2971*Dummy_2972*Dummy_2976 - Dummy_2972*tmp_GREEN_UP_10 - Dummy_2975*tmp_GREEN_UP_11 + Dummy_2975*tmp_GREEN_UP_9;
             const double tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
             const double Dummy_2978 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
             const double Dummy_2979 = tmp_GREEN_UP_13*(Dummy_2971*Dummy_2976 - tmp_GREEN_UP_10);
             const double Dummy_2980 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
             const double Dummy_2981 = tmp_GREEN_UP_13*(-Dummy_2972*Dummy_2977 + Dummy_2974*Dummy_2975);
             const double Dummy_2982 = tmp_GREEN_UP_13*(Dummy_2969*Dummy_2977 - Dummy_2971*Dummy_2975);
             const double Dummy_2983 = tmp_GREEN_UP_13*(-Dummy_2969*Dummy_2974 + Dummy_2971*Dummy_2972);
             const double Dummy_2984 = tmp_GREEN_UP_13*(Dummy_2972*Dummy_2976 - Dummy_2973*Dummy_2975);
             const double Dummy_2985 = tmp_GREEN_UP_13*(-Dummy_2969*Dummy_2976 + Dummy_2970*Dummy_2975);
             const double Dummy_2986 = tmp_GREEN_UP_13*(Dummy_2969*Dummy_2973 - Dummy_2970*Dummy_2972);
             const double Dummy_2987 = fabs(tmp_GREEN_UP_12);
             const double Dummy_2988 = Dummy_2987*0.16666666666666666;
             const double Dummy_2989 = Dummy_2988*(((-Dummy_2978 - Dummy_2981 - Dummy_2984)*(-Dummy_2978 - Dummy_2981 - Dummy_2984)) + ((-Dummy_2979 - Dummy_2982 - Dummy_2985)*(-Dummy_2979 - Dummy_2982 - Dummy_2985)) + ((-Dummy_2980 - Dummy_2983 - Dummy_2986)*(-Dummy_2980 - Dummy_2983 - Dummy_2986)));
             const double Dummy_2990 = Dummy_2988*((Dummy_2978*Dummy_2978) + (Dummy_2979*Dummy_2979) + (Dummy_2980*Dummy_2980));
             const double Dummy_2991 = Dummy_2988*((Dummy_2981*Dummy_2981) + (Dummy_2982*Dummy_2982) + (Dummy_2983*Dummy_2983));
             const double Dummy_2992 = Dummy_2988*((Dummy_2984*Dummy_2984) + (Dummy_2985*Dummy_2985) + (Dummy_2986*Dummy_2986));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2989 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2990 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_2991 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_2992 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
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
             const double Dummy_2993 = tmp_GREEN_DOWN_1;
             const double Dummy_2994 = tmp_GREEN_DOWN_2;
             const double Dummy_2995 = tmp_GREEN_DOWN_3;
             const double Dummy_2996 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
             const double Dummy_2997 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
             const double Dummy_2998 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
             const double Dummy_2999 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
             const double Dummy_3000 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
             const double Dummy_3001 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
             const double Dummy_3002 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
             const double Dummy_3003 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
             const double Dummy_3004 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
             const double Dummy_3005 = -Dummy_2993 + Dummy_2996;
             const double Dummy_3006 = -Dummy_2993 + Dummy_2999;
             const double Dummy_3007 = -Dummy_2993 + Dummy_3002;
             const double Dummy_3008 = -Dummy_2994 + Dummy_2997;
             const double Dummy_3009 = -Dummy_2994 + Dummy_3000;
             const double tmp_GREEN_DOWN_14 = Dummy_3007*Dummy_3009;
             const double Dummy_3010 = -Dummy_2994 + Dummy_3003;
             const double tmp_GREEN_DOWN_12 = Dummy_3006*Dummy_3010;
             const double Dummy_3011 = -Dummy_2995 + Dummy_2998;
             const double Dummy_3012 = -Dummy_2995 + Dummy_3001;
             const double tmp_GREEN_DOWN_11 = Dummy_3010*Dummy_3012;
             const double Dummy_3013 = -Dummy_2995 + Dummy_3004;
             const double tmp_GREEN_DOWN_10 = Dummy_3009*Dummy_3013;
             const double tmp_GREEN_DOWN_13 = Dummy_3006*Dummy_3013;
             const double tmp_GREEN_DOWN_15 = Dummy_3005*tmp_GREEN_DOWN_10 - Dummy_3005*tmp_GREEN_DOWN_11 + Dummy_3007*Dummy_3008*Dummy_3012 - Dummy_3008*tmp_GREEN_DOWN_13 + Dummy_3011*tmp_GREEN_DOWN_12 - Dummy_3011*tmp_GREEN_DOWN_14;
             const double tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
             const double Dummy_3014 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
             const double Dummy_3015 = tmp_GREEN_DOWN_16*(Dummy_3007*Dummy_3012 - tmp_GREEN_DOWN_13);
             const double Dummy_3016 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
             const double Dummy_3017 = tmp_GREEN_DOWN_16*(-Dummy_3008*Dummy_3013 + Dummy_3010*Dummy_3011);
             const double Dummy_3018 = tmp_GREEN_DOWN_16*(Dummy_3005*Dummy_3013 - Dummy_3007*Dummy_3011);
             const double Dummy_3019 = tmp_GREEN_DOWN_16*(-Dummy_3005*Dummy_3010 + Dummy_3007*Dummy_3008);
             const double Dummy_3020 = tmp_GREEN_DOWN_16*(Dummy_3008*Dummy_3012 - Dummy_3009*Dummy_3011);
             const double Dummy_3021 = tmp_GREEN_DOWN_16*(-Dummy_3005*Dummy_3012 + Dummy_3006*Dummy_3011);
             const double Dummy_3022 = tmp_GREEN_DOWN_16*(Dummy_3005*Dummy_3009 - Dummy_3006*Dummy_3008);
             const double Dummy_3023 = fabs(tmp_GREEN_DOWN_15);
             const double Dummy_3024 = Dummy_3023*0.16666666666666666;
             const double Dummy_3025 = Dummy_3024*(((-Dummy_3014 - Dummy_3017 - Dummy_3020)*(-Dummy_3014 - Dummy_3017 - Dummy_3020)) + ((-Dummy_3015 - Dummy_3018 - Dummy_3021)*(-Dummy_3015 - Dummy_3018 - Dummy_3021)) + ((-Dummy_3016 - Dummy_3019 - Dummy_3022)*(-Dummy_3016 - Dummy_3019 - Dummy_3022)));
             const double Dummy_3026 = Dummy_3024*((Dummy_3014*Dummy_3014) + (Dummy_3015*Dummy_3015) + (Dummy_3016*Dummy_3016));
             const double Dummy_3027 = Dummy_3024*((Dummy_3017*Dummy_3017) + (Dummy_3018*Dummy_3018) + (Dummy_3019*Dummy_3019));
             const double Dummy_3028 = Dummy_3024*((Dummy_3020*Dummy_3020) + (Dummy_3021*Dummy_3021) + (Dummy_3022*Dummy_3022));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_3025 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_3026 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_3027 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_3028 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
          } 
          {
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_0 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_2 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_3 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
