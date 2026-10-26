/*
 * FUN_004958c8 at 004958c8
 * undefined4 __register FUN_004958c8(undefined4 param_1, uint param_2)
 * Address ranges: 004958c8-004958f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004958c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 local_d;
  
  iVar1 = param_2 - 2;
  if ((param_2 < 2) || (iVar1 = param_2 - 0x100, iVar1 == 0)) {
    local_d = 1;
  }
  else {
    local_d = 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),local_d);
}

