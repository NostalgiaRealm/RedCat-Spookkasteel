/*
 * FUN_0053c6e0 at 0053c6e0
 * undefined FUN_0053c6e0(void)
 * Address ranges: 0053c6e0-0053c864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0053c7eb) */

void __fastcall FUN_0053c6e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063bff3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f7a8;
  local_4 = 1;
  iVar6 = 0;
  while( true ) {
    if (param_1[6] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_1[7] - param_1[6]) >> 2;
    }
    if (iVar2 <= iVar6) break;
    puVar7 = *(undefined4 **)(param_1[6] + iVar6 * 4);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(param_1[6] + -4 + iVar6 * 4) = 0;
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x62,local_1c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  param_1[7] = param_1[6];
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

