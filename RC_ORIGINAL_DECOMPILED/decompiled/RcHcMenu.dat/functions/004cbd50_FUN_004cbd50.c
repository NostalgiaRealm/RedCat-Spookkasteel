/*
 * FUN_004cbd50 at 004cbd50
 * undefined __register FUN_004cbd50(int * param_1, int * param_2, char param_3)
 * Address ranges: 004cbd50-004cbdc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cbd50(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  
  FUN_0043426c(param_1,param_2,param_3);
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0043d40c);
  if ((char)uVar2 != '\0') {
    piVar3 = (int *)FUN_004cb908((int)param_1);
    cVar1 = (**(code **)(*piVar3 + 0x1c))();
    if ((((cVar1 != '\0') && (param_2[0x13] != 0)) && (*(int *)(param_2[0x13] + 0x2c) != 0)) &&
       (-1 < param_2[0x19])) {
      iVar4 = FUN_0043e8ec(*(int **)(param_2[0x13] + 0x2c));
      if (param_2[0x19] < iVar4) {
        FUN_004cbcc0(*(int **)(param_2[0x13] + 0x2c),param_2[0x19],extraout_ECX,
                     (int)&stack0xfffffffc);
      }
    }
  }
  return;
}

