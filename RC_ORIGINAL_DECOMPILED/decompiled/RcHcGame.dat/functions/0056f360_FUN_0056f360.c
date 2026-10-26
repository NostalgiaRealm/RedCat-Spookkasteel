/*
 * FUN_0056f360 at 0056f360
 * undefined FUN_0056f360(void)
 * Address ranges: 0056f360-0056f51e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c4a8 slot 22 for .?AVCAdam3DSpriteX@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c4a8 slot 22 for
   .?AVCAdam3DSpriteX@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0056f360(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00518630();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    puVar3 = (undefined1 *)param_1[0x18];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_Sprite__s_collides_with_player_006a4650,puVar3);
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_00502220();
  if (0.0 < (float)param_1[0x5e]) {
    piVar6 = (int *)FUN_004042e0(&local_3c);
    local_4 = 1;
    if (*piVar6 == 0) {
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 2;
      pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar7)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    iVar4 = *(int *)(*piVar6 + 0x360);
    if ((local_3c != 0) &&
       (iVar2 = *(int *)(local_3c + 0x14) + -1, *(int *)(local_3c + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
    if (iVar4 != 0) {
      puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_2c);
      uStack_38 = *puVar8;
      uStack_34 = puVar8[1];
      uStack_30 = puVar8[2];
      FUN_00503fc0(param_1[0x5e],param_1,&uStack_38);
    }
  }
  ExceptionList = local_c;
  return;
}

