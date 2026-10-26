/*
 * FUN_005d4900 at 005d4900
 * undefined FUN_005d4900(void)
 * Address ranges: 005d4900-005d49fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d4900(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(param_1 + 0x188) < 1) {
    return 1;
  }
  local_14 = 0;
  do {
    local_10 = 0;
    piVar1 = (int *)(*(int *)(param_1 + 0x130) + local_14);
    if (0 < piVar1[1]) {
      pfVar3 = (float *)(iVar2 + *piVar1 * 0x18);
      do {
        fVar4 = (float10)FUN_005b2e40();
        fVar5 = (float10)FUN_005b2e40();
        *pfVar3 = (float)fVar4;
        pfVar3[1] = (float)fVar5;
        local_10 = local_10 + 1;
        pfVar3 = pfVar3 + 6;
      } while (local_10 < piVar1[1]);
    }
    local_c = local_c + 1;
    local_14 = local_14 + 0x24;
  } while (local_c < *(int *)(param_1 + 0x188));
  return 1;
}

