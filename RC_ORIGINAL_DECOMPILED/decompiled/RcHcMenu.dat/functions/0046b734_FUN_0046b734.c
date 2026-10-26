/*
 * FUN_0046b734 at 0046b734
 * undefined __register FUN_0046b734(int param_1, undefined4 param_2, undefined4 param_3, double param_4)
 * Address ranges: 0046b734-0046b79a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046b734(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 extraout_ECX;
  
  if ((*(char *)(param_1 + 0xd9) != '\0') &&
     ((param_4 < *(double *)(param_1 + 0xe0) || (*(double *)(param_1 + 0xe8) < param_4)))) {
    FUN_0046aa44(param_1);
    param_3 = extraout_ECX;
  }
  FUN_00469acc(param_1,&param_4,CONCAT31((int3)((uint)param_3 >> 8),1));
  return;
}

