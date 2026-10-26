/*
 * FUN_00554890 at 00554890
 * undefined FUN_00554890(void)
 * Address ranges: 00554890-00554a12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00554890(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e4a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00421750(&local_20);
  local_4 = 0;
  if (*piVar2 == 0) {
    local_1c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  iVar8 = *piVar2;
  uVar4 = FUN_00554a20(*param_2,param_2[1],param_2[2],param_2[3]);
  uVar4 = FUN_00554660(iVar8 + 0x1e0,param_1,uVar4);
  FUN_005b01c0(uVar4);
  local_4 = 0xffffffff;
  if ((local_20 != 0) &&
     (iVar8 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

