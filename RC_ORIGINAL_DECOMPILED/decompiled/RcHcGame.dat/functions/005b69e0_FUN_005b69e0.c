/*
 * FUN_005b69e0 at 005b69e0
 * undefined FUN_005b69e0(void)
 * Address ranges: 005b69e0-005b6bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b69e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_stack_0000152c;
  int in_stack_00001530;
  int *in_stack_00001534;
  
  FUN_0060df70();
  iVar2 = *(int *)(in_stack_00001530 + 0x9c);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)&stack0x00000180;
    puVar4 = (undefined4 *)&stack0x00000018;
    puVar1 = (undefined4 *)(in_stack_00001530 + 4);
    iVar5 = iVar2;
    do {
      puVar4[-2] = *puVar1;
      puVar4[-1] = puVar1[1];
      *puVar4 = puVar1[2];
      puVar3[-2] = puVar1[3];
      puVar3[-1] = puVar1[4];
      *puVar3 = puVar1[5];
      puVar3[1] = puVar1[6];
      puVar3[2] = puVar1[7];
      puVar4 = puVar4 + 3;
      puVar3 = puVar3 + 6;
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + 9;
    } while (iVar5 != 0);
  }
  param_1 = 0;
  if (0 < *in_stack_00001534) {
    do {
      iVar2 = FUN_005d0f10();
      if (iVar2 == 0) {
        return;
      }
      param_1 = param_1 + 1;
      iVar2 = param_3;
    } while (param_1 < *in_stack_00001534);
  }
  if (2 < iVar2) {
    param_1 = iVar2;
    if (0 < iVar2) {
      do {
        FUN_005c9410();
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_005d14d0();
    FUN_00453600();
    (**(code **)(in_stack_0000152c + 0x80))();
  }
  return;
}

