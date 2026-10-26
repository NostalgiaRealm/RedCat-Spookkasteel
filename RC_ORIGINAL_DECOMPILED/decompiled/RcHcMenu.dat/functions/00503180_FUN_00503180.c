/*
 * FUN_00503180 at 00503180
 * undefined __register FUN_00503180(int * param_1, byte param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 00503180-005031f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503180(int *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  LONG local_1c [2];
  uint local_14;
  undefined4 local_10;
  byte local_9;
  int *local_8;
  
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0041160c(param_3,param_4,local_1c);
  local_14 = FUN_0050300c(local_8,local_1c);
  if (local_14 != 0xffffffff) {
    if ((local_9 & 8) != 0) {
      FUN_00502cb0(local_8,local_14);
    }
    if ((char)local_8[0x85] != '\0') {
      FUN_00502d58(local_8,local_14);
    }
  }
  FUN_00433d10((int)local_8,local_9,local_10,param_4);
  return;
}

