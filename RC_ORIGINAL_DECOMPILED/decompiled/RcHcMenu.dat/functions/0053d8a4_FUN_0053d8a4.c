/*
 * FUN_0053d8a4 at 0053d8a4
 * undefined4 __register FUN_0053d8a4(int param_1)
 * Address ranges: 0053d8a4-0053d924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0053d8a4(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))();
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x84) == '\0') {
        FUN_004d6cb4(*(int **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
        *(undefined1 *)(param_1 + 0x84) = 1;
      }
      goto LAB_0053d912;
    }
  }
  FUN_00494398(*(int **)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x84) = 0;
LAB_0053d912:
  return *(undefined4 *)(param_1 + 0x80);
}

