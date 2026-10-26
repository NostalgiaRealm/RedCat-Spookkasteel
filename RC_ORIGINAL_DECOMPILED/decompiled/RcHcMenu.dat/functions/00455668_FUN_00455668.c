/*
 * FUN_00455668 at 00455668
 * undefined __register FUN_00455668(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00455668-0045567f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455668(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_004555bc(param_1);
  return;
}

