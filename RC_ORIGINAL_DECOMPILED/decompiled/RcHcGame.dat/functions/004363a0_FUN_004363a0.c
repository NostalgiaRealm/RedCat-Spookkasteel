/*
 * FUN_004363a0 at 004363a0
 * undefined FUN_004363a0(void)
 * Address ranges: 004363a0-00436405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_004363a0(void)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((DAT_006b5298 & 1) == 0) {
    DAT_006b5298 = DAT_006b5298 | 1;
    fVar2 = (float10)FUN_004d67f0();
    _DAT_006b5294 = (float)fVar2;
  }
  FUN_004d6720();
  fVar3 = (float10)FUN_004d67f0();
  fVar2 = (float10)0.0;
  if (fVar3 >= fVar2 && (fVar3 == fVar2) == 0) {
    fVar4 = fVar3 - (float10)_DAT_006b5294;
    fVar2 = (float10)80.0;
    bVar1 = fVar4 < fVar2 | (byte)((ushort)((ushort)(NAN(fVar4) || NAN(fVar2)) << 10) >> 8) |
            (byte)((ushort)((ushort)(fVar4 == fVar2) << 0xe) >> 8);
    if (fVar4 >= fVar2 && (fVar4 == fVar2) == 0) {
      _DAT_006b5294 = (float)fVar3;
      return CONCAT11(bVar1,1);
    }
    _DAT_006b5294 = (float)fVar3;
    return (ushort)bVar1 << 8;
  }
  return (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
         (ushort)(fVar3 == fVar2) << 0xe;
}

