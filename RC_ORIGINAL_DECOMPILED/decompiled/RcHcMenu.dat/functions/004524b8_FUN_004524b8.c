/*
 * FUN_004524b8 at 004524b8
 * uint __register FUN_004524b8(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004524b8-004524dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004524b8(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xb2) != 0) {
    param_1 = (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}

