/*
 * FUN_00417774 at 00417774
 * undefined __register FUN_00417774(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 00417774-004177c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417774(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00418ed0(param_1,0xe,param_3);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (param_2 != 0) {
    iVar1 = FUN_0041300c(param_2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
    if (-1 < iVar1 + -1) {
      iVar5 = 0;
      do {
        FUN_00417e78(param_1,uVar4,uVar3);
        piVar2 = (int *)FUN_00413014(param_2,iVar5);
        FUN_00417ecc(param_1,piVar2);
        FUN_00417e80(param_1,extraout_EDX_01,extraout_ECX_01);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
        uVar3 = extraout_ECX_02;
        uVar4 = extraout_EDX_02;
      } while (iVar1 != 0);
    }
  }
  FUN_00417e80(param_1,uVar4,uVar3);
  return;
}

