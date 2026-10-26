/*
 * FUN_005f7d00 at 005f7d00
 * undefined FUN_005f7d00(void)
 * Address ranges: 005f7d00-005f7d30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f7d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005f7a40(param_2,param_3);
  uVar1 = FUN_005f65c0(param_2,param_3);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_005eee90(param_2,param_1 + 0x14);
  return;
}

