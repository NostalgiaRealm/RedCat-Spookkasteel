/*
 * FUN_00458fd0 at 00458fd0
 * undefined FUN_00458fd0(void)
 * Address ranges: 00458fd0-0045900b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00458fd0(int param_1,int param_2)

{
  if (((param_2 != *(int *)(param_1 + 0x450)) && (4 < param_2)) && (param_2 < 0xc)) {
    *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x450);
    *(int *)(param_1 + 0x450) = param_2;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x484) = 0;
  }
  return;
}

