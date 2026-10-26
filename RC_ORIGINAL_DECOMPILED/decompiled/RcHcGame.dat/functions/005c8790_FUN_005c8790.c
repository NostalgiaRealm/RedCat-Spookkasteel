/*
 * FUN_005c8790 at 005c8790
 * undefined FUN_005c8790(void)
 * Address ranges: 005c8790-005c8816
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c8790(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005cd400();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005cf3b0(param_1);
  if (iVar1 == 0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x318,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar2 = FUN_005cd390(param_1);
  if (iVar2 == 0) {
    FUN_005cf400(iVar1);
    _DAT_007203c0 = 0;
    return 0;
  }
  *param_2 = iVar1;
  return 1;
}

