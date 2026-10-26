/*
 * FUN_00615724 at 00615724
 * undefined FUN_00615724(void)
 * Address ranges: 00615724-0061574c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00615724(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = param_2;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 4);
      } while (iVar1 != 0);
      *(int *)(iVar2 + 4) = param_2;
    }
  }
  return;
}

