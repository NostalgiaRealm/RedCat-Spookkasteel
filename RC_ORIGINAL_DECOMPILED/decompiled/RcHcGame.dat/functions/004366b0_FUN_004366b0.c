/*
 * FUN_004366b0 at 004366b0
 * undefined FUN_004366b0(void)
 * Address ranges: 004366b0-0043671c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004366b0(int param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_0040cf10();
  uVar2 = FUN_00565870();
  fVar3 = (float10)FUN_00409e30(uVar2);
  fVar3 = fVar3 * (float10)1000.0;
  fVar4 = fVar3 - (float10)_DAT_006b5290;
  fVar1 = (float10)*(float *)(param_1 + 0x380);
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                   (ushort)(fVar4 == fVar1) << 0xe);
  if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) {
    fVar1 = (float10)*(float *)(param_1 + 900);
    uVar2 = CONCAT22(extraout_var,
                     (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                     (ushort)(fVar4 == fVar1) << 0xe);
    if (fVar4 < fVar1 || (fVar4 == fVar1) != 0) {
      _DAT_006b5290 = (float)fVar3;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  _DAT_006b5290 = (float)fVar3;
  return uVar2;
}

