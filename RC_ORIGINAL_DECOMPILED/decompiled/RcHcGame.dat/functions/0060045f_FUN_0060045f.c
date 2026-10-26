/*
 * FUN_0060045f at 0060045f
 * undefined FUN_0060045f(void)
 * Address ranges: 0060045f-00600480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0060045f(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_00600481();
    if (iVar1 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

