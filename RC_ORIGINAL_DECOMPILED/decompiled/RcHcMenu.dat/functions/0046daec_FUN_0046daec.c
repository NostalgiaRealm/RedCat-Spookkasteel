/*
 * FUN_0046daec at 0046daec
 * undefined __register FUN_0046daec(int param_1, int * param_2)
 * Address ranges: 0046daec-0046db56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046daec(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_004687b0(param_1);
  *param_2 = *param_2 + iVar1;
  iVar1 = FUN_004687b0(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00468730(param_1,iVar4);
      if (*(char *)(iVar2 + 0x34) == '\x1a') {
        piVar3 = (int *)FUN_00468730(param_1,iVar4);
        piVar3 = (int *)FUN_00403224(piVar3,(int)&PTR_FUN_00465180);
        iVar2 = (**(code **)(*piVar3 + 0xd0))();
        FUN_0046daec(iVar2,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

