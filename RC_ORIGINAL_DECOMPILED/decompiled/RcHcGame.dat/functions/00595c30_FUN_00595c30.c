/*
 * FUN_00595c30 at 00595c30
 * undefined FUN_00595c30(void)
 * Address ranges: 00595c30-00595c7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00595c30(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_0049d890(param_2,param_3);
  cVar1 = FUN_00596610();
  if (cVar1 != '\0') {
    FUN_00596b00(param_3,param_2);
    FUN_00596150(param_2);
  }
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00594900(param_3,param_2);
  }
  return;
}

