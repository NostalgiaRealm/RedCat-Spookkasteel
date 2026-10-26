/*
 * FUN_00402750 at 00402750
 * undefined FUN_00402750(void)
 * Address ranges: 00402750-00402799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00402750(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_00402a80();
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  else {
    FUN_00403950(param_2,param_3);
  }
  return;
}

