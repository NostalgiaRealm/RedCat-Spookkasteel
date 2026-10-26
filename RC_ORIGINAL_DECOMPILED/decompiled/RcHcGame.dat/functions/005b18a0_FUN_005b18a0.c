/*
 * FUN_005b18a0 at 005b18a0
 * undefined FUN_005b18a0(void)
 * Address ranges: 005b18a0-005b1b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005b198a) */
/* WARNING: Removing unreachable block (ram,0x005b191e) */

undefined1 * FUN_005b18a0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint local_50;
  undefined1 local_4c [4];
  int iStack_48;
  int local_44;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006461e0;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_4c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  local_50 = 0;
  do {
    iVar5 = *(int *)(param_2 + 4);
    if ((iVar5 == 0) || ((uint)((*(int *)(param_2 + 8) - iVar5) / 0x18) <= local_50)) {
      *param_1 = local_4c[0];
      FUN_004040a0(0);
      FUN_0040cc00(local_4c,0,0xffffffff);
      if (iStack_48 != 0) {
        cVar1 = *(char *)(iStack_48 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(iStack_48 + -1);
        }
        else {
          *(char *)(iStack_48 + -1) = cVar1 + -1;
        }
      }
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (*(int *)(iVar6 + 8 + iVar5) == 1) {
      uVar2 = __ftol();
      FUN_004eeef0(1,uVar2);
    }
    else if (*(int *)(iVar6 + 8 + iVar5) == 2) {
      FUN_004eeef0(1,*(undefined4 *)(iVar6 + 0x10 + iVar5));
    }
    else if (*(int *)(iVar6 + 8 + iVar5) == 3) {
      uVar2 = FUN_0045da10(local_1c);
      local_4._0_1_ = 3;
      FUN_0045db40(uVar2,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    else {
      uVar3 = 0xffffffff;
      pcVar8 = &DAT_0069e12c;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      if (-local_44 - 1U <= uVar3) {
        FUN_005fe5fb();
      }
      if (uVar3 != 0) {
        iVar5 = local_44 + uVar3;
        cVar1 = FUN_00401940(iVar5,0);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_0069e12c;
          puVar9 = (undefined4 *)(local_44 + iStack_48);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_00404190(iVar5);
        }
      }
    }
    if (*(int *)(param_2 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18;
    }
    if (local_50 < iVar5 - 1U) {
      uVar3 = 0xffffffff;
      pcVar8 = &DAT_0069e140;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      if (-local_44 - 1U <= uVar3) {
        FUN_005fe5fb();
      }
      if (uVar3 != 0) {
        iVar5 = local_44 + uVar3;
        cVar1 = FUN_00401940(iVar5,0);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_0069e140;
          puVar9 = (undefined4 *)(local_44 + iStack_48);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)(iStack_48 + iVar5) = 0;
          local_44 = iVar5;
        }
      }
    }
    local_50 = local_50 + 1;
    iVar6 = iVar6 + 0x18;
  } while( true );
}

