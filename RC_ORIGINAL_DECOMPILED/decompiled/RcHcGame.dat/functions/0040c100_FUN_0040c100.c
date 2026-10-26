/*
 * FUN_0040c100 at 0040c100
 * undefined FUN_0040c100(void)
 * Address ranges: 0040c100-0040c471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 48 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 48 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0040c100(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint *extraout_ECX;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined4 uVar15;
  uint *puStack_78;
  undefined4 uStack_64;
  char cStack_61;
  char *local_58;
  undefined1 *local_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28 [4];
  undefined4 *local_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620ab0;
  local_c = ExceptionList;
  puStack_78 = (uint *)&local_58;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_004237d0();
  iVar7 = *piVar4;
  puStack_78 = (uint *)0x0;
  if ((uint *)local_58 != (uint *)0x0) {
    puStack_78 = (uint *)0x40c13e;
    FUN_004098d0();
    puStack_78 = extraout_ECX;
  }
  if (iVar7 != 0) {
    local_54 = (undefined1 *)&puStack_78;
    FUN_004237d0(&puStack_78);
    piVar4 = (int *)FUN_0040b060();
    if (piVar4 == (int *)0x0) {
      puStack_78 = (uint *)0x0;
      local_28[0] = cStack_61;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      puStack_78 = (uint *)0x1;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      puVar10 = (uint *)(~uVar9 - 1);
      local_58 = (char *)puVar10;
      cVar3 = FUN_00401940(puVar10);
      if (cVar3 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar13 = local_24;
        for (uVar9 = (uint)puVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar13 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar9 = (uint)puVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        puStack_78 = puVar10;
        FUN_00404190();
      }
      puStack_78 = (uint *)local_28;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_go____0_0068e514,s_D__Work_RCHorror_RCSource_RcGarg_0068e4e8,
                                    0x70);
      (*pcVar5)();
      local_4 = 0xffffffff;
      puStack_78 = (uint *)0x1;
      FUN_004040a0();
    }
    puStack_78 = (uint *)local_28;
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x48))();
    uStack_44 = *puVar6;
    uStack_3c = puVar6[2];
    fStack_40 = (float)puVar6[1] + (float)param_1[0x8b];
    puVar6 = &uStack_2c;
    (**(code **)(*param_1 + 200))(puVar6,&fStack_50);
    FUN_005b2fe0(puVar6);
    FUN_005b2f20();
    iVar7 = FUN_0042b300();
    fVar1 = *(float *)(iVar7 + 0x28);
    fVar2 = -fVar1;
    iVar7 = FUN_0060a4a0();
    local_54 = (undefined1 *)
               ((fVar1 - fVar2) * (float)(iVar7 % 10000) * 0.0001 + fVar2 + (float)local_54);
    iVar7 = FUN_0060a4a0();
    fStack_50 = (fVar1 - fVar2) * (float)(iVar7 % 10000) * 0.0001 + fVar2 + fStack_50;
    iVar7 = FUN_0060a4a0();
    fStack_4c = (fVar1 - fVar2) * (float)(iVar7 % 10000) * 0.0001 + fVar2 + fStack_4c;
    FUN_005b2f20();
    iVar7 = *param_1;
    uVar8 = (**(code **)(iVar7 + 200))(&uStack_30,&local_54,&local_58);
    (**(code **)(iVar7 + 0xd0))(uVar8);
    (**(code **)(*param_1 + 0xbc))(2);
    if (fStack_50 != 0.0) {
      uStack_34 = *(uint *)((int)fStack_50 + 0x234);
      uStack_30 = *(undefined4 *)((int)fStack_50 + 0x238);
      uStack_2c = *(undefined4 *)((int)fStack_50 + 0x23c);
      *(undefined1 *)((int)fStack_50 + 0xa8) = 0;
      if (param_1[0x8d] == 0) {
        uVar9 = 0xffffffff;
        cStack_61 = (char)((uint)fVar2 >> 0x18);
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        uVar9 = ~uVar9 - 1;
        puStack_78 = (uint *)0x1;
        local_28[0] = cStack_61;
        local_24 = (undefined4 *)0x0;
        uStack_20 = 0;
        uStack_1c = 0;
        cVar3 = FUN_00401940(uVar9);
        if (cVar3 != '\0') {
          puVar6 = (undefined4 *)&DAT_006b3f70;
          puVar13 = local_24;
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar13 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar11 = uVar9 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          *(undefined1 *)((int)local_24 + uVar9) = 0;
          uStack_20 = uVar9;
        }
        puStack_78 = (uint *)local_28;
        local_4 = 1;
        pcVar5 = (code *)FUN_005a07f0(s_m_Effect_0068e4dc,
                                      s_D__Work_RCHorror_RCSource_RcGarg_0068e4e8,0x8d);
        (*pcVar5)();
        local_4 = 0xffffffff;
        if (local_24 != (undefined4 *)0x0) {
          puStack_78 = (uint *)((int)local_24 + -1);
          cVar3 = *(char *)((int)local_24 + -1);
          if ((cVar3 == '\0') || (cVar3 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)puStack_78 = cVar3 + -1;
          }
        }
      }
      puStack_78 = &uStack_34;
      pfVar14 = &fStack_40;
      uVar15 = 1000;
      uVar8 = (**(code **)(*param_1 + 200))(auStack_18,pfVar14,1000);
      FUN_0045eee0(uVar8,pfVar14,uVar15);
    }
  }
  ExceptionList = local_c;
  return;
}

