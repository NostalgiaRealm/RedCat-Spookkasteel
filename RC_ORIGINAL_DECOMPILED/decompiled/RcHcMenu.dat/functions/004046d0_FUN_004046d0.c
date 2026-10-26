/*
 * FUN_004046d0 at 004046d0
 * undefined __register FUN_004046d0(int param_1, int param_2, UINT param_3, BSTR param_4)
 * Address ranges: 004046d0-00404718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004046d0(int param_1,int param_2,UINT param_3,BSTR param_4)

{
  uint uVar1;
  UINT UVar2;
  uint uVar3;
  
  uVar1 = FUN_004045c8(param_1);
  if (param_2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 - 1U;
    if ((int)uVar1 < (int)(param_2 - 1U)) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < 0) {
    UVar2 = 0;
  }
  else {
    UVar2 = uVar1 - uVar3;
    if ((int)param_3 < (int)(uVar1 - uVar3)) {
      UVar2 = param_3;
    }
  }
  FUN_00404558(param_4,(OLECHAR *)(uVar3 * 2 + param_1),UVar2);
  return;
}

