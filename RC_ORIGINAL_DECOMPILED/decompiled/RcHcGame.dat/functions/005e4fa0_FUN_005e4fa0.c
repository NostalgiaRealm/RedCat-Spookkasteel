/*
 * FUN_005e4fa0 at 005e4fa0
 * undefined FUN_005e4fa0(void)
 * Address ranges: 005e4fa0-005e5148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 9 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 9 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

void __thiscall
FUN_005e4fa0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = param_3;
  local_8 = param_5;
  local_4 = param_6;
  if ((((*(int *)(param_1 + 0x50) == 0) ||
       (iVar3 = FUN_0060e50d(*(int *)(param_1 + 0x50),&local_8), iVar3 != 0)) ||
      ((uVar4 != 0 && (iVar3 = FUN_0060e481(*(undefined4 *)(param_1 + 0x50),uVar4,1), iVar3 != 0))))
     || (iVar3 = FUN_0060e45f(*(undefined4 *)(param_1 + 0x50),&local_8), iVar3 != 0)) {
    param_7 = DAT_00747b54;
    param_5 = 0;
    param_3 = 0xffffffff;
    param_6 = 0;
    puVar8 = &param_3;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x40) = param_7;
    pcVar6 = *(char **)(iVar3 + 4);
    if (((pcVar6 != (char *)0x0) && (pcVar6[-1] != '\0')) && (pcVar6[-1] != -1)) {
      FUN_004040a0(1);
      uVar4 = 0xffffffff;
      pcVar9 = pcVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4 - 1;
      param_3 = uVar4;
      cVar2 = FUN_00401940(uVar4,1);
      if (cVar2 != '\0') {
        pcVar9 = *(char **)(iVar3 + 4);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_00404190(uVar4);
      }
    }
    iVar1 = *(int *)(iVar3 + 8);
    iVar7 = -1;
    if (iVar1 != -1) {
      iVar7 = iVar1;
    }
    if (iVar7 != 0) {
      FUN_0060ab50(*(int *)(iVar3 + 4),*(int *)(iVar3 + 4) + iVar7,iVar1 - iVar7);
      iVar7 = *(int *)(iVar3 + 8) - iVar7;
      cVar2 = FUN_00401940(iVar7,0);
      if (cVar2 != '\0') {
        *(int *)(iVar3 + 8) = iVar7;
        *(undefined1 *)(*(int *)(iVar3 + 4) + iVar7) = 0;
      }
    }
  }
  param_7 = *(undefined4 *)(param_1 + 0x40);
  param_5 = local_8;
  param_3 = 0;
  param_6 = local_4;
  puVar8 = &param_3;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar8;
    puVar8 = puVar8 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

