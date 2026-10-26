/*
 * FUN_10005f10 at 10005f10
 * undefined FUN_10005f10(void)
 * Address ranges: 10005f10-100063aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005f10(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_1014e368;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = FUN_100127d0();
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_ConvertGBSPToFile__FixModelTJunc_100371f4);
    return 0;
  }
  DAT_1014e314 = FUN_10014310(DAT_103df888 * 4);
  DAT_1014e2a8 = DAT_1041e090;
  DAT_1014e248 = &DAT_1041e0a8;
  iVar2 = FUN_10007350();
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_ConvertGBSPToFile__Could_not_Pre_100371c8);
    return 0;
  }
  iVar2 = FUN_10014700(param_1,0,4);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_ConvertGBSPToFile__geVFile_OpenN_10037194);
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10036d34;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_1014e260;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DAT_1014e264 = 0;
  DAT_1014e268 = 0xf;
  GetSystemTime((LPSYSTEMTIME)&DAT_1014e26c);
  local_c = 0;
  local_8 = 0x1c;
  local_4 = 1;
  FUN_10004d50(&local_c,&DAT_1014e260,iVar2);
  DAT_1014e2a0 = DAT_1014e628;
  DAT_1014e2ac = &DAT_1014e638;
  iVar3 = FUN_100063b0(iVar2);
  if (iVar3 == 0) {
    (*DAT_1014e358)(s_ConvertGBSPToFile__SaveGFXModelD_10037164);
    return 0;
  }
  iVar3 = FUN_100065c0(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006790(iVar2);
  if (iVar3 == 0) {
    (*DAT_1014e358)(s_ConvertGBSPToFile__SaveGFXLeafs_f_10037138);
    return 0;
  }
  iVar3 = FUN_10006890(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006920(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006bc0(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006a90(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006b10(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006c20(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006c80(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10006e20(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_100070a0(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10004530(iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  local_c = 0xffff;
  local_4 = 0;
  local_8 = 0;
  FUN_10004d50(&local_c,0,iVar2);
  FUN_10014990();
  (*DAT_1014e35c)(s_____Save_GBSP_File_____1003711c);
  (*DAT_1014e35c)(s_Num_Models____5i___6i_100370f8,DAT_1003fdf4,DAT_1003fdf4 * 0x50);
  (*DAT_1014e35c)(s_Num_Nodes____5i___6i_100370d4,DAT_1014e2ec,DAT_1014e2ec * 0x2c);
  (*DAT_1014e35c)(s_Num_Solid_Leafs____5i___6i_100370b0,DAT_1014e360,DAT_1014e360 * 0x3c);
  (*DAT_1014e35c)(s_Num_Total_Leafs____5i___6i_1003708c,DAT_1014e290,DAT_1014e290 * 0x3c);
  (*DAT_1014e35c)(s_Num_Clusters____5i___6i_10037068,DAT_1014e2e4,DAT_1014e2e4 * 4);
  (*DAT_1014e35c)(s_Num_Areas____5i___6i_10037044,DAT_1014e2a4 + -1,DAT_1014e2a4 * 8 + -8);
  (*DAT_1014e35c)(s_Num_Area_Portals____5i___6i_10037020,DAT_1014e2dc,DAT_1014e2dc * 8);
  (*DAT_1014e35c)(s_Num_Leafs_Sides____5i___6i_10036ffc,DAT_1014e2a0,DAT_1014e2a0 * 8);
  (*DAT_1014e35c)(s_Num_Planes____5i___6i_10036fd8,DAT_1014e1fc,DAT_1014e1fc * 0x14);
  (*DAT_1014e35c)(s_Num_Faces____5i___6i_10036fb4,DAT_1014e2c0,DAT_1014e2c0 * 0x24);
  (*DAT_1014e35c)(s_Num_Leaf_Faces____5i___6i_10036f90,DAT_1014e29c,DAT_1014e29c * 4);
  (*DAT_1014e35c)(s_Num_Vert_Index____5i___6i_10036f6c,DAT_1014e27c,DAT_1014e27c * 4);
  (*DAT_1014e35c)(s_Num_Verts____5i___6i_10036f48,DAT_1014e2a8,DAT_1014e2a8 * 0xc);
  (*DAT_1014e35c)(s_Num_FaceInfo____5i___6i_10036f24,DAT_1014e2bc,DAT_1014e2bc << 6);
  (*DAT_1014e35c)(s_Num_Textures____5i___6i_10036f00,DAT_1014e318,DAT_1014e318 * 0x34);
  (*DAT_1014e35c)(s_Motion_Data_Size____6i_10036edc,DAT_1014e2f0);
  (*DAT_1014e35c)(s_Tex_Data_Size____6i_10036eb8,DAT_1014e310);
  FUN_10014360(DAT_1014e314);
  _DAT_1003fde8 = 0;
  DAT_1014e314 = 0;
  DAT_1014e27c = 0;
  DAT_1014e248 = (undefined *)0x0;
  DAT_1014e2cc = 0;
  DAT_1014e2ac = (undefined *)0x0;
  DAT_1014e2a0 = 0;
  FUN_100052c0();
  return 1;
}

