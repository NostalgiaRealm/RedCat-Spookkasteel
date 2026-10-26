/*
 * FUN_004f5be8 at 004f5be8
 * undefined __register FUN_004f5be8(int param_1, char param_2)
 * Address ranges: 004f5be8-004f5c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5be8(int param_1,char param_2)

{
  WPARAM WVar1;
  
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    if (param_2 == '\0') {
      WVar1 = FUN_004f5a64(param_1);
      *(undefined1 *)(param_1 + 0x1f9) = 0;
      FUN_004f5fc4(*(int **)(param_1 + 500),param_1,WVar1);
    }
    else {
      *(undefined1 *)(param_1 + 0x1f9) = 1;
      FUN_004f62dc(*(int **)(param_1 + 500),param_1);
    }
  }
  return;
}

