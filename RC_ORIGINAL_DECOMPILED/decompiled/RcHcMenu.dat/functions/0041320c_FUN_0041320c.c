/*
 * FUN_0041320c at 0041320c
 * undefined __register FUN_0041320c(int * param_1, int * param_2)
 * Address ranges: 0041320c-00413291
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041320c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  FUN_00406aa0(param_2);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if (piVar1 == (int *)0x0) {
      uVar2 = FUN_0040320c(param_1,(int)&PTR_FUN_00411384);
      if (((char)uVar2 != '\0') && ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        FUN_00406aa0(param_2);
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      uVar2 = FUN_0040320c(param_1,(int)&PTR_FUN_00411384);
      if (((char)uVar2 == '\0') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        piVar3 = FUN_00406aa0(param_2);
        FUN_0041320c(piVar1,piVar3);
      }
    }
  }
  return;
}

