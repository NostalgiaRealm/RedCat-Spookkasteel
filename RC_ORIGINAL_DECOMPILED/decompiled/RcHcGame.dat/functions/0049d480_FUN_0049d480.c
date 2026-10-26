/*
 * FUN_0049d480 at 0049d480
 * undefined FUN_0049d480(void)
 * Address ranges: 0049d480-0049d5de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049d480(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x114) == 0) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x18d,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_005b51b0(param_2 + 4,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                       *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                       *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  if (iVar3 == 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_1c,s_geActor_SetLightingOptions___fai_00694d6c,puVar4);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00694c70,
                                  0x31b,uVar5);
    (*pcVar2)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = pvStack_c;
  return;
}

