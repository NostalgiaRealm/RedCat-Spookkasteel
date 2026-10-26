/*
 * FUN_0059a1b0 at 0059a1b0
 * undefined FUN_0059a1b0(void)
 * Address ranges: 0059a1b0-0059a273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059a1b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006443df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00599450(local_10);
  local_4 = 1;
  iVar1 = FUN_00597fa0();
  puVar3 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar1 + 4) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(iVar1 + 4);
  }
  FUN_00597fb0();
  uVar2 = __ftol();
  FUN_00597fb0(uVar2);
  uVar2 = __ftol();
  FUN_00597fb0(uVar2);
  uVar2 = __ftol();
  uVar2 = FUN_0059b1e0(uVar2);
  FUN_005ae390(param_1,s_waypoint___s___i_at___i__i__i__006a6f38,puVar3,uVar2);
  local_4 = local_4 & 0xffffff00;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_1;
}

