/*
 * FUN_004fe848 at 004fe848
 * undefined __register FUN_004fe848(int * param_1)
 * Address ranges: 004fe848-004fe894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe848(int *param_1)

{
  FUN_00436f20(param_1);
  (**(code **)(*param_1 + 0x74))();
  if (((char)param_1[0x85] != '\0') && ((char)param_1[0x7e] != '\0')) {
    FUN_004297c4(param_1);
  }
  *(undefined1 *)(param_1 + 0x85) = 1;
  return;
}

