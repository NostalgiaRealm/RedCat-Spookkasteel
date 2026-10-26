/*
 * FUN_100071c0 at 100071c0
 * undefined FUN_100071c0(void)
 * Address ranges: 100071c0-1000734c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100071c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    param_1[0x33] = 0xffffffff;
    param_1[0x34] = 0;
  }
  else {
    iVar1 = FUN_1000e480(*param_1,param_1,1);
    if (iVar1 == 0) {
      (*DAT_1014e35c)(s_PrepGBSPModel__Could_not_create_V_10037640);
      return 0;
    }
    param_1[0x33] = DAT_1014e62c;
    iVar1 = FUN_10007490(*param_1);
    if (iVar1 == 0) {
      (*DAT_1014e358)(s_Could_not_create_leaf_clusters__1003761c);
      return 0;
    }
    param_1[0x34] = DAT_1014e62c - param_1[0x33];
    iVar1 = FUN_1000f460(param_1,&DAT_1014e368);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_1000ee80(*param_1);
    if (iVar1 == 0) {
      (*DAT_1014e35c)(s_PrepGBSPModel__Could_not_free_po_100375f0);
      return 0;
    }
  }
  iVar1 = FUN_1000e480(*param_1,param_1,0);
  if (iVar1 == 0) {
    (*DAT_1014e35c)(s_PrepGBSPModel__Could_not_create_R_100375c0);
    return 0;
  }
  iVar1 = FUN_10007820(*param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_Could_not_create_leaf_sides__100375a0);
    return 0;
  }
  if (param_1 == &DAT_100dc1f8) {
    iVar1 = FUN_10007c40(DAT_100dc1f8);
    if (iVar1 == 0) {
      (*DAT_1014e358)(s_Could_not_create_Areas__10037584);
      return 0;
    }
  }
  param_1[0x2f] = DAT_1014e2c0;
  param_1[0x31] = DAT_1014e290;
  uVar2 = FUN_10006d90(param_1[0x2d],*param_1);
  param_1[0x2d] = uVar2;
  param_1[0x30] = DAT_1014e2c0 - param_1[0x2f];
  param_1[0x32] = DAT_1014e290 - param_1[0x31];
  return 1;
}

