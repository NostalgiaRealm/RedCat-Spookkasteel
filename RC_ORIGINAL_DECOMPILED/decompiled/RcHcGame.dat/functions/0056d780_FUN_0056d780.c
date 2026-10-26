/*
 * FUN_0056d780 at 0056d780
 * undefined FUN_0056d780(void)
 * Address ranges: 0056d780-0056d903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056d780(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640c00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4), iVar4 = iVar6 >> 0x1f,
     ExceptionList = &pvStack_c, iVar6 / 0x18 + iVar4 != iVar4)) {
    local_2c[0] = (undefined1)param_2;
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_args_size______0_006a45d4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x251,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
  iVar6 = FUN_00515db0();
  iVar4 = *(int *)(iVar6 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar6 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar6 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar5 = FUN_005ae390(auStack_1c,s_______ShowMissions___006a45bc);
    local_4 = 1;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  uVar5 = FUN_00514140();
  FUN_0053cbf0(uVar5);
  FUN_0053cb70(uVar5);
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

