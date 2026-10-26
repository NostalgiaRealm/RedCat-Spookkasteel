/*
 * FUN_00409c80 at 00409c80
 * undefined4 __register FUN_00409c80(byte * param_1, undefined4 param_2, int param_3)
 * Address ranges: 00409c80-00409c95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00409c80(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_3;
  uVar1 = FUN_00402d88(param_1,&local_8);
  if (local_8 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}

