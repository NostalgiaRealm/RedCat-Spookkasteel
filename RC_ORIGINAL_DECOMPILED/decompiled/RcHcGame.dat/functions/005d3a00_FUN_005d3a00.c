/*
 * FUN_005d3a00 at 005d3a00
 * undefined FUN_005d3a00(void)
 * Address ranges: 005d3a00-005d3b34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3a00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  while (-1 < param_4) {
    param_4 = param_4 * 0x2c;
    iVar4 = *(int *)(DAT_006cefcc + 0x4c) + param_4;
    fVar5 = (float10)FUN_005d17f0();
    if (fVar5 <= (float10)*(float *)(param_1 + 0x20)) {
      if (-(float10)*(float *)(param_1 + 0x20) <= fVar5) {
        iVar2 = 0;
        iVar3 = *(int *)(DAT_006cefc4 + 0x1c0) + *(int *)(iVar4 + 0xc) * 0x88;
        if (0 < *(int *)(iVar4 + 8)) {
          do {
            iVar1 = FUN_005d4880(iVar3,param_2,*(undefined4 *)(param_1 + 0x20));
            if (iVar1 != 0) {
              if (*(int *)(iVar3 + 0x7c) != *(int *)(DAT_006cefd8 + 4)) {
                *(int *)(iVar3 + 0x7c) = *(int *)(DAT_006cefd8 + 4);
                *(undefined4 *)(iVar3 + 0x80) = 0;
              }
              *(uint *)(iVar3 + 0x80) = *(uint *)(iVar3 + 0x80) | 1 << ((byte)param_3 & 0x1f);
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x88;
          } while (iVar2 < *(int *)(iVar4 + 8));
        }
        FUN_005d3a00(param_1,param_2,param_3,
                     *(undefined4 *)(*(int *)(DAT_006cefcc + 0x4c) + param_4));
        param_4 = *(int *)(*(int *)(DAT_006cefcc + 0x4c) + 4 + param_4);
      }
      else {
        param_4 = *(int *)(*(int *)(DAT_006cefcc + 0x4c) + 4 + param_4);
      }
    }
    else {
      param_4 = *(int *)(*(int *)(DAT_006cefcc + 0x4c) + param_4);
    }
  }
  return;
}

