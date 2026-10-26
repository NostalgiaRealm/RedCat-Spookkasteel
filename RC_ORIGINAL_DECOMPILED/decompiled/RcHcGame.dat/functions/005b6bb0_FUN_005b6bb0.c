/*
 * FUN_005b6bb0 at 005b6bb0
 * undefined FUN_005b6bb0(void)
 * Address ranges: 005b6bb0-005b6d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6bb0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_stack_00001690;
  int in_stack_00001694;
  
  FUN_0060df70();
  iVar4 = *(int *)(in_stack_00001694 + 0x9c);
  if (0 < iVar4) {
    puVar3 = (undefined4 *)&stack0x000002e8;
    puVar2 = (undefined4 *)&stack0x0000017c;
    puVar1 = (undefined4 *)(in_stack_00001694 + 4);
    do {
      puVar2[-2] = *puVar1;
      puVar2[-1] = puVar1[1];
      *puVar2 = puVar1[2];
      puVar3[-1] = puVar1[5];
      *puVar3 = puVar1[6];
      puVar3[1] = puVar1[7];
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 6;
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 9;
    } while (iVar4 != 0);
  }
  puVar5 = &stack0x00000174;
  param_1 = 0;
  do {
    iVar4 = FUN_005d1300();
    if (iVar4 == 0) {
      return;
    }
    if (puVar5 == &stack0x0000000c) {
      puVar5 = &stack0x000005ac;
    }
    else {
      puVar5 = &stack0x0000000c;
    }
    param_1 = param_1 + 1;
  } while (param_1 < 4);
  if (2 < param_2) {
    if (0 < param_2) {
      param_1 = param_2;
      do {
        FUN_005c9410();
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_005d14d0();
    (**(code **)(in_stack_00001690 + 0x78))();
  }
  return;
}

