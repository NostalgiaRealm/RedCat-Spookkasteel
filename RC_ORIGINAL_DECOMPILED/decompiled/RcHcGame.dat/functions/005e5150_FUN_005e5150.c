/*
 * FUN_005e5150 at 005e5150
 * undefined FUN_005e5150(void)
 * Address ranges: 005e5150-005e517e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005e5150(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0060e525(*(int *)(param_1 + 0x50),param_2,0,param_3);
    if (iVar1 == 0) {
      return param_1;
    }
  }
  return 0;
}

