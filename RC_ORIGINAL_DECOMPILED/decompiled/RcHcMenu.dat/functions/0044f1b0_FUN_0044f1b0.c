/*
 * FUN_0044f1b0 at 0044f1b0
 * undefined __register FUN_0044f1b0(int param_1, int * param_2)
 * Address ranges: 0044f1b0-0044f1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f1b0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_004121d8(*(int **)(param_1 + 0x44),(int)param_2);
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00446f0c);
  if ((char)uVar1 != '\0') {
    FUN_004121d8(*(int **)(param_1 + 0x40),(int)param_2);
    FUN_00451c1c(DAT_005737d4);
  }
  return;
}

