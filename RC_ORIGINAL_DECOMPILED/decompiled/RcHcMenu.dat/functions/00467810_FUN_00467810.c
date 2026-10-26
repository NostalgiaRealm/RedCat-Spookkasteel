/*
 * FUN_00467810 at 00467810
 * undefined __register FUN_00467810(int param_1, uint param_2)
 * Address ranges: 00467810-0046782c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467810(int param_1,uint param_2)

{
  *(char *)(param_1 + 0x21) = (char)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x1c) = (uint)(byte)(&DAT_00570740)[param_2 & 0x7f];
  FUN_00412c80(param_1,'\0');
  return;
}

