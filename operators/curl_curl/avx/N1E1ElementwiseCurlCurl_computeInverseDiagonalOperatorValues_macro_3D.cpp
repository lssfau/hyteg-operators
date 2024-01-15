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



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::computeInverseDiagonalOperatorValues_macro_3D( double * RESTRICT  _data_invDiag_, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
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
       const double jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const double jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const double jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const double jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const double abs_det_jac_affine = fabs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double tmp_0 = 1.0 / (abs_det_jac_affine)*0.16666666666666666;
       const double tmp_1 = jac_affine_0_0*2.0;
       const double tmp_2 = jac_affine_0_1*2.0;
       const double tmp_3 = jac_affine_1_0*2.0;
       const double tmp_4 = jac_affine_1_1*2.0;
       const double tmp_5 = jac_affine_2_0*2.0;
       const double tmp_6 = jac_affine_2_1*2.0;
       const double tmp_7 = jac_affine_0_2*-2.0;
       const double tmp_8 = jac_affine_1_2*-2.0;
       const double tmp_9 = jac_affine_2_2*-2.0;
       const double elMatDiag_0 = tmp_0*((jac_affine_0_0*jac_affine_0_0)*4.0 + (jac_affine_1_0*jac_affine_1_0)*4.0 + (jac_affine_2_0*jac_affine_2_0)*4.0);
       const double elMatDiag_1 = tmp_0*((jac_affine_0_1*jac_affine_0_1)*4.0 + (jac_affine_1_1*jac_affine_1_1)*4.0 + (jac_affine_2_1*jac_affine_2_1)*4.0);
       const double elMatDiag_2 = tmp_0*((jac_affine_0_2*jac_affine_0_2)*4.0 + (jac_affine_1_2*jac_affine_1_2)*4.0 + (jac_affine_2_2*jac_affine_2_2)*4.0);
       const double elMatDiag_3 = tmp_0*(((-tmp_1 + tmp_2)*(-tmp_1 + tmp_2)) + ((-tmp_3 + tmp_4)*(-tmp_3 + tmp_4)) + ((-tmp_5 + tmp_6)*(-tmp_5 + tmp_6)));
       const double elMatDiag_4 = tmp_0*(((tmp_1 + tmp_7)*(tmp_1 + tmp_7)) + ((tmp_3 + tmp_8)*(tmp_3 + tmp_8)) + ((tmp_5 + tmp_9)*(tmp_5 + tmp_9)));
       const double elMatDiag_5 = tmp_0*(((-tmp_2 - tmp_7)*(-tmp_2 - tmp_7)) + ((-tmp_4 - tmp_8)*(-tmp_4 - tmp_8)) + ((-tmp_6 - tmp_9)*(-tmp_6 - tmp_9)));
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
       const double Dummy_822 = tmp_WHITE_DOWN_3;
       const double Dummy_823 = tmp_WHITE_DOWN_6;
       const double Dummy_824 = tmp_WHITE_DOWN_9;
       const double Dummy_825 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const double Dummy_826 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const double Dummy_827 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const double Dummy_828 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const double Dummy_829 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const double Dummy_830 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const double Dummy_831 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const double Dummy_832 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const double Dummy_833 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const double Dummy_834 = -Dummy_822 + Dummy_825;
       const double Dummy_835 = -Dummy_822 + Dummy_828;
       const double Dummy_836 = -Dummy_822 + Dummy_831;
       const double Dummy_837 = -Dummy_823 + Dummy_826;
       const double Dummy_838 = -Dummy_823 + Dummy_829;
       const double Dummy_839 = -Dummy_823 + Dummy_832;
       const double Dummy_840 = -Dummy_824 + Dummy_827;
       const double Dummy_841 = -Dummy_824 + Dummy_830;
       const double Dummy_842 = -Dummy_824 + Dummy_833;
       const double Dummy_843 = fabs(Dummy_834*Dummy_838*Dummy_842 - Dummy_834*Dummy_839*Dummy_841 - Dummy_835*Dummy_837*Dummy_842 + Dummy_835*Dummy_839*Dummy_840 + Dummy_836*Dummy_837*Dummy_841 - Dummy_836*Dummy_838*Dummy_840);
       const double Dummy_844 = 1.0 / (Dummy_843)*0.16666666666666666;
       const double Dummy_845 = Dummy_834*2.0;
       const double Dummy_846 = Dummy_835*2.0;
       const double Dummy_847 = Dummy_837*2.0;
       const double Dummy_848 = Dummy_838*2.0;
       const double Dummy_849 = Dummy_840*2.0;
       const double Dummy_850 = Dummy_841*2.0;
       const double Dummy_851 = Dummy_836*-2.0;
       const double Dummy_852 = Dummy_839*-2.0;
       const double Dummy_853 = Dummy_842*-2.0;
       const double Dummy_854 = Dummy_844*((Dummy_834*Dummy_834)*4.0 + (Dummy_837*Dummy_837)*4.0 + (Dummy_840*Dummy_840)*4.0);
       const double Dummy_855 = Dummy_844*((Dummy_835*Dummy_835)*4.0 + (Dummy_838*Dummy_838)*4.0 + (Dummy_841*Dummy_841)*4.0);
       const double Dummy_856 = Dummy_844*((Dummy_836*Dummy_836)*4.0 + (Dummy_839*Dummy_839)*4.0 + (Dummy_842*Dummy_842)*4.0);
       const double Dummy_857 = Dummy_844*(((-Dummy_845 + Dummy_846)*(-Dummy_845 + Dummy_846)) + ((-Dummy_847 + Dummy_848)*(-Dummy_847 + Dummy_848)) + ((-Dummy_849 + Dummy_850)*(-Dummy_849 + Dummy_850)));
       const double Dummy_858 = Dummy_844*(((Dummy_845 + Dummy_851)*(Dummy_845 + Dummy_851)) + ((Dummy_847 + Dummy_852)*(Dummy_847 + Dummy_852)) + ((Dummy_849 + Dummy_853)*(Dummy_849 + Dummy_853)));
       const double Dummy_859 = Dummy_844*(((-Dummy_846 - Dummy_851)*(-Dummy_846 - Dummy_851)) + ((-Dummy_848 - Dummy_852)*(-Dummy_848 - Dummy_852)) + ((-Dummy_850 - Dummy_853)*(-Dummy_850 - Dummy_853)));
       const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_860 = tmp_BLUE_UP_1;
       const double Dummy_861 = tmp_BLUE_UP_2;
       const double Dummy_862 = tmp_BLUE_UP_3;
       const double Dummy_863 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const double Dummy_864 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const double Dummy_865 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const double Dummy_866 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const double Dummy_867 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const double Dummy_868 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const double Dummy_869 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const double Dummy_870 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const double Dummy_871 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const double Dummy_872 = -Dummy_860 + Dummy_863;
       const double Dummy_873 = -Dummy_860 + Dummy_866;
       const double Dummy_874 = -Dummy_860 + Dummy_869;
       const double Dummy_875 = -Dummy_861 + Dummy_864;
       const double Dummy_876 = -Dummy_861 + Dummy_867;
       const double Dummy_877 = -Dummy_861 + Dummy_870;
       const double Dummy_878 = -Dummy_862 + Dummy_865;
       const double Dummy_879 = -Dummy_862 + Dummy_868;
       const double Dummy_880 = -Dummy_862 + Dummy_871;
       const double Dummy_881 = fabs(Dummy_872*Dummy_876*Dummy_880 - Dummy_872*Dummy_877*Dummy_879 - Dummy_873*Dummy_875*Dummy_880 + Dummy_873*Dummy_877*Dummy_878 + Dummy_874*Dummy_875*Dummy_879 - Dummy_874*Dummy_876*Dummy_878);
       const double Dummy_882 = 1.0 / (Dummy_881)*0.16666666666666666;
       const double Dummy_883 = Dummy_872*2.0;
       const double Dummy_884 = Dummy_873*2.0;
       const double Dummy_885 = Dummy_875*2.0;
       const double Dummy_886 = Dummy_876*2.0;
       const double Dummy_887 = Dummy_878*2.0;
       const double Dummy_888 = Dummy_879*2.0;
       const double Dummy_889 = Dummy_874*-2.0;
       const double Dummy_890 = Dummy_877*-2.0;
       const double Dummy_891 = Dummy_880*-2.0;
       const double Dummy_892 = Dummy_882*((Dummy_872*Dummy_872)*4.0 + (Dummy_875*Dummy_875)*4.0 + (Dummy_878*Dummy_878)*4.0);
       const double Dummy_893 = Dummy_882*((Dummy_873*Dummy_873)*4.0 + (Dummy_876*Dummy_876)*4.0 + (Dummy_879*Dummy_879)*4.0);
       const double Dummy_894 = Dummy_882*((Dummy_874*Dummy_874)*4.0 + (Dummy_877*Dummy_877)*4.0 + (Dummy_880*Dummy_880)*4.0);
       const double Dummy_895 = Dummy_882*(((-Dummy_883 + Dummy_884)*(-Dummy_883 + Dummy_884)) + ((-Dummy_885 + Dummy_886)*(-Dummy_885 + Dummy_886)) + ((-Dummy_887 + Dummy_888)*(-Dummy_887 + Dummy_888)));
       const double Dummy_896 = Dummy_882*(((Dummy_883 + Dummy_889)*(Dummy_883 + Dummy_889)) + ((Dummy_885 + Dummy_890)*(Dummy_885 + Dummy_890)) + ((Dummy_887 + Dummy_891)*(Dummy_887 + Dummy_891)));
       const double Dummy_897 = Dummy_882*(((-Dummy_884 - Dummy_889)*(-Dummy_884 - Dummy_889)) + ((-Dummy_886 - Dummy_890)*(-Dummy_886 - Dummy_890)) + ((-Dummy_888 - Dummy_891)*(-Dummy_888 - Dummy_891)));
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
       const double Dummy_898 = tmp_BLUE_DOWN_1;
       const double Dummy_899 = tmp_BLUE_DOWN_2;
       const double Dummy_900 = tmp_BLUE_DOWN_3;
       const double Dummy_901 = tmp_BLUE_DOWN_5;
       const double Dummy_902 = tmp_BLUE_DOWN_7;
       const double Dummy_903 = tmp_BLUE_DOWN_9;
       const double Dummy_904 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const double Dummy_905 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const double Dummy_906 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const double Dummy_907 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const double Dummy_908 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const double Dummy_909 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const double Dummy_910 = -Dummy_898 + Dummy_901;
       const double Dummy_911 = -Dummy_898 + Dummy_904;
       const double Dummy_912 = -Dummy_898 + Dummy_907;
       const double Dummy_913 = -Dummy_899 + Dummy_902;
       const double Dummy_914 = -Dummy_899 + Dummy_905;
       const double Dummy_915 = -Dummy_899 + Dummy_908;
       const double Dummy_916 = -Dummy_900 + Dummy_903;
       const double Dummy_917 = -Dummy_900 + Dummy_906;
       const double Dummy_918 = -Dummy_900 + Dummy_909;
       const double Dummy_919 = fabs(Dummy_910*Dummy_914*Dummy_918 - Dummy_910*Dummy_915*Dummy_917 - Dummy_911*Dummy_913*Dummy_918 + Dummy_911*Dummy_915*Dummy_916 + Dummy_912*Dummy_913*Dummy_917 - Dummy_912*Dummy_914*Dummy_916);
       const double Dummy_920 = 1.0 / (Dummy_919)*0.16666666666666666;
       const double Dummy_921 = Dummy_910*2.0;
       const double Dummy_922 = Dummy_911*2.0;
       const double Dummy_923 = Dummy_913*2.0;
       const double Dummy_924 = Dummy_914*2.0;
       const double Dummy_925 = Dummy_916*2.0;
       const double Dummy_926 = Dummy_917*2.0;
       const double Dummy_927 = Dummy_912*-2.0;
       const double Dummy_928 = Dummy_915*-2.0;
       const double Dummy_929 = Dummy_918*-2.0;
       const double Dummy_930 = Dummy_920*((Dummy_910*Dummy_910)*4.0 + (Dummy_913*Dummy_913)*4.0 + (Dummy_916*Dummy_916)*4.0);
       const double Dummy_931 = Dummy_920*((Dummy_911*Dummy_911)*4.0 + (Dummy_914*Dummy_914)*4.0 + (Dummy_917*Dummy_917)*4.0);
       const double Dummy_932 = Dummy_920*((Dummy_912*Dummy_912)*4.0 + (Dummy_915*Dummy_915)*4.0 + (Dummy_918*Dummy_918)*4.0);
       const double Dummy_933 = Dummy_920*(((-Dummy_921 + Dummy_922)*(-Dummy_921 + Dummy_922)) + ((-Dummy_923 + Dummy_924)*(-Dummy_923 + Dummy_924)) + ((-Dummy_925 + Dummy_926)*(-Dummy_925 + Dummy_926)));
       const double Dummy_934 = Dummy_920*(((Dummy_921 + Dummy_927)*(Dummy_921 + Dummy_927)) + ((Dummy_923 + Dummy_928)*(Dummy_923 + Dummy_928)) + ((Dummy_925 + Dummy_929)*(Dummy_925 + Dummy_929)));
       const double Dummy_935 = Dummy_920*(((-Dummy_922 - Dummy_927)*(-Dummy_922 - Dummy_927)) + ((-Dummy_924 - Dummy_928)*(-Dummy_924 - Dummy_928)) + ((-Dummy_926 - Dummy_929)*(-Dummy_926 - Dummy_929)));
       const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_936 = tmp_GREEN_UP_1;
       const double Dummy_937 = tmp_GREEN_UP_2;
       const double Dummy_938 = tmp_GREEN_UP_3;
       const double Dummy_939 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double Dummy_940 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double Dummy_941 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_942 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const double Dummy_943 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const double Dummy_944 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const double Dummy_945 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const double Dummy_946 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const double Dummy_947 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const double Dummy_948 = -Dummy_936 + Dummy_939;
       const double Dummy_949 = -Dummy_936 + Dummy_942;
       const double Dummy_950 = -Dummy_936 + Dummy_945;
       const double Dummy_951 = -Dummy_937 + Dummy_940;
       const double Dummy_952 = -Dummy_937 + Dummy_943;
       const double Dummy_953 = -Dummy_937 + Dummy_946;
       const double Dummy_954 = -Dummy_938 + Dummy_941;
       const double Dummy_955 = -Dummy_938 + Dummy_944;
       const double Dummy_956 = -Dummy_938 + Dummy_947;
       const double Dummy_957 = fabs(Dummy_948*Dummy_952*Dummy_956 - Dummy_948*Dummy_953*Dummy_955 - Dummy_949*Dummy_951*Dummy_956 + Dummy_949*Dummy_953*Dummy_954 + Dummy_950*Dummy_951*Dummy_955 - Dummy_950*Dummy_952*Dummy_954);
       const double Dummy_958 = 1.0 / (Dummy_957)*0.16666666666666666;
       const double Dummy_959 = Dummy_948*2.0;
       const double Dummy_960 = Dummy_949*2.0;
       const double Dummy_961 = Dummy_951*2.0;
       const double Dummy_962 = Dummy_952*2.0;
       const double Dummy_963 = Dummy_954*2.0;
       const double Dummy_964 = Dummy_955*2.0;
       const double Dummy_965 = Dummy_950*-2.0;
       const double Dummy_966 = Dummy_953*-2.0;
       const double Dummy_967 = Dummy_956*-2.0;
       const double Dummy_968 = Dummy_958*((Dummy_948*Dummy_948)*4.0 + (Dummy_951*Dummy_951)*4.0 + (Dummy_954*Dummy_954)*4.0);
       const double Dummy_969 = Dummy_958*((Dummy_949*Dummy_949)*4.0 + (Dummy_952*Dummy_952)*4.0 + (Dummy_955*Dummy_955)*4.0);
       const double Dummy_970 = Dummy_958*((Dummy_950*Dummy_950)*4.0 + (Dummy_953*Dummy_953)*4.0 + (Dummy_956*Dummy_956)*4.0);
       const double Dummy_971 = Dummy_958*(((-Dummy_959 + Dummy_960)*(-Dummy_959 + Dummy_960)) + ((-Dummy_961 + Dummy_962)*(-Dummy_961 + Dummy_962)) + ((-Dummy_963 + Dummy_964)*(-Dummy_963 + Dummy_964)));
       const double Dummy_972 = Dummy_958*(((Dummy_959 + Dummy_965)*(Dummy_959 + Dummy_965)) + ((Dummy_961 + Dummy_966)*(Dummy_961 + Dummy_966)) + ((Dummy_963 + Dummy_967)*(Dummy_963 + Dummy_967)));
       const double Dummy_973 = Dummy_958*(((-Dummy_960 - Dummy_965)*(-Dummy_960 - Dummy_965)) + ((-Dummy_962 - Dummy_966)*(-Dummy_962 - Dummy_966)) + ((-Dummy_964 - Dummy_967)*(-Dummy_964 - Dummy_967)));
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
       const double Dummy_974 = tmp_GREEN_DOWN_1;
       const double Dummy_975 = tmp_GREEN_DOWN_2;
       const double Dummy_976 = tmp_GREEN_DOWN_3;
       const double Dummy_977 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const double Dummy_978 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const double Dummy_979 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const double Dummy_980 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const double Dummy_981 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const double Dummy_982 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const double Dummy_983 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const double Dummy_984 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const double Dummy_985 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const double Dummy_986 = -Dummy_974 + Dummy_977;
       const double Dummy_987 = -Dummy_974 + Dummy_980;
       const double Dummy_988 = -Dummy_974 + Dummy_983;
       const double Dummy_989 = -Dummy_975 + Dummy_978;
       const double Dummy_990 = -Dummy_975 + Dummy_981;
       const double Dummy_991 = -Dummy_975 + Dummy_984;
       const double Dummy_992 = -Dummy_976 + Dummy_979;
       const double Dummy_993 = -Dummy_976 + Dummy_982;
       const double Dummy_994 = -Dummy_976 + Dummy_985;
       const double Dummy_995 = fabs(Dummy_986*Dummy_990*Dummy_994 - Dummy_986*Dummy_991*Dummy_993 - Dummy_987*Dummy_989*Dummy_994 + Dummy_987*Dummy_991*Dummy_992 + Dummy_988*Dummy_989*Dummy_993 - Dummy_988*Dummy_990*Dummy_992);
       const double Dummy_996 = 1.0 / (Dummy_995)*0.16666666666666666;
       const double Dummy_997 = Dummy_986*2.0;
       const double Dummy_998 = Dummy_987*2.0;
       const double Dummy_999 = Dummy_989*2.0;
       const double Dummy_1000 = Dummy_990*2.0;
       const double Dummy_1001 = Dummy_992*2.0;
       const double Dummy_1002 = Dummy_993*2.0;
       const double Dummy_1003 = Dummy_988*-2.0;
       const double Dummy_1004 = Dummy_991*-2.0;
       const double Dummy_1005 = Dummy_994*-2.0;
       const double Dummy_1006 = Dummy_996*((Dummy_986*Dummy_986)*4.0 + (Dummy_989*Dummy_989)*4.0 + (Dummy_992*Dummy_992)*4.0);
       const double Dummy_1007 = Dummy_996*((Dummy_987*Dummy_987)*4.0 + (Dummy_990*Dummy_990)*4.0 + (Dummy_993*Dummy_993)*4.0);
       const double Dummy_1008 = Dummy_996*((Dummy_988*Dummy_988)*4.0 + (Dummy_991*Dummy_991)*4.0 + (Dummy_994*Dummy_994)*4.0);
       const double Dummy_1009 = Dummy_996*(((Dummy_1000 - Dummy_999)*(Dummy_1000 - Dummy_999)) + ((-Dummy_1001 + Dummy_1002)*(-Dummy_1001 + Dummy_1002)) + ((-Dummy_997 + Dummy_998)*(-Dummy_997 + Dummy_998)));
       const double Dummy_1010 = Dummy_996*(((Dummy_1001 + Dummy_1005)*(Dummy_1001 + Dummy_1005)) + ((Dummy_1003 + Dummy_997)*(Dummy_1003 + Dummy_997)) + ((Dummy_1004 + Dummy_999)*(Dummy_1004 + Dummy_999)));
       const double Dummy_1011 = Dummy_996*(((-Dummy_1000 - Dummy_1004)*(-Dummy_1000 - Dummy_1004)) + ((-Dummy_1002 - Dummy_1005)*(-Dummy_1002 - Dummy_1005)) + ((-Dummy_1003 - Dummy_998)*(-Dummy_1003 - Dummy_998)));
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_0,elMatDiag_0,elMatDiag_0,elMatDiag_0),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_1,elMatDiag_1,elMatDiag_1,elMatDiag_1),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_2,elMatDiag_2,elMatDiag_2,elMatDiag_2),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_3,elMatDiag_3,elMatDiag_3,elMatDiag_3),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_4,elMatDiag_4,elMatDiag_4,elMatDiag_4),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(elMatDiag_5,elMatDiag_5,elMatDiag_5,elMatDiag_5),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_4 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_854,Dummy_854,Dummy_854,Dummy_854),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_855,Dummy_855,Dummy_855,Dummy_855),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_856,Dummy_856,Dummy_856,Dummy_856),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_857,Dummy_857,Dummy_857,Dummy_857),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_858,Dummy_858,Dummy_858,Dummy_858),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_859,Dummy_859,Dummy_859,Dummy_859),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_854 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = Dummy_855 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_856 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_857 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_858 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_859 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_892,Dummy_892,Dummy_892,Dummy_892),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_893,Dummy_893,Dummy_893,Dummy_893),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_894,Dummy_894,Dummy_894,Dummy_894),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_895,Dummy_895,Dummy_895,Dummy_895),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_896,Dummy_896,Dummy_896,Dummy_896),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_897,Dummy_897,Dummy_897,Dummy_897),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_892 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_893 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_894 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_895 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_896 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_897 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_930,Dummy_930,Dummy_930,Dummy_930),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_931,Dummy_931,Dummy_931,Dummy_931),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_932,Dummy_932,Dummy_932,Dummy_932),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_933,Dummy_933,Dummy_933,Dummy_933),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_934,Dummy_934,Dummy_934,Dummy_934),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_935,Dummy_935,Dummy_935,Dummy_935),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_930 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_931 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_932 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_933 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_934 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_935 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_968,Dummy_968,Dummy_968,Dummy_968),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_969,Dummy_969,Dummy_969,Dummy_969),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_970,Dummy_970,Dummy_970,Dummy_970),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_971,Dummy_971,Dummy_971,Dummy_971),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_972,Dummy_972,Dummy_972,Dummy_972),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_973,Dummy_973,Dummy_973,Dummy_973),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_968 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_969 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_970 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_971 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_972 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_973 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_1006,Dummy_1006,Dummy_1006,Dummy_1006),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_1007,Dummy_1007,Dummy_1007,Dummy_1007),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_1008,Dummy_1008,Dummy_1008,Dummy_1008),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_1009,Dummy_1009,Dummy_1009,Dummy_1009),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_1010,Dummy_1010,Dummy_1010,Dummy_1010),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))],_mm256_add_pd(_mm256_set_pd(Dummy_1011,Dummy_1011,Dummy_1011,Dummy_1011),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_1006 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_1007 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = Dummy_1008 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_1009 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
                _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = Dummy_1010 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = Dummy_1011 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
