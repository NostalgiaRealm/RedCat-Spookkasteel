/*
 * FUN_005dfee0 at 005dfee0
 * undefined FUN_005dfee0(void)
 * Address ranges: 005dfee0-005e0304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005dfee0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  short sVar8;
  float *pfVar9;
  int iVar10;
  undefined1 *puVar11;
  int local_34;
  undefined1 local_30 [48];
  
  iVar2 = FUN_005e0310();
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = *param_1;
  iVar3 = FUN_005e0580();
  if (iVar3 != 0) {
    if (local_34 == *(short *)(iVar10 + 0x28)) {
      if (param_4 == 0) {
        param_2 = 1 << ((byte)param_3 & 0x1f);
        sVar8 = -1;
        FUN_005b2e20(0xd0061c46,0xd0061c46,0xd0061c46);
        FUN_005b2e20(0x50061c46,0x50061c46,0x50061c46);
        pfVar9 = *(float **)(iVar2 + 4);
        param_4 = (int)*(short *)(iVar10 + 0x18);
        iVar3 = *(int *)(iVar10 + 0x1c);
        if (0 < param_4) {
          do {
            sVar1 = *(short *)(iVar3 + 0x16);
            if (sVar1 != sVar8) {
              FUN_005dfda0(local_30);
              sVar8 = sVar1;
            }
            if ((*(char *)(iVar3 + 0x14) != '\0') && (param_2 != 0)) {
              FUN_005b3470(pfVar9);
              pfVar9[3] = *(float *)(iVar3 + 0xc);
              pfVar9[4] = *(float *)(iVar3 + 0x10);
              if (*(float *)(iVar2 + 0x1c) < *pfVar9) {
                *(float *)(iVar2 + 0x1c) = *pfVar9;
              }
              if (*pfVar9 < *(float *)(iVar2 + 0x28)) {
                *(float *)(iVar2 + 0x28) = *pfVar9;
              }
              if (*(float *)(iVar2 + 0x20) < pfVar9[1]) {
                *(float *)(iVar2 + 0x20) = pfVar9[1];
              }
              if (pfVar9[1] < *(float *)(iVar2 + 0x2c)) {
                *(float *)(iVar2 + 0x2c) = pfVar9[1];
              }
              if (*(float *)(iVar2 + 0x24) < pfVar9[2]) {
                *(float *)(iVar2 + 0x24) = pfVar9[2];
              }
              if (pfVar9[2] < *(float *)(iVar2 + 0x30)) {
                *(float *)(iVar2 + 0x30) = pfVar9[2];
              }
              pfVar9[5] = (float)(int)sVar8;
            }
            iVar3 = iVar3 + 0x18;
            pfVar9 = pfVar9 + 6;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      else {
        param_2 = 1 << ((byte)param_3 & 0x1f);
        sVar8 = -1;
        FUN_005b2e20(0xd0061c46,0xd0061c46,0xd0061c46);
        FUN_005b2e20(0x50061c46,0x50061c46,0x50061c46);
        iVar4 = (int)*(short *)(iVar10 + 0x18);
        iVar3 = *(int *)(iVar10 + 0x1c);
        pfVar9 = *(float **)(iVar2 + 4);
        if (0 < iVar4) {
          do {
            sVar1 = *(short *)(iVar3 + 0x16);
            if (sVar1 != sVar8) {
              puVar11 = local_30;
              FUN_0059be40(puVar11);
              FUN_005b32c0(puVar11);
              FUN_005dfda0(local_30);
              sVar8 = sVar1;
            }
            if ((*(char *)(iVar3 + 0x14) != '\0') && (param_2 != 0)) {
              FUN_005b3470(pfVar9);
              FUN_005c9290(pfVar9);
              pfVar9[3] = *(float *)(iVar3 + 0xc);
              pfVar9[4] = *(float *)(iVar3 + 0x10);
              if (*(float *)(iVar2 + 0x1c) < *pfVar9) {
                *(float *)(iVar2 + 0x1c) = *pfVar9;
              }
              if (*pfVar9 < *(float *)(iVar2 + 0x28)) {
                *(float *)(iVar2 + 0x28) = *pfVar9;
              }
              if (*(float *)(iVar2 + 0x20) < pfVar9[1]) {
                *(float *)(iVar2 + 0x20) = pfVar9[1];
              }
              if (pfVar9[1] < *(float *)(iVar2 + 0x2c)) {
                *(float *)(iVar2 + 0x2c) = pfVar9[1];
              }
              if (*(float *)(iVar2 + 0x24) < pfVar9[2]) {
                *(float *)(iVar2 + 0x24) = pfVar9[2];
              }
              if (pfVar9[2] < *(float *)(iVar2 + 0x30)) {
                *(float *)(iVar2 + 0x30) = pfVar9[2];
              }
              pfVar9[5] = (float)(int)sVar8;
            }
            iVar3 = iVar3 + 0x18;
            pfVar9 = pfVar9 + 6;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      param_4 = (int)*(short *)(iVar10 + 0x20);
      iVar3 = *(int *)(iVar10 + 0x24);
      iVar4 = *(int *)(iVar2 + 0xc);
      if (0 < param_4) {
        do {
          if ((*(char *)(iVar3 + 0xc) != '\0') && (param_2 != 0)) {
            FUN_005b35b0(iVar4);
          }
          iVar3 = iVar3 + 0x10;
          iVar4 = iVar4 + 0xc;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      if (param_3 != param_1[0xe]) {
        sVar8 = *(short *)(iVar10 + 0x44 + param_3 * 8);
        puVar7 = *(undefined2 **)(iVar10 + 0x48 + param_3 * 8);
        puVar5 = *(undefined2 **)(iVar2 + 0x18);
        param_4 = (int)sVar8;
        if (0 < param_4) {
          do {
            *puVar5 = 0;
            iVar10 = 3;
            puVar5[1] = puVar7[6];
            puVar5 = puVar5 + 2;
            puVar6 = puVar7;
            do {
              *puVar5 = *puVar6;
              puVar5[1] = puVar6[3];
              puVar5 = puVar5 + 2;
              iVar10 = iVar10 + -1;
              puVar6 = puVar6 + 1;
            } while (iVar10 != 0);
            puVar7 = puVar7 + 7;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        *(short *)(iVar2 + 0x10) = sVar8;
        param_1[0xe] = param_3;
      }
      return iVar2;
    }
    FUN_005cf220(100,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0xe3,&DAT_006b3f70,0)
    ;
    return 0;
  }
  FUN_005cf220(100,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0xde,&DAT_006b3f70,0);
  return 0;
}

