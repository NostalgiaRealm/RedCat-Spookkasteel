/*
 * FUN_0044bc80 at 0044bc80
 * undefined FUN_0044bc80(void)
 * Address ranges: 0044bc80-0044be33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0044bc80(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006257b0;
  local_c = ExceptionList;
  if (param_1[0x66] == 0) {
    ExceptionList = &local_c;
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_28);
      uStack_34 = *puVar3;
      uStack_30 = puVar3[1];
      uStack_2c = puVar3[2];
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(int *)(iVar4 + 0xfc) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          puVar3 = (undefined4 *)&DAT_006b3f70;
          puVar10 = puStack_18;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined1 *)((int)puStack_18 + uVar7) = 0;
          uStack_14 = uVar7;
        }
        uStack_4 = 0;
        pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,auStack_1c);
        (*pcVar5)();
        uStack_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar6 = (int *)FUN_0054ea00(&iStack_38,iVar2,&uStack_34,1,1,0x3f800000,0,0);
      iVar2 = param_1[0x66];
      uStack_4 = 1;
      if (iVar2 != *piVar6) {
        if ((iVar2 != 0) &&
           (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
          FUN_005abfc0(0);
        }
        iVar2 = *piVar6;
        param_1[0x66] = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        }
      }
      uStack_4 = 0xffffffff;
      if ((iStack_38 != 0) &&
         (iVar2 = *(int *)(iStack_38 + 0x14) + -1, *(int *)(iStack_38 + 0x14) = iVar2, iVar2 == 0))
      {
        FUN_005abfc0(0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

