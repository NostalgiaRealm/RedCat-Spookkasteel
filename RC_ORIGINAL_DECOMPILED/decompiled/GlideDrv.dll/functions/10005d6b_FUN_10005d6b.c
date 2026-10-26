/*
 * FUN_10005d6b at 10005d6b
 * undefined __cdecl FUN_10005d6b(int param_1, int param_2, byte * param_3)
 * Address ranges: 10005d6b-10005daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005d6b(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100e3a80 = DAT_100e3a80 + 1, DAT_100e3a80 == 0x20)) {
    FUN_10005c52(0x10);
  }
  return;
}

