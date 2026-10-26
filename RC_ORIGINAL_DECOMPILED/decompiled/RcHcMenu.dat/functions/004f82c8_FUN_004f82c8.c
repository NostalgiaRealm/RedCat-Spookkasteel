/*
 * FUN_004f82c8 at 004f82c8
 * undefined4 __register FUN_004f82c8(int param_1, uint param_2)
 * Address ranges: 004f82c8-004f8305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f82c8(int param_1,uint param_2)

{
  undefined4 local_10;
  
  local_10 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < 0x65)) {
    if (100 < param_2) {
      param_2 = thunk_FUN_00402874(param_2);
    }
    local_10 = *(undefined4 *)(param_1 + 0x240 + param_2 * 4);
  }
  return local_10;
}

