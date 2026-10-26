/*
 * FUN_005ee270 at 005ee270
 * undefined FUN_005ee270(void)
 * Address ranges: 005ee270-005ee3a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ee270(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006473d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005ec390(*(int *)(param_3 + 8) + -4);
  if (iVar2 == DAT_0070fae4) {
    local_1c[0] = (undefined1)param_3;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar5 = s_Cannot_fire_event_for_NIL_object_006b1358;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(s_Cannot_fire_event_for_NIL_object_006b1358,~uVar4 - 1);
    local_4 = 0;
    FUN_005ea160(0xbc0,local_1c,param_1 + 0xc,*(int *)(param_1 + 8) + 0xc);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  piVar3 = *(int **)(param_1 + 0x84);
  do {
    if (piVar3 == *(int **)(param_1 + 0x88)) {
LAB_005ee369:
      FUN_005ee3b0(param_2,param_3);
      ExceptionList = pvStack_c;
      return param_2;
    }
    if (*(int *)(*(int *)(*piVar3 + 0x90) + 0x2c) == iVar2) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x3c))(param_2,param_3);
        ExceptionList = pvStack_c;
        return param_2;
      }
      goto LAB_005ee369;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

