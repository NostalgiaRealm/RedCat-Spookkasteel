/*
 * FUN_005c5340 at 005c5340
 * undefined FUN_005c5340(void)
 * Address ranges: 005c5340-005c5412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c5340(void)

{
  int iVar1;
  int iVar2;
  byte local_5;
  
  iVar1 = FUN_005cd390(1);
  if (iVar1 == 0) {
    return 0;
  }
  if (((local_5 & 0x20) == 0) && (iVar1 = FUN_005cd390(1), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_005c4aa0();
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_5 & 0x40) == 0) {
    iVar2 = FUN_005c6a70();
    iVar2 = FUN_005cd390(iVar2 * *(int *)(iVar1 + 0xc));
    if (iVar2 != 0) {
      return iVar1;
    }
    FUN_005cf400(iVar1);
    _DAT_007203c0 = 0;
    return 0;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x13b8,
               &DAT_006b3f70,0);
  return 0;
}

