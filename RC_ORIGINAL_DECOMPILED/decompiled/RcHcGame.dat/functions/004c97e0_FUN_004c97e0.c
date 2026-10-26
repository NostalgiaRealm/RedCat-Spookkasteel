/*
 * FUN_004c97e0 at 004c97e0
 * undefined FUN_004c97e0(void)
 * Address ranges: 004c97e0-004c9939
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c97e0(void)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a50;
  pvStack_c = ExceptionList;
  iVar4 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar4 = FUN_004bc480();
  }
  iVar4 = *(int *)(iVar4 + 0x3a0);
  FUN_00421750(&local_24);
  local_4 = 0;
  cVar3 = FUN_00592e60();
  local_20 = CONCAT31(local_20._1_3_,cVar3 == '\0');
  uVar2 = local_20;
  FUN_00592de0(local_20);
  if (local_24 == (int *)0x0) {
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_00556400(uVar2);
  iVar7 = *(int *)(iVar4 + 0x578);
  if (iVar7 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar4 + 0x52c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar7 = FUN_0060af10(puVar6);
    *(int *)(iVar4 + 0x578) = iVar7;
  }
  if (iVar7 == 0) {
    *(undefined1 *)(iVar4 + 0x1a0) = 0;
  }
  else {
    *(bool *)(iVar4 + 0x1a0) = cVar3 == '\0';
  }
  local_4 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    iVar4 = local_24[5];
    local_24[5] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

