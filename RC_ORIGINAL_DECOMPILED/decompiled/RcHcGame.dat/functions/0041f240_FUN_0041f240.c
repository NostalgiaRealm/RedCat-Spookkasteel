/*
 * FUN_0041f240 at 0041f240
 * undefined FUN_0041f240(void)
 * Address ranges: 0041f240-0041f35e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0041f240(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621e88;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 4) == 0) || ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc < 1)) {
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
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
      FUN_00404190(uVar4);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_Count__>0_0068f4c0,s___AdamSource_DaviList_h_0068f458,0x9d,
                                  local_1c);
    (*pcVar3)();
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(param_1 + 8) - iVar1) / 0xc;
  }
  ExceptionList = pvStack_c;
  return iVar1 + -0xc + iVar6 * 0xc;
}

