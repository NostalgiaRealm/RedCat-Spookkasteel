/*
 * FUN_0049d310 at 0049d310
 * undefined FUN_0049d310(void)
 * Address ranges: 0049d310-0049d47f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049d310(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca60;
  pvStack_c = ExceptionList;
  puVar7 = param_2;
  ExceptionList = &pvStack_c;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (*(int *)(param_1 + 0x114) == 0) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x18d,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = FUN_005b5100(param_2 + 1,param_2 + 4,param_2 + 5,param_2 + 6,param_2 + 7,param_2 + 8,
                       param_2 + 9,param_2 + 10,param_2 + 0xb,param_2 + 0xc,param_2 + 0xd);
  if (iVar5 == 0) {
    puVar3 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_1 + 0x60);
    }
    uVar4 = FUN_005ae390(auStack_1c,s_geActor_GetLightingOptions___fai_00694d40,puVar3);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00694c70,
                                  0x304,uVar4);
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

