/*
 * FUN_00516860 at 00516860
 * undefined __register FUN_00516860(int param_1, HKEY param_2)
 * Address ranges: 00516860-00516889
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516860(int param_1,HKEY param_2)

{
  if (param_2 != *(HKEY *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      RegCloseKey(*(HKEY *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    *(HKEY *)(param_1 + 8) = param_2;
    FUN_00516830(param_1);
  }
  return;
}

