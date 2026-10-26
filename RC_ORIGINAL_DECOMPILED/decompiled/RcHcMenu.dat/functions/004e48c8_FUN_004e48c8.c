/*
 * FUN_004e48c8 at 004e48c8
 * undefined __register FUN_004e48c8(int param_1, int param_2)
 * Address ranges: 004e48c8-004e4926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e48c8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (-1 < param_2) {
    iVar1 = FUN_0045da14(*(int *)(param_1 + 0x80));
    if (param_2 < iVar1) goto LAB_004e4901;
  }
  FUN_00403d94("Assertion failure");
LAB_004e4901:
  piVar2 = (int *)FUN_004e25c4(*(int **)(param_1 + 0x80),param_2);
  piVar3 = (int *)FUN_00549b80(param_1);
  FUN_00493768(piVar2,piVar3);
  return;
}

