/*
 * FUN_005d3030 at 005d3030
 * undefined FUN_005d3030(void)
 * Address ranges: 005d3030-005d31e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d3030(int *param_1,int param_2,int param_3,short *param_4)

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
  float10 fVar14;
  int local_28;
  undefined4 local_24;
  
  iVar1 = *(int *)(DAT_006cefcc + 100);
  iVar2 = *(int *)(param_3 + 8);
  fVar3 = *(float *)(param_2 + 0x20);
  FUN_005b3050();
  fVar14 = (float10)FUN_005b2e40();
  if ((float10)0.0 < (float10)fVar3 - ABS(fVar14 - (float10)*(float *)(iVar1 + iVar2 * 0x14 + 0xc)))
  {
    FUN_005b2e40();
    iVar9 = __ftol();
    FUN_005b2e40();
    iVar10 = __ftol();
    iVar1 = *(int *)(param_2 + 0x24);
    iVar2 = *(int *)(param_4 + 2);
    iVar4 = *(int *)(param_2 + 0x28);
    iVar5 = *(int *)(param_4 + 0x34);
    iVar6 = *(int *)(param_2 + 0x2c);
    local_24 = 0;
    iVar11 = __ftol();
    iVar7 = *(int *)(param_4 + 0x32);
    iVar8 = *(int *)(param_4 + 0x30);
    iVar10 = (iVar10 - *(int *)(param_4 + 4)) * *(int *)(param_4 + 0x36);
    local_28 = 0;
    if (0 < param_4[1]) {
      do {
        iVar13 = iVar10 >> 10;
        if (iVar13 < 0) {
          iVar13 = -iVar13;
        }
        param_2 = 0;
        param_3 = (iVar9 - iVar2) * iVar5;
        if (0 < *param_4) {
          do {
            iVar12 = param_3 >> 10;
            if (iVar12 < 0) {
              iVar12 = -iVar12;
            }
            if (iVar13 < iVar12) {
              iVar12 = (iVar13 >> 1) + iVar12;
            }
            else {
              iVar12 = (iVar12 >> 1) + iVar13;
            }
            if (iVar12 < iVar11) {
              iVar12 = iVar11 - iVar12;
              local_24 = 1;
              *param_1 = *param_1 + iVar12 * iVar1;
              param_1[1] = param_1[1] + iVar12 * iVar4;
              param_1[2] = param_1[2] + iVar12 * iVar6;
            }
            param_1 = param_1 + 3;
            param_3 = param_3 - iVar8;
            param_2 = param_2 + 1;
          } while (param_2 < *param_4);
        }
        iVar10 = iVar10 - iVar7;
        local_28 = local_28 + 1;
      } while (local_28 < param_4[1]);
    }
    return local_24;
  }
  return 0;
}

