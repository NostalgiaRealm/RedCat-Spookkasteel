/*
 * FUN_005b8fe0 at 005b8fe0
 * undefined FUN_005b8fe0(void)
 * Address ranges: 005b8fe0-005b90c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b8fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  while( true ) {
    if (param_1 < 0) {
      iVar1 = *(int *)(*(int *)(DAT_006cc41c[6] + 0xd5cc) + param_1 * -0xc + -4);
      if (iVar1 != 0) {
        *(int *)(DAT_006cc400 + 0x10) = *(int *)(DAT_006cc400 + 0x10) + 1;
        FUN_005b7e90(1,iVar1);
      }
      *(int *)(DAT_006cc400 + 0xc) = *(int *)(DAT_006cc400 + 0xc) + 1;
      return;
    }
    if ((*(int *)(*(int *)(DAT_006cc40c + 0xd5d4) + param_1 * 4) != *DAT_006cc41c) &&
       (DAT_006cc41c[5] != 0)) break;
    *(int *)(DAT_006cc400 + 4) = *(int *)(DAT_006cc400 + 4) + 1;
    iVar1 = *(int *)(DAT_006cc420 + 0x4c) + param_1 * 0x2c;
    FUN_005c9480();
    fVar2 = (float10)FUN_005d17f0();
    FUN_005b8fe0(*(undefined4 *)(iVar1 + (uint)(fVar2 < (float10)0.0) * 4),param_2);
    param_1 = *(int *)(iVar1 + (uint)(fVar2 < (float10)0.0 == 0) * 4);
  }
  return;
}

