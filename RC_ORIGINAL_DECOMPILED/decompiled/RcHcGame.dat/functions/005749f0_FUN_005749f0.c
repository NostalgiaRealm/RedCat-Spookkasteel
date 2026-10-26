/*
 * FUN_005749f0 at 005749f0
 * undefined FUN_005749f0(void)
 * Address ranges: 005749f0-00574c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 2 for .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 2 for
   .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_005749f0(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  uint uVar4;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  char *pcVar5;
  undefined1 *puStack_110;
  undefined1 local_f8 [16];
  undefined1 *puStack_e8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  char cStack_58;
  undefined1 auStack_54 [44];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641551;
  pvStack_c = ExceptionList;
  puStack_110 = param_1;
  ExceptionList = &pvStack_c;
  if ((param_1[0x238] != '\0') && (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x148) == 3)) {
    puStack_110 = (undefined1 *)0x574a31;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00553640();
    puStack_110 = extraout_ECX;
    if (cVar1 != '\0') {
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        puStack_110 = (undefined1 *)0x574a48;
        iVar2 = FUN_0055b280();
        puStack_110 = extraout_ECX_00;
      }
      if (*(int *)(iVar2 + 0xfc) == 0) {
        puStack_110 = (undefined1 *)0x0;
        FUN_004040a0();
        uVar4 = 0xffffffff;
        pcVar5 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        puStack_110 = (undefined1 *)(~uVar4 - 1);
        FUN_004040f0(&DAT_006b3f70);
        puStack_110 = local_f8;
        local_4 = 0;
        pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399);
        (*pcVar3)();
        local_4 = 0xffffffff;
        puStack_110 = (undefined1 *)0x1;
        FUN_004040a0();
        puStack_110 = extraout_ECX_01;
      }
      if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) != '\0') {
        puStack_110 = (undefined1 *)0x574ad2;
        FUN_005770a0();
        puStack_110 = extraout_ECX_02;
      }
    }
    param_1[0x238] = 0;
  }
  if (param_1[0x168] == '\0') {
    puStack_e8 = (undefined1 *)&puStack_110;
    FUN_004042e0(&puStack_110);
    FUN_00565c30();
    puStack_110 = param_1 + 0x108;
    local_4 = 1;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_ce = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_ca = 1;
    FUN_00565e10(param_1 + 0xfc);
    if (cStack_58 != '\0') {
      puStack_110 = auStack_54;
      FUN_00575430(param_3);
    }
    local_4 = 2;
    puStack_110 = puStack_18;
    FUN_005fe5f0();
    puStack_18 = (undefined1 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_005fe5f0(uStack_28);
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    if (iStack_c4 != 0) {
      iVar2 = *(int *)(iStack_c4 + 0x14) + -1;
      *(int *)(iStack_c4 + 0x14) = iVar2;
      if (iVar2 == 0) {
        puStack_110 = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      iStack_c4 = 0;
    }
    local_4 = 0xffffffff;
    puStack_110 = (undefined1 *)0x574c1f;
    FUN_005ab4d0();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x160);
    *(undefined1 **)(param_1 + 0x160) = param_3 + iVar2;
    if (*(int *)(param_1 + 0x164) <= (int)(param_3 + iVar2)) {
      puStack_110 = (undefined1 *)0x574b0c;
      FUN_005756d0();
      param_1[0x168] = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
  puStack_110 = param_3;
  FUN_00575860();
  ExceptionList = pvStack_c;
  return;
}

