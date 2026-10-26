/*
 * FUN_00436b40 at 00436b40
 * undefined FUN_00436b40(void)
 * Address ranges: 00436b40-00436cf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00436b40(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined *local_28;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623d10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00434e30();
  if (iVar2 == 8) {
    local_28 = &DAT_006b5308;
  }
  else {
    local_28 = &DAT_006b52e0;
    if (iVar2 != 0xb) {
      local_28 = &DAT_006b5330;
    }
  }
  if ((local_28 != (undefined *)0x0) && (*(int *)(param_1 + 0x3a0) == 0)) {
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_18 = *puVar8;
          puVar8 = puVar8 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_0054ffe0(&local_20,local_28,0,0x3f800000,0,0);
    local_4 = 1;
    iVar2 = *(int *)(param_1 + 0x3a0);
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar2 = *piVar4;
      *(int *)(param_1 + 0x3a0) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_20 != 0) &&
       (iVar2 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

