/*
 * FUN_10001c30 at 10001c30
 * undefined FUN_10001c30(void)
 * Address ranges: 10001c30-10001c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001c30(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x60))(*(int **)(param_1 + 8));
    if (iVar1 == -0x7789fe3e) {
      iVar1 = FUN_10001480(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      ShowWindow(*(HWND *)(param_1 + 0x24),1);
    }
  }
  return 1;
}

