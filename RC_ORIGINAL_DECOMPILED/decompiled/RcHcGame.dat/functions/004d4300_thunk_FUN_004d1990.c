/*
 * thunk_FUN_004d1990 at 004d4300
 * undefined thunk_FUN_004d1990(void)
 * Address ranges: 004d4300-004d4304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004d1990
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d678 slot 3 for .?AVCRcCameraTriggerModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d678 slot 3 for
   .?AVCRcCameraTriggerModel@@. Original bytes unchanged; names and types still inferred. */

void __fastcall thunk_FUN_004d1990(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar7;
  char *pcVar8;
  int *piStack_c4;
  undefined1 uStack_b1;
  int iStack_b0;
  undefined1 uStack_a9;
  int aiStack_a8 [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int aiStack_6c [9];
  int aiStack_48 [3];
  int aiStack_3c [3];
  undefined1 *puStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063148a;
  pvStack_c = ExceptionList;
  piStack_c4 = param_1;
  iVar3 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    piStack_c4 = (int *)0x4d19bf;
    ExceptionList = &pvStack_c;
    iVar3 = FUN_004bc480();
    piStack_c4 = extraout_ECX;
  }
  iVar4 = *(int *)(iVar3 + 0x5c0);
  if (iVar4 == -0x80000000) {
    piStack_c4 = *(int **)(iVar3 + 0x574);
    if (piStack_c4 == (int *)0x0) {
      piStack_c4 = (int *)&DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10();
    *(int *)(iVar3 + 0x5c0) = iVar4;
    piStack_c4 = extraout_ECX_00;
  }
  if (iVar4 != 0) {
    puStack_30 = (undefined1 *)&piStack_c4;
    FUN_004042e0(&piStack_c4);
    FUN_005545a0();
    piStack_c4 = aiStack_6c;
    iStack_4 = 0;
    aiStack_6c[0] = -0x3fc00000;
    aiStack_6c[1] = 0xc0400000;
    aiStack_6c[2] = 0xc0400000;
    aiStack_6c[3] = 0x40400000;
    aiStack_6c[4] = 0x40400000;
    aiStack_6c[5] = 0x40400000;
    FUN_00554a30();
    piStack_c4 = &iStack_b0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    aiStack_a8[2] = 0x437f0000;
    aiStack_a8[3] = 0x437f0000;
    piVar5 = (int *)FUN_004042e0();
    iStack_4._0_1_ = 1;
    if (*piVar5 == 0) {
      piStack_c4 = (int *)0x0;
      auStack_88[0] = uStack_b1;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      piStack_c4 = (int *)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      piStack_c4 = (int *)auStack_88;
      iStack_4._0_1_ = 2;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar6)();
      iStack_4._0_1_ = 1;
      piStack_c4 = (int *)0x1;
      FUN_004040a0();
    }
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x5c) == 0) {
      piStack_c4 = (int *)0x0;
      auStack_98[0] = uStack_b1;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      piStack_c4 = (int *)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      piStack_c4 = (int *)auStack_98;
      iStack_4._0_1_ = 3;
      pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144);
      (*pcVar6)();
      iStack_4._0_1_ = 1;
      piStack_c4 = (int *)0x1;
      FUN_004040a0();
    }
    piStack_c4 = aiStack_3c;
    FUN_005b98a0(*(undefined4 *)(iVar3 + 0x5c),param_1[0x4e]);
    iStack_4._0_1_ = 0;
    if (iStack_b0 != 0) {
      piStack_c4 = (int *)0x4d1ba7;
      FUN_004098d0();
    }
    piStack_c4 = &iStack_b0;
    piVar5 = (int *)FUN_004042e0();
    iStack_4._0_1_ = 4;
    uVar2 = (undefined1)iStack_4;
    iStack_4._0_1_ = 4;
    if (*piVar5 == 0) {
      piStack_c4 = (int *)&uStack_b1;
      FUN_00409810(&DAT_006b3f70);
      piStack_c4 = (int *)auStack_98;
      iStack_4._0_1_ = 5;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar6)();
      iStack_4._0_1_ = 4;
      piStack_c4 = (int *)0x1;
      FUN_004040a0();
      uVar2 = (undefined1)iStack_4;
    }
    iStack_4._0_1_ = uVar2;
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x5c) == 0) {
      piStack_c4 = (int *)&uStack_a9;
      FUN_00409810(&DAT_006b3f70);
      piStack_c4 = (int *)auStack_88;
      iStack_4._0_1_ = 6;
      pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144);
      (*pcVar6)();
      iStack_4._0_1_ = 4;
      piStack_c4 = (int *)0x1;
      FUN_004040a0();
    }
    piStack_c4 = aiStack_48;
    FUN_005b98d0(*(undefined4 *)(iVar3 + 0x5c),param_1[0x4e],aiStack_6c + 6);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (iStack_b0 != 0) {
      piStack_c4 = (int *)0x4d1c96;
      FUN_004098d0();
      iStack_b0 = 0;
    }
    piStack_c4 = aiStack_6c + 6;
    uStack_78 = 0x43000000;
    uStack_74 = 0x43000000;
    uStack_70 = 0x43000000;
    FUN_005b3000();
    piStack_c4 = aiStack_48;
    FUN_005b2fe0();
    piStack_c4 = aiStack_6c + 6;
    FUN_00554a30();
    piStack_c4 = aiStack_a8;
    FUN_00554890(aiStack_3c);
    piStack_c4 = aiStack_6c;
    aiStack_a8[0] = 0x437f0000;
    aiStack_a8[1] = 0;
    aiStack_a8[2] = 0x437f0000;
    aiStack_a8[3] = 0x437f0000;
    FUN_00554a30();
    piStack_c4 = aiStack_a8;
    FUN_00554890(aiStack_3c);
    iStack_4 = 0xffffffff;
    piStack_c4 = (int *)0x4d1d65;
    FUN_00554630();
  }
  ExceptionList = pvStack_c;
  return;
}

