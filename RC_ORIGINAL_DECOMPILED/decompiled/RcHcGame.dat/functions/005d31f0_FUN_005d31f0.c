/*
 * FUN_005d31f0 at 005d31f0
 * undefined FUN_005d31f0(void)
 * Address ranges: 005d31f0-005d34b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d31f0(int *param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  float10 fVar16;
  int local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(DAT_006cefcc + 100);
  iVar2 = *(int *)(param_3 + 8);
  fVar3 = *(float *)(param_2 + 0x20);
  FUN_005b3050();
  fVar16 = (float10)FUN_005b2e40();
  if ((float10)fVar3 - ABS(fVar16 - (float10)*(float *)(iVar1 + iVar2 * 0x14 + 0xc)) <= (float10)0.0
     ) {
    return 0;
  }
  FUN_005b2e40();
  iVar9 = __ftol();
  FUN_005b2e40();
  iVar10 = __ftol();
  iVar1 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_4 + 2);
  iVar4 = *(int *)(param_2 + 0x24);
  iVar5 = *(int *)(param_4 + 0x34);
  iVar6 = *(int *)(param_2 + 0x28);
  local_54 = 0;
  iVar11 = __ftol();
  iVar7 = *(int *)(param_4 + 0x30);
  iVar8 = *(int *)(param_4 + 0x32);
  iVar10 = (iVar10 - *(int *)(param_4 + 4)) * *(int *)(param_4 + 0x36);
  local_30 = *(undefined4 *)(param_4 + 0x1a);
  local_2c = *(undefined4 *)(param_4 + 0x1c);
  local_3c = *(undefined4 *)(param_4 + 0x1a);
  local_28 = *(undefined4 *)(param_4 + 0x1e);
  local_34 = *(undefined4 *)(param_4 + 0x1e);
  local_38 = *(undefined4 *)(param_4 + 0x1c);
  local_18 = *(undefined4 *)(param_4 + 0xe);
  local_14 = *(undefined4 *)(param_4 + 0x10);
  local_c = *(undefined4 *)(param_4 + 0x14);
  local_10 = *(undefined4 *)(param_4 + 0x12);
  local_8 = *(undefined4 *)(param_4 + 0x16);
  local_4 = *(undefined4 *)(param_4 + 0x18);
  FUN_005cbd00(DAT_006cefd8);
  local_58 = 0;
  piVar15 = param_1;
  if (0 < param_4[1]) {
    do {
      iVar14 = iVar10 >> 10;
      if (iVar14 < 0) {
        iVar14 = -iVar14;
      }
      param_1 = (int *)0x0;
      param_3 = (iVar9 - iVar2) * iVar5;
      if (0 < *param_4) {
        do {
          iVar12 = param_3 >> 10;
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          if (iVar14 < iVar12) {
            iVar12 = (iVar14 >> 1) + iVar12;
          }
          else {
            iVar12 = (iVar12 >> 1) + iVar14;
          }
          if (iVar12 < iVar11) {
            iVar13 = FUN_005cbd30(local_24,&local_3c,0);
            if (iVar13 == 0) {
              iVar12 = iVar11 - iVar12;
              local_54 = 1;
              *piVar15 = *piVar15 + iVar12 * iVar4;
              piVar15[1] = piVar15[1] + iVar12 * iVar6;
              piVar15[2] = piVar15[2] + iVar12 * iVar1;
              goto LAB_005d3424;
            }
            FUN_005b3000(&local_3c);
          }
          else {
LAB_005d3424:
            FUN_005b3000(&local_3c);
          }
          param_3 = param_3 - iVar7;
          piVar15 = piVar15 + 3;
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < (int)*param_4);
      }
      FUN_005b3000(&local_30);
      local_34 = local_28;
      local_3c = local_30;
      local_38 = local_2c;
      iVar10 = iVar10 - iVar8;
      local_58 = local_58 + 1;
    } while (local_58 < param_4[1]);
  }
  return local_54;
}

