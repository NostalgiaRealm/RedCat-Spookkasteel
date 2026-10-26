/*
 * FUN_0041e1a8 at 0041e1a8
 * undefined __register FUN_0041e1a8(HANDLE param_1, int * param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 0041e1a8-0041e20a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041e1a8(HANDLE param_1,int *param_2,undefined4 *param_3,uint param_4)

{
  uint local_2c [3];
  ushort local_1e;
  byte local_1c;
  undefined4 local_18;
  int local_c;
  
  FUN_0041e0c4(param_1,local_2c,param_4);
  if (local_1e < 9) {
    if (local_c == 0) {
      *param_2 = (1 << ((byte)local_1e & 0x1f)) * 4 + 0x28;
    }
    else {
      *param_2 = local_c * 4 + 0x28;
    }
  }
  else {
    *param_2 = 0x28;
    if ((local_1c & 3) != 0) {
      *param_2 = *param_2 + 0xc;
    }
  }
  *param_3 = local_18;
  return;
}

