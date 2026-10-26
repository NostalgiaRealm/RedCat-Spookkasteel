/*
 * FUN_10004260 at 10004260
 * undefined FUN_10004260(void)
 * Address ranges: 10004260-10004322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004260(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10003050(param_2);
  uVar1 = FUN_10002410(uVar1);
  uVar1 = FUN_10003970(uVar1);
  param_1[0x27] = DAT_1014e208;
  param_1[0x28] = DAT_1014e20c;
  param_1[0x29] = DAT_1014e210;
  param_1[0x2a] = DAT_1014e220;
  param_1[0x2b] = DAT_1014e224;
  param_1[0x2c] = DAT_1014e228;
  iVar2 = FUN_1000e480(uVar1,param_1,0);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_Could_not_create_the_portals__100369b8);
    return 0;
  }
  FUN_10002e40(uVar1,param_2);
  FUN_10003e30(uVar1);
  iVar2 = FUN_1000ee80(uVar1);
  if (iVar2 == 0) {
    (*DAT_1014e35c)(s_BuildBSP__Could_not_free_portals_10036974);
    return 0;
  }
  FUN_10003fe0(uVar1);
  *param_1 = uVar1;
  return 1;
}

