/*
 * FUN_1000d610 at 1000d610
 * undefined FUN_1000d610(void)
 * Address ranges: 1000d610-1000d698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1000d610(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = 2;
  local_28 = 0.0;
  if (*param_1 < 3) {
    return (float10)0.0;
  }
  do {
    FUN_10014560(local_18);
    FUN_10014560(local_24);
    FUN_100143f0(local_c);
    fVar2 = (float10)FUN_10014550();
    iVar1 = iVar1 + 1;
    local_28 = (float)(fVar2 * (float10)0.5 + (float10)local_28);
  } while (iVar1 < *param_1);
  return (float10)local_28;
}

