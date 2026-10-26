/*
 * FUN_0052caa4 at 0052caa4
 * undefined __register FUN_0052caa4(int param_1, int param_2)
 * Address ranges: 0052caa4-0052cb02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052caa4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (-1 < param_2) {
    iVar1 = FUN_0045da14(*(int *)(param_1 + 0x80));
    if (param_2 < iVar1) goto LAB_0052cadd;
  }
  FUN_00403d94("Assertion failure");
LAB_0052cadd:
  piVar2 = (int *)FUN_004e25c4(*(int **)(param_1 + 0x80),param_2);
  piVar3 = (int *)FUN_00549b80(param_1);
  FUN_00493768(piVar2,piVar3);
  return;
}

