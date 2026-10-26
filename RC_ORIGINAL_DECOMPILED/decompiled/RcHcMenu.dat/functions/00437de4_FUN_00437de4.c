/*
 * FUN_00437de4 at 00437de4
 * undefined __register FUN_00437de4(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00437de4-00437e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437de4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  UINT UVar3;
  
  if (PTR_DAT_0057261c[9] != '\0') {
    uVar1 = FUN_00432d3c((int)param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((char)uVar1 == '\0') {
      if (*(int *)(*(int *)PTR_DAT_005723fc + 0x30) != 0) {
        UVar3 = 1;
        pCVar2 = FUN_004041f4(*(undefined **)(*(int *)PTR_DAT_005723fc + 0x30));
        LoadKeyboardLayoutA(pCVar2,UVar3);
        param_3 = extraout_ECX_01;
        param_2 = extraout_EDX_01;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_005723fc + 0x2c) != 0) {
      UVar3 = 1;
      pCVar2 = FUN_004041f4(*(undefined **)(*(int *)PTR_DAT_005723fc + 0x2c));
      LoadKeyboardLayoutA(pCVar2,UVar3);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
  }
  FUN_00403270(param_1,param_2,param_3);
  return;
}

