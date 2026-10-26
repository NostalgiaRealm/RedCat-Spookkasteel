/*
 * FUN_004968e4 at 004968e4
 * undefined4 __register FUN_004968e4(int * param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 004968e4-0049690c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004968e4(int *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  return uVar1;
}

