/*
 * FUN_0043d940 at 0043d940
 * undefined __register FUN_0043d940(int param_1, int param_2)
 * Address ranges: 0043d940-0043d95e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d940(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  FUN_004121d8(*(int **)(param_1 + 0x24),param_2);
  *(int *)(param_2 + 0x4c) = param_1;
  FUN_00418fe0(param_2,param_1,extraout_ECX);
  return;
}

