/*
 * FUN_1000c190 at 1000c190
 * undefined FUN_1000c190(void)
 * Address ranges: 1000c190-1000c24e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000c190(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  fVar3 = ABS(param_1[2]);
  if (fVar1 == 1.0) {
    return 0;
  }
  if (fVar2 == 1.0) {
    return 1;
  }
  if (fVar3 == 1.0) {
    return 2;
  }
  if ((fVar2 <= fVar1) && (fVar3 <= fVar1)) {
    return 3;
  }
  if ((fVar2 < fVar1) || (uVar4 = 4, fVar2 < fVar3)) {
    uVar4 = 5;
  }
  return uVar4;
}

