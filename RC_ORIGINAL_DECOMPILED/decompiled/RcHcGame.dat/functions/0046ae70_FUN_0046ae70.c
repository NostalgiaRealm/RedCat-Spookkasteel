/*
 * FUN_0046ae70 at 0046ae70
 * undefined FUN_0046ae70(void)
 * Address ranges: 0046ae70-0046aea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046ae70(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00421560();
    if (cVar1 != '\0') {
      FUN_0046bd00(param_2,param_3);
      FUN_0046c3b0(param_2,param_3);
    }
  }
  return;
}

