/*
 * FUN_004afea8 at 004afea8
 * undefined __register FUN_004afea8(int * param_1, int * param_2)
 * Address ranges: 004afea8-004afeeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004afea8(int *param_1,int *param_2)

{
  bool bVar1;
  
  FUN_004358f8(param_1,param_2);
  bVar1 = FUN_004afeec((int)param_1);
  if ((!bVar1) && ((char)param_1[0x7e] != '\0')) {
    param_2[2] = param_2[2] | 0x20;
    param_2[1] = param_2[1] & 0xfdffffff;
  }
  return;
}

