/*
 * FUN_0044a97c at 0044a97c
 * undefined __register FUN_0044a97c(int param_1, int * param_2, int param_3)
 * Address ranges: 0044a97c-0044aa0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a97c(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int local_14;
  
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0042e674);
  if ((char)uVar2 == '\0') {
    iVar3 = FUN_0043579c(param_1);
    local_14 = -1;
    iVar4 = FUN_00419530(param_1);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        piVar5 = (int *)FUN_00419504(param_1,iVar6);
        cVar1 = FUN_00403270(piVar5,extraout_EDX,extraout_ECX);
        if ((cVar1 == '\0') && (local_14 = local_14 + 1, local_14 == param_3 - iVar3)) {
          FUN_00419540((int)param_2,iVar6);
          return;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    FUN_00438f64(param_1,param_2,param_3);
  }
  return;
}

