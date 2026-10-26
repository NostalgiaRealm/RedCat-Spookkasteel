/*
 * FUN_0049d9d0 at 0049d9d0
 * undefined FUN_0049d9d0(void)
 * Address ranges: 0049d9d0-0049da03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049d9d0(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))();
  if ((code *)param_1[0x81] != (code *)0x0) {
    (*(code *)param_1[0x81])(param_1);
  }
  FUN_00505400(&DAT_006b9760);
  FUN_0049da10();
  FUN_00502220();
  return;
}

