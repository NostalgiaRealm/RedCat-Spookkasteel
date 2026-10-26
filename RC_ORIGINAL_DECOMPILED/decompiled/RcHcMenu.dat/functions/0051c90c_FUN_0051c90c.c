/*
 * FUN_0051c90c at 0051c90c
 * undefined __register FUN_0051c90c(int param_1, char param_2)
 * Address ranges: 0051c90c-0051c980
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c90c(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  if (*(char *)(param_1 + 8) != param_2) {
    *(char *)(param_1 + 8) = param_2;
    if (param_2 == '\0') {
      iVar2 = FUN_0051e2e4(*(int *)(param_1 + 0x3c));
      FUN_0051cb0c(param_1,iVar2);
    }
    else {
      FUN_0051ced4(param_1,'\x01');
      uVar1 = FUN_0051e2e4(*(int *)(param_1 + 0x3c));
      iVar2 = uVar1 - 1;
      if (SBORROW4(uVar1,1)) {
        thunk_FUN_00402874(uVar1);
        iVar2 = extraout_EDX;
      }
      FUN_0051cb0c(param_1,iVar2);
    }
    FUN_0051f124(*(int **)(param_1 + 0x3c));
  }
  return;
}

