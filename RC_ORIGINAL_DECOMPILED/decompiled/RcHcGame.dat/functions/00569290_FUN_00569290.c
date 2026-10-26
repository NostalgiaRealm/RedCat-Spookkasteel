/*
 * FUN_00569290 at 00569290
 * undefined FUN_00569290(void)
 * Address ranges: 00569290-00569458
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00569290(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640488;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_2 + 8);
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  iVar10 = 0;
  local_4 = 0;
  if (0 < iVar1) {
    do {
      pcVar6 = "";
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 0) {
        pcVar6 = (char *)(iVar2 + iVar10);
      }
      if (*pcVar6 < 'a') {
LAB_00569323:
        pcVar6 = "";
        if (iVar2 != 0) {
          pcVar6 = (char *)(iVar2 + iVar10);
        }
        if ('@' < *pcVar6) {
          pcVar6 = "";
          if (iVar2 != 0) {
            pcVar6 = (char *)(iVar2 + iVar10);
          }
          if (*pcVar6 < '[') {
            if (iVar2 == 0) {
              pcVar6 = "";
            }
            else {
              pcVar6 = (char *)(iVar2 + iVar10);
            }
            cVar4 = *pcVar6;
            if (-local_14 - 1 < 2) {
              FUN_005fe5fb();
            }
            iVar2 = local_14 + 1;
            cVar3 = FUN_00401940(iVar2,0);
            if (cVar3 != '\0') {
              *(char *)(local_14 + (int)local_18) = cVar4 + ' ';
              FUN_00404190(iVar2);
            }
          }
        }
      }
      else {
        pcVar6 = "";
        if (iVar2 != 0) {
          pcVar6 = (char *)(iVar2 + iVar10);
        }
        if ('z' < *pcVar6) goto LAB_00569323;
        if (iVar2 == 0) {
          puVar5 = &DAT_0064a3b4;
        }
        else {
          puVar5 = (undefined1 *)(iVar2 + iVar10);
        }
        FUN_004eeef0(1,CONCAT31((int3)((uint)puVar5 >> 8),*puVar5));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar1);
  }
  if (local_14 == 0) {
    uVar7 = 0xffffffff;
    pcVar6 = &DAT_006a413c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar4 = FUN_00401940(uVar7,1);
    if (cVar4 != '\0') {
      puVar9 = (undefined4 *)&DAT_006a413c;
      puVar11 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar7) = 0;
      local_14 = uVar7;
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != (undefined4 *)0x0) {
    cVar4 = *(char *)((int)local_18 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar4 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

