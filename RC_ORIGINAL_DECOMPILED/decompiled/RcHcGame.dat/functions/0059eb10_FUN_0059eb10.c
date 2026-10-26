/*
 * FUN_0059eb10 at 0059eb10
 * undefined FUN_0059eb10(void)
 * Address ranges: 0059eb10-0059eba0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059eb10(void)

{
  float10 fVar1;
  float10 fVar2;
  float local_30 [2];
  undefined4 local_28;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_005b2fe0(local_30);
  FUN_005b2fe0(local_c);
  FUN_005b2fe0(local_18);
  FUN_005b2e20(local_28,0,-local_30[0]);
  fVar1 = (float10)FUN_005b2e40();
  fVar2 = (float10)FUN_005b2e40();
  if ((float10)0.0 <= fVar2 * (float10)(float)fVar1) {
    return 1;
  }
  return 0;
}

