/*
 * FUN_00516470 at 00516470
 * undefined FUN_00516470(void)
 * Address ranges: 00516470-005166ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00516470(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637c70;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (DAT_006b9834 == 0) {
    pvVar6 = operator_new(0x6c);
    local_4 = 0;
    if (pvVar6 == (void *)0x0) {
      DAT_006b9834 = 0;
    }
    else {
      uVar7 = 0xffffffff;
      local_28 = 0;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar5 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = s_Debug_006901ec;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar5 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar5 = FUN_00401940(uVar7,1);
      if (cVar5 != '\0') {
        pcVar9 = s_Debug_006901ec;
        pcVar10 = local_38;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_38[uVar7] = '\0';
        local_34 = uVar7;
      }
      local_4 = 2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = s_DebugCommand_0069f1a8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar5 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar5 = FUN_00401940(uVar7,1);
      if (cVar5 != '\0') {
        pcVar9 = s_DebugCommand_0069f1a8;
        pcVar10 = local_18;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_18[uVar7] = '\0';
        local_14 = uVar7;
      }
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      local_4 = 3;
      DAT_006b9834 = FUN_005ac9d0(local_1c,local_3c,0,local_2c,0);
    }
    local_4 = 5;
    if (bVar1) {
      FUN_004040a0(1);
    }
    if (bVar2) {
      if (local_38 != (char *)0x0) {
        cVar5 = local_38[-1];
        if ((cVar5 == '\0') || (cVar5 == -1)) {
          FUN_005fe5f0(local_38 + -1);
        }
        else {
          local_38[-1] = cVar5 + -1;
        }
      }
      local_38 = (char *)0x0;
      local_34 = 0;
      local_30 = 0;
    }
    local_4 = 0xffffffff;
    if (bVar3) {
      if (local_28 != 0) {
        cVar5 = *(char *)(local_28 + -1);
        if ((cVar5 == '\0') || (cVar5 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar5 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    FUN_005ad400(1);
  }
  iVar4 = DAT_006b9834;
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}

