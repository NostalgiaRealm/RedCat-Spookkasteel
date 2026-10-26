/*
 * FUN_005f9870 at 005f9870
 * undefined FUN_005f9870(void)
 * Address ranges: 005f9870-005f9894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005f9870(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
    *param_1 = &PTR_LAB_00651388;
  }
  return;
}

