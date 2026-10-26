/*
 * FUN_005cbd30 at 005cbd30
 * undefined FUN_005cbd30(void)
 * Address ranges: 005cbd30-005cbec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005cbd30(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  DAT_006cc58c = 0x43;
  if (param_3 < 0) {
    return (uint)((*(uint *)(DAT_006cc504 + (param_3 * 3 + 3) * -0x14) & 0x43) != 0);
  }
  fVar6 = (float10)FUN_005d17f0();
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_005d17f0();
  fVar2 = (float)fVar6;
  if (fVar1 < 0.0) {
    if (0.0 > fVar2) {
      uVar3 = FUN_005ca810(param_1,param_2,*(undefined4 *)(param_3 * 0x2c + 4 + DAT_006cc52c));
      return uVar3;
    }
    if (fVar1 < 0.0) {
      iVar5 = 1;
      goto LAB_005cbe2a;
    }
  }
  else if (0.0 <= fVar2) {
    uVar3 = FUN_005ca810(param_1,param_2,*(undefined4 *)(param_3 * 0x2c + DAT_006cc52c));
    return uVar3;
  }
  iVar5 = 0;
LAB_005cbe2a:
  fVar1 = fVar1 / (fVar1 - fVar2);
  local_c = (*param_2 - *param_1) * fVar1 + *param_1;
  local_8 = (param_2[1] - param_1[1]) * fVar1 + param_1[1];
  local_4 = (param_2[2] - param_1[2]) * fVar1 + param_1[2];
  iVar4 = FUN_005ca810(param_1,&local_c,*(undefined4 *)(DAT_006cc52c + (param_3 * 0xb + iVar5) * 4))
  ;
  if (iVar4 != 0) {
    return 1;
  }
  iVar5 = FUN_005ca810(&local_c,param_2,
                       *(undefined4 *)(DAT_006cc52c + ((uint)(iVar5 == 0) + param_3 * 0xb) * 4));
  return (uint)(iVar5 != 0);
}

