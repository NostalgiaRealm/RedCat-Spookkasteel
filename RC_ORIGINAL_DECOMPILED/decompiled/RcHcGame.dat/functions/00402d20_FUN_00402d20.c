/*
 * FUN_00402d20 at 00402d20
 * undefined FUN_00402d20(void)
 * Address ranges: 00402d20-00402d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00402d20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(int *)param_1[9] + 0xa8))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)param_1[9] + 0x9c))();
    if (*(int *)(iVar2 + 0x18) != 0) {
      if (*(char *)((int)param_1 + 0x15) == '\0') {
        FUN_00402a60(param_3);
        return;
      }
      (**(code **)(*param_1 + 4))(param_2,param_3);
    }
  }
  return;
}

