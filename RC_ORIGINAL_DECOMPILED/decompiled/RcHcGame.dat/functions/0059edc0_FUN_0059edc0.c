/*
 * FUN_0059edc0 at 0059edc0
 * undefined FUN_0059edc0(void)
 * Address ranges: 0059edc0-0059eead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0059edc0(void)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  fVar3 = (float10)FUN_005b30a0();
  fVar4 = (float10)FUN_005b30a0();
  fVar1 = (float)fVar4;
  fVar4 = (float10)FUN_005b30a0();
  FUN_005b2fe0(local_24);
  FUN_005b2fe0(local_30);
  FUN_005b2fe0(local_c);
  FUN_005b2fe0(local_18);
  fVar5 = (float10)FUN_005b2e40();
  fVar2 = (float)(fVar5 / ((float10)fVar1 * (float10)(float)fVar3));
  fVar5 = (float10)FUN_005b2e40();
  if (fVar2 < 0.0) {
    return (float10)fVar1;
  }
  if (fVar5 / ((float10)(float)fVar4 * (float10)(float)fVar3) < (float10)0.0) {
    return (float10)(float)fVar4;
  }
  return SQRT((float10)1.0 - (float10)fVar2 * (float10)fVar2) * (float10)fVar1;
}

