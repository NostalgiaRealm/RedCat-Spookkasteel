/*
 * FUN_00432904 at 00432904
 * undefined __register FUN_00432904(int param_1, short param_2)
 * Address ranges: 00432904-0043291c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432904(int param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x68)) {
    *(short *)(param_1 + 0x68) = param_2;
    FUN_00433700(param_1,0xb00f,0,0);
  }
  return;
}

