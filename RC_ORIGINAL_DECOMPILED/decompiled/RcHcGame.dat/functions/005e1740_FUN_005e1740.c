/*
 * FUN_005e1740 at 005e1740
 * undefined FUN_005e1740(void)
 * Address ranges: 005e1740-005e17d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005e1740(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  uVar1 = param_1;
  iVar2 = FUN_005cd3f0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005cd390(8);
  if (iVar2 == 0) {
    return 0;
  }
  if (iStack_8 != 0x31305444) {
    return 0;
  }
  iVar2 = FUN_005e17e0(uVar1,&param_1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_005cd3f0();
  if (iStack_4 != iStack_10 - local_c) {
    FUN_005e1470(param_1);
    return 0;
  }
  return param_1;
}

