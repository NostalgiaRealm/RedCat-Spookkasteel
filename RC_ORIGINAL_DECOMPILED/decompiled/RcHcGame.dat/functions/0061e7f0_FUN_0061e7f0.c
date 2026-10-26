/*
 * FUN_0061e7f0 at 0061e7f0
 * undefined FUN_0061e7f0(void)
 * Address ranges: 0061e7f0-0061e810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061e7f0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

