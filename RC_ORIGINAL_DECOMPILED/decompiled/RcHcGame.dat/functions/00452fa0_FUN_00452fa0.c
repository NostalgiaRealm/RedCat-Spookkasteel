/*
 * FUN_00452fa0 at 00452fa0
 * undefined FUN_00452fa0(void)
 * Address ranges: 00452fa0-00452ff1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00452fa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int **)(param_1 + 0x78) != (int *)0x0) && (*(int *)(param_1 + 0x7c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x10))();
    iVar1 = FUN_00439cd0();
    if (iVar1 < 0) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 4))(0);
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))();
      return;
    }
    uVar2 = FUN_00439cd0();
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))(uVar2);
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))();
  }
  return;
}

