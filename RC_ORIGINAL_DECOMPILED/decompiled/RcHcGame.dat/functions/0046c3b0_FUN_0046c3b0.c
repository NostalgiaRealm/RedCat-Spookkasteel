/*
 * FUN_0046c3b0 at 0046c3b0
 * undefined FUN_0046c3b0(void)
 * Address ranges: 0046c3b0-0046c7a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046c3b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  char cVar9;
  char *pcVar10;
  int iVar11;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627e20;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x9c2) != '\0') {
    iVar11 = *(int *)(param_1 + 0x844);
    cVar9 = '\x01';
    ExceptionList = &local_c;
    if (iVar11 != -1) {
      iVar1 = *(int *)(param_1 + 0x848);
      if (iVar1 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x84c) = 0x3f800000;
        *(int *)(param_1 + 0x848) = iVar11 + param_2;
      }
      else if (iVar1 < param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x84c) = 0;
        cVar9 = '\0';
      }
      else if (iVar11 < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x84c) = 0;
      }
      else {
        param_2 = iVar1 - param_2;
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x84c) = (float)param_2 / (float)iVar11;
      }
    }
    *(char *)(param_1 + 0x850) = cVar9;
    if (cVar9 == '\0') {
      *(undefined4 *)(param_1 + 0x9f8) = 0x41c80000;
    }
    else {
      *(undefined4 *)(param_1 + 0x9f8) = 0x42480000;
      *(float *)(param_1 + 0x9f8) =
           *(float *)(param_1 + 0x84c) * 0.8 + (1.0 - *(float *)(param_1 + 0x84c)) * 50.0;
    }
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar6 = (int *)FUN_00421750(&param_2);
    local_4 = 0;
    if (*piVar6 == 0) {
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar9 != '\0');
      local_1c[0] = (undefined1)param_2;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = CONCAT31(local_4._1_3_,1);
      pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar7)();
      if (local_18 != 0) {
        cVar9 = *(char *)(local_18 + -1);
        if ((cVar9 == '\0') || (cVar9 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar9 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
    iVar11 = *piVar6;
    local_4 = 0xffffffff;
    local_34 = *(undefined4 *)(iVar11 + 0x210);
    local_30 = *(float *)(iVar11 + 0x214);
    local_2c = *(undefined4 *)(iVar11 + 0x218);
    if (param_2 != 0) {
      iVar11 = *(int *)(param_2 + 0x14) + -1;
      *(int *)(param_2 + 0x14) = iVar11;
      if (iVar11 == 0) {
        FUN_005abfc0(0);
      }
      param_2 = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x9f8);
    fVar3 = *(float *)(param_1 + 0x99c);
    fVar4 = *(float *)(param_1 + 0x9a0);
    fVar5 = *(float *)(param_1 + 0x9a4);
    FUN_005b2fe0(auStack_28);
    FUN_00477d50(auStack_28,&fStack_4c,&fStack_40);
    FUN_005b2fa0(uVar2);
    FUN_005b2fa0(uVar2);
    if (fVar4 < local_30) {
      FUN_005b3080();
      FUN_005b3080();
    }
    *(float *)(param_1 + 0x65c) = ((fVar3 + -0.5) - fStack_4c) + fStack_40;
    *(float *)(param_1 + 0x660) = ((fVar4 + 0.5) - fStack_48) + fStack_3c;
    *(float *)(param_1 + 0x664) = ((fVar5 + 0.0) - fStack_44) + fStack_38;
    *(undefined4 *)(param_1 + 0x668) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x66c) = 0;
    *(float *)(param_1 + 0x680) = fStack_40 + 0.5 + fStack_4c + fVar3;
    *(float *)(param_1 + 0x684) = fStack_3c + 0.5 + fStack_48 + fVar4;
    *(float *)(param_1 + 0x688) = fStack_38 + 0.0 + fStack_44 + fVar5;
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined4 *)(param_1 + 0x690) = 0;
    *(float *)(param_1 + 0x6a4) = (fStack_4c + 0.5 + fVar3) - fStack_40;
    *(float *)(param_1 + 0x6a8) = (fStack_48 + -0.5 + fVar4) - fStack_3c;
    *(float *)(param_1 + 0x6ac) = (fStack_44 + 0.0 + fVar5) - fStack_38;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    *(undefined4 *)(param_1 + 0x6b4) = 0x3f800000;
    *(float *)(param_1 + 0x6c8) = ((fVar3 + -0.5) - fStack_4c) - fStack_40;
    *(float *)(param_1 + 0x6cc) = ((fVar4 + -0.5) - fStack_48) - fStack_3c;
    *(float *)(param_1 + 0x6d0) = ((fVar5 + 0.0) - fStack_44) - fStack_38;
    *(undefined4 *)(param_1 + 0x6d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x6d8) = 0x3f800000;
  }
  ExceptionList = local_c;
  return;
}

