/*
 * FUN_00502220 at 00502220
 * undefined FUN_00502220(void)
 * Address ranges: 00502220-00502343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00502220(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635a98;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x7d) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        cVar1 = FUN_00401940(uVar3,1);
        if (cVar1 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          puVar7 = local_18;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(undefined1 *)((int)local_18 + uVar3) = 0;
          local_14 = uVar3;
        }
        local_4 = 0;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar2)();
        local_4 = 0xffffffff;
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
        local_14 = 0;
        local_10 = 0;
      }
      FUN_004f62c0(param_1 + 0x34,*(undefined1 *)(param_1 + 0x7d));
    }
  }
  ExceptionList = local_c;
  return;
}

