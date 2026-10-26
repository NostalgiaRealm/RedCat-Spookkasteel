/*
 * FUN_00591f80 at 00591f80
 * undefined FUN_00591f80(void)
 * Address ranges: 00591f80-00591f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00591f80(int param_1)

{
  FUN_0056eb70();
  if (*(int **)(param_1 + 0x19c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00591f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x19c) + 0xc))();
    return;
  }
  return;
}

