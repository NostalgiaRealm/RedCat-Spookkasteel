/*
 * FUN_1000c100 at 1000c100
 * undefined FUN_1000c100(void)
 * Address ranges: 1000c100-1000c18d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1000c100(undefined4 *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float local_10;
  float local_c [3];
  
  pfVar2 = &local_10;
  local_10 = -1.0;
  iVar3 = 3;
  local_c[0] = (float)*param_1;
  local_c[1] = (float)param_1[1];
  local_c[2] = (float)param_1[2];
  do {
    pfVar2 = pfVar2 + 1;
    if (*pfVar2 < 1.0) {
      *pfVar2 = 1.0;
    }
    if (local_10 < *pfVar2) {
      local_10 = *pfVar2;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar1 = local_10;
  if (param_2 < local_10) {
    fVar1 = param_2;
  }
  FUN_10014530(fVar1 / local_10);
  return (float10)local_10;
}

