/*
 * FUN_1000e480 at 1000e480
 * undefined FUN_1000e480(void)
 * Address ranges: 1000e480-1000e534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000e480(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_____Create_Portals_____10038d34);
  }
  DAT_10312ff8 = param_3;
  DAT_10312ffc = param_2 + 0x14;
  DAT_10313010 = *(undefined4 *)(param_2 + 0x9c);
  DAT_10313014 = *(undefined4 *)(param_2 + 0xa0);
  _DAT_10313018 = *(undefined4 *)(param_2 + 0xa4);
  DAT_10313000 = *(undefined4 *)(param_2 + 0xa8);
  DAT_10313004 = *(undefined4 *)(param_2 + 0xac);
  _DAT_10313008 = *(undefined4 *)(param_2 + 0xb0);
  iVar1 = FUN_1000e5d0(param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_CreatePortals__Could_not_create_b_10038d04);
    return 0;
  }
  iVar1 = FUN_1000e8b0(param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_CreatePortals__Could_not_partiti_10038cd4);
    return 0;
  }
  return 1;
}

