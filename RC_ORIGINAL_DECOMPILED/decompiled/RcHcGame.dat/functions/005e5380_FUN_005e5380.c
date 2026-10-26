/*
 * FUN_005e5380 at 005e5380
 * undefined FUN_005e5380(void)
 * Address ranges: 005e5380-005e53c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e5380(int param_1,undefined4 param_2,char param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0x20;
  FUN_005feaf9();
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_005fe7e4(*(uint *)(param_1 + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_005feac4();
  }
  return;
}

