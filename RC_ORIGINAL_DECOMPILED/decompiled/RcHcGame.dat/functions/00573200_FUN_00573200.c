/*
 * FUN_00573200 at 00573200
 * undefined FUN_00573200(void)
 * Address ranges: 00573200-005733e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00573200(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *local_3c;
  int local_24;
  undefined1 *local_20;
  char local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00641358;
  local_c = ExceptionList;
  local_3c = *(char **)(param_1 + 0x184);
  if (((local_3c != (char *)0x0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (*(char *)(param_1 + 0x188) != '\0')) {
    local_20 = (undefined1 *)&local_3c;
    ExceptionList = &local_c;
    if (local_3c != (char *)0x0) {
      ExceptionList = &local_c;
      *(int *)(local_3c + 0x14) = *(int *)(local_3c + 0x14) + 1;
    }
    local_4 = 0;
    FUN_004042e0(&local_24);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00421430();
    cVar1 = FUN_004fbca0();
    local_4 = 0xffffffff;
    if ((local_24 != 0) &&
       (iVar6 = *(int *)(local_24 + 0x14) + -1, *(int *)(local_24 + 0x14) = iVar6, iVar6 == 0)) {
      local_3c = (char *)0x0;
      FUN_005abfc0();
    }
    if (cVar1 == '\0') {
      local_3c = *(char **)(param_1 + 0x184);
      local_20 = (undefined1 *)&local_3c;
      if (local_3c != (char *)0x0) {
        *(int *)(local_3c + 0x14) = *(int *)(local_3c + 0x14) + 1;
      }
      local_4 = 3;
      FUN_004042e0(&local_24);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00421430();
      local_1c[0] = FUN_004fb310();
      local_4 = 0xffffffff;
      if ((local_24 != 0) &&
         (iVar6 = *(int *)(local_24 + 0x14) + -1, *(int *)(local_24 + 0x14) = iVar6, iVar6 == 0)) {
        local_3c = (char *)0x0;
        FUN_005abfc0();
      }
      if (local_1c[0] == '\0') {
        uVar3 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        local_3c = (char *)0x1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        cVar1 = FUN_00401940(uVar3);
        if (cVar1 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          puVar8 = local_18;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(undefined1 *)((int)local_18 + uVar3) = 0;
          local_14 = uVar3;
        }
        local_3c = local_1c;
        local_4 = 6;
        pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006a47d0,
                                      0x200);
        (*pcVar2)();
        if (local_18 != (undefined4 *)0x0) {
          local_3c = (char *)((int)local_18 + -1);
          cVar1 = *(char *)((int)local_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *local_3c = cVar1 + -1;
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  ExceptionList = local_c;
  return;
}

