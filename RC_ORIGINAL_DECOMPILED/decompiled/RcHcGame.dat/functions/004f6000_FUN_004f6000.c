/*
 * FUN_004f6000 at 004f6000
 * undefined FUN_004f6000(void)
 * Address ranges: 004f6000-004f61f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004f616a) */
/* WARNING: Removing unreachable block (ram,0x004f6174) */
/* WARNING: Removing unreachable block (ram,0x004f617e) */
/* WARNING: Removing unreachable block (ram,0x004f6178) */

void __fastcall FUN_004f6000(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634b20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  FUN_00568080();
  FUN_00568080();
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_004040a0();
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld__0_0069c964,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x345);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_004f9030();
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  cVar1 = FUN_0055cec0();
  if (cVar1 != '\0') {
    iVar5 = -1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar2 = (code *)FUN_005a07f0(s___engine_HasSubLevel__this___0069c8d0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x34a);
    (*pcVar2)();
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00454200();
  FUN_0055cff0();
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_0051a910();
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

