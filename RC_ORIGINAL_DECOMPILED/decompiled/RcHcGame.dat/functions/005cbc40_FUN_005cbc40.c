/*
 * FUN_005cbc40 at 005cbc40
 * undefined FUN_005cbc40(void)
 * Address ranges: 005cbc40-005cbcfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cbc40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float local_14 [4];
  undefined4 local_4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar2 = *(int *)(param_2 + 0x34) * 8;
    do {
      pfVar4 = (float *)(DAT_006cc4c8 + *(int *)(iVar2 + DAT_006cc514) * 0x14);
      pfVar5 = local_14;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_4 = 6;
      if (*(int *)(iVar2 + 4 + DAT_006cc514) != 0) {
        FUN_005b3080();
        local_14[3] = -local_14[3];
      }
      FUN_005cab40(local_14,&DAT_006cc4d8,&DAT_006cc570);
      fVar6 = (float10)FUN_005d17f0();
      if ((float10)0.0 <= fVar6) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(param_2 + 0x38));
  }
  return 1;
}

