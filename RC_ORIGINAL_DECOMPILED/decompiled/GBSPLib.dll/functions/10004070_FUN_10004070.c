/*
 * FUN_10004070 at 10004070
 * undefined FUN_10004070(void)
 * Address ranges: 10004070-1000425f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004070(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10003050(param_2);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_ProcessWorldModel__Could_not_mak_100369d8);
    return 0;
  }
  uVar2 = FUN_10002410(iVar1);
  uVar2 = FUN_10003970(uVar2);
  param_1[0x27] = DAT_1014e208;
  param_1[0x28] = DAT_1014e20c;
  param_1[0x29] = DAT_1014e210;
  param_1[0x2a] = DAT_1014e220;
  param_1[0x2b] = DAT_1014e224;
  param_1[0x2c] = DAT_1014e228;
  iVar1 = FUN_1000e480(uVar2,param_1,0);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_Could_not_create_the_portals__100369b8);
    return 0;
  }
  iVar1 = FUN_10004c10(uVar2,&DAT_100dc20c);
  if (iVar1 == -1) {
    (*DAT_1014e35c)(s_Failed_to_remove_hidden_leafs__10036998);
    return 0;
  }
  FUN_10002e40(uVar2,param_2);
  iVar1 = FUN_1000ee80(uVar2);
  if (iVar1 != 0) {
    FUN_10004030(uVar2);
    iVar1 = FUN_10003050(param_2);
    if (iVar1 == 0) {
      (*DAT_1014e358)(s_ProcessWorldModel__Could_not_mak_100369d8);
      return 0;
    }
    uVar2 = FUN_10002410(iVar1);
    uVar2 = FUN_10003970(uVar2);
    param_1[0x27] = DAT_1014e208;
    param_1[0x28] = DAT_1014e20c;
    param_1[0x29] = DAT_1014e210;
    param_1[0x2a] = DAT_1014e220;
    param_1[0x2b] = DAT_1014e224;
    param_1[0x2c] = DAT_1014e228;
    iVar1 = FUN_1000e480(uVar2,param_1,0);
    if (iVar1 == 0) {
      (*DAT_1014e358)(s_Could_not_create_the_portals__100369b8);
      return 0;
    }
    iVar1 = FUN_10004c10(uVar2,&DAT_100dc20c);
    if (iVar1 == -1) {
      (*DAT_1014e35c)(s_Failed_to_remove_hidden_leafs__10036998);
      return 0;
    }
    FUN_10002e40(uVar2,param_2);
    FUN_10003e30(uVar2);
    FUN_10003d70(uVar2);
    iVar1 = FUN_1000ee80(uVar2);
    if (iVar1 != 0) {
      FUN_10003fe0(uVar2);
      *param_1 = uVar2;
      return 1;
    }
  }
  (*DAT_1014e35c)(s_BuildBSP__Could_not_free_portals_10036974);
  return 0;
}

