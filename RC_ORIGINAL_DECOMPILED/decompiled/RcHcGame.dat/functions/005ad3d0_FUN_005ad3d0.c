/*
 * FUN_005ad3d0 at 005ad3d0
 * undefined FUN_005ad3d0(void)
 * Address ranges: 005ad3d0-005ad3fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ad3d0(int param_1,char param_2)

{
  if (((*(char *)(param_1 + 0x44) != '\0') && (*(char *)(param_1 + 0x45) != '\0')) &&
     ((*(char *)(param_1 + 0x46) != '\0' || (param_2 != '\0')))) {
    FUN_005ad1a0();
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

