/*
 * FUN_005871f0 at 005871f0
 * undefined FUN_005871f0(void)
 * Address ranges: 005871f0-0058741d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fda8 slot 1 for .?AVCAdamEffectTexturedTrail@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fda8 slot 1 for
   .?AVCAdamEffectTexturedTrail@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_005871f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642cc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x28);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    uVar3 = FUN_005ae390(local_1c,s_CAdamEffectTexturedTrail__DoOnFr_006a5fb4,puVar2);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_m_SubLevel_IsNotNull___0068d76c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0x85,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar5 = FUN_00586d70();
  if (iVar5 == 0) {
    FUN_00586ed0(param_2,param_5);
  }
  else {
    puVar6 = (undefined4 *)FUN_00586e90();
    iVar5 = FUN_00586eb0();
    *puVar6 = *param_5;
    puVar6[1] = param_5[1];
    uVar3 = param_5[2];
    puVar6[3] = param_2;
    puVar6[2] = uVar3;
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar5 = *(int *)(iVar5 + 0xc);
      if ((param_2 == -1) || (iVar5 == -1)) {
        iVar5 = 0;
      }
      else {
        if (param_2 < iVar5) {
          uVar7 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7 - 1;
          puStack_28 = (undefined4 *)0x0;
          uStack_24 = 0;
          uStack_20 = 0;
          auStack_2c[0] = (undefined1)param_2;
          cVar1 = FUN_00401940(uVar7,1);
          if (cVar1 != '\0') {
            puVar6 = (undefined4 *)&DAT_006b3f70;
            puVar10 = puStack_28;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            *(undefined1 *)((int)puStack_28 + uVar7) = 0;
            uStack_24 = uVar7;
          }
          local_4 = 1;
          pcVar4 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                        s___AdamSource_AdamClock_h_0068e22c,0x7d,auStack_2c);
          (*pcVar4)();
          local_4 = 0xffffffff;
          if (puStack_28 != (undefined4 *)0x0) {
            cVar1 = *(char *)((int)puStack_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)((int)puStack_28 + -1));
            }
            else {
              *(char *)((int)puStack_28 + -1) = cVar1 + -1;
            }
          }
          puStack_28 = (undefined4 *)0x0;
          uStack_24 = 0;
          uStack_20 = 0;
        }
        iVar5 = param_2 - iVar5;
      }
      if (*(int *)(param_1 + 0x54) < iVar5) goto LAB_00587401;
    }
    if (*(float *)(param_1 + 0x50) <= 0.0) {
      ExceptionList = pvStack_c;
      return;
    }
    fVar11 = (float10)FUN_005b30a0();
    if (fVar11 <= (float10)*(float *)(param_1 + 0x50)) {
      ExceptionList = pvStack_c;
      return;
    }
  }
LAB_00587401:
  FUN_00586ed0(param_2,param_5);
  ExceptionList = pvStack_c;
  return;
}

