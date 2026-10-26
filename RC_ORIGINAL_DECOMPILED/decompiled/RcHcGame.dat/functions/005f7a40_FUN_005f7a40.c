/*
 * FUN_005f7a40 at 005f7a40
 * undefined FUN_005f7a40(void)
 * Address ranges: 005f7a40-005f7a70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f7a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005f6c60(param_2,param_3);
  uVar1 = FUN_005e9f10();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_005f65c0(param_2,param_3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

