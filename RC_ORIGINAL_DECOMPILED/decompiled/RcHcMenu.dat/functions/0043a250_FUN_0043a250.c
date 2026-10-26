/*
 * FUN_0043a250 at 0043a250
 * undefined __register FUN_0043a250(int param_1)
 * Address ranges: 0043a250-0043a273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a250(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0043e3b4(param_1);
  if ((bVar1) && (*(int *)(param_1 + 100) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

