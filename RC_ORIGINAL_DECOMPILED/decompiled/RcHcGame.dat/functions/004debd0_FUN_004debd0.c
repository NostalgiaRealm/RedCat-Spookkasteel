/*
 * FUN_004debd0 at 004debd0
 * undefined FUN_004debd0(void)
 * Address ranges: 004debd0-004dec06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004debd0(int param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x138) = param_2;
    return;
  }
  uStack_8 = param_2;
  uStack_c = param_2;
  FUN_004042e0(&uStack_c);
  FUN_004dec10();
  return;
}

