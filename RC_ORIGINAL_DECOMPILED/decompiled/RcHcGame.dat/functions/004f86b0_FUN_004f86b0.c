/*
 * FUN_004f86b0 at 004f86b0
 * undefined FUN_004f86b0(void)
 * Address ranges: 004f86b0-004f8912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004f86b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puStack_68;
  undefined1 **ppuStack_64;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  undefined1 local_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634f40;
  pvStack_c = ExceptionList;
  local_4c = 0;
  local_48 = 0;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  do {
    iVar4 = local_40;
    if (*(int *)(local_40 + 0x388) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_40 + 0x38c) - *(int *)(local_40 + 0x388) >> 4;
    }
    if (iVar2 <= local_4c) {
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    iVar2 = *(int *)(local_40 + 0x388);
    ppuStack_64 = (undefined1 **)0x0;
    local_3c[0] = *(undefined1 *)(local_48 + iVar2);
    puStack_68 = (undefined1 *)0x4f871d;
    FUN_004040a0();
    ppuStack_64 = (undefined1 **)0xffffffff;
    puStack_68 = (undefined1 *)0x0;
    FUN_0040cc00(local_48 + iVar2);
    puStack_68 = local_3c;
    local_4 = 0;
    local_44 = (undefined1 *)&puStack_68;
    ppuStack_64 = (undefined1 **)puStack_68;
    FUN_00457240(iVar4);
    puVar3 = (undefined1 *)FUN_005b2980();
    if (puVar3 != (undefined1 *)0x0) {
      *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0x14) + 1;
    }
    ppuStack_64 = &local_44;
    local_4._0_1_ = 1;
    puStack_68 = (undefined1 *)0x1;
    local_44 = puVar3;
    FUN_004fdf50(*(undefined4 *)(iVar4 + 0x414));
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_44 != (undefined1 *)0x0) {
      ppuStack_64 = (undefined1 **)0x4f8788;
      FUN_004098d0();
    }
    iVar4 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      ppuStack_64 = (undefined1 **)0x4f8797;
      iVar4 = FUN_004bc480();
    }
    if (*(int *)(iVar4 + 0x3a4) == 0) {
      ppuStack_64 = (undefined1 **)0x0;
      puStack_68 = (undefined1 *)0x4f87b3;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppuStack_64 = (undefined1 **)(~uVar7 - 1);
      puStack_68 = &DAT_006b3f70;
      FUN_004040f0();
      ppuStack_64 = (undefined1 **)local_2c;
      local_4._0_1_ = 2;
      puStack_68 = (undefined1 *)0x130;
      pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      ppuStack_64 = (undefined1 **)0x1;
      puStack_68 = (undefined1 *)0x4f8803;
      FUN_004040a0();
    }
    ppuStack_64 = (undefined1 **)0x4f880e;
    FUN_00535930();
    ppuStack_64 = (undefined1 **)0x4f8815;
    iVar2 = FUN_00515db0();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      ppuStack_64 = *(undefined1 ***)(iVar2 + 0x18);
      if (ppuStack_64 == (undefined1 **)0x0) {
        ppuStack_64 = (undefined1 **)&DAT_0064a3b4;
      }
      puStack_68 = (undefined1 *)0x4f8833;
      iVar4 = FUN_0060af10();
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 != 0) {
      puStack_68 = *(undefined1 **)(puVar3 + 0x24);
      if (puStack_68 == (undefined1 *)0x0) {
        puStack_68 = &DAT_0064a3b4;
      }
      ppuStack_64 = (undefined1 **)puVar3;
      uVar6 = FUN_005ae390(auStack_1c,s_Declare_group_object___s___addre_0069cd48);
      local_4._0_1_ = 3;
      FUN_005aff00(uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_18 != 0) {
        ppuStack_64 = (undefined1 **)(iStack_18 + -1);
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          puStack_68 = (undefined1 *)0x4f888e;
          FUN_005fe5f0();
        }
        else {
          *(char *)ppuStack_64 = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    puStack_68 = puVar3 + 0x20;
    ppuStack_64 = (undefined1 **)puVar3;
    FUN_005e3620();
    local_4 = 0xffffffff;
    if (iStack_38 != 0) {
      cVar1 = *(char *)(iStack_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        ppuStack_64 = (undefined1 **)(iStack_38 + -1);
        puStack_68 = (undefined1 *)0x4f88d2;
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_38 + -1) = cVar1 + -1;
      }
    }
    local_4c = local_4c + 1;
    local_48 = local_48 + 0x10;
    iStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
  } while( true );
}

