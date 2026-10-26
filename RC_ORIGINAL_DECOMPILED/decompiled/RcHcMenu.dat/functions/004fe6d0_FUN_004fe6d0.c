/*
 * FUN_004fe6d0 at 004fe6d0
 * undefined __register FUN_004fe6d0(int * param_1, int * param_2)
 * Address ranges: 004fe6d0-004fe729
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe6d0(int *param_1,int *param_2)

{
  FUN_00429918(param_1,param_2);
  param_2[1] = *(uint *)(&DAT_00571dc0 + (uint)((char)param_1[0x82] != '\0') * 4) | param_2[1] |
               0x2000000;
  param_2[1] = param_2[1] | *(uint *)(&DAT_00571db4 + (uint)*(byte *)(param_1 + 0x82) * 4);
  return;
}

