/*
 * FUN_005e4540 at 005e4540
 * undefined FUN_005e4540(void)
 * Address ranges: 005e4540-005e4563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e4540(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    param_2 = *(uint *)(param_1 + 4) | param_2;
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = param_2 | 4;
    }
    FUN_005fe7e4(param_2,param_3);
  }
  return;
}

