/*
 * FUN_00595f80 at 00595f80
 * undefined FUN_00595f80(void)
 * Address ranges: 00595f80-00596021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 31 for .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 31 for
   .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred. */

void FUN_00595f80(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_18 [5];
  float local_4;
  
  pfVar2 = (float *)FUN_0049bc00(local_18);
  pfVar4 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  fVar1 = ABS(local_18[0]);
  if (ABS(local_18[0]) <= ABS(local_18[3])) {
    fVar1 = ABS(local_18[3]);
  }
  local_18[3] = ABS(local_18[2]);
  if (ABS(local_18[2]) <= ABS(local_4)) {
    local_18[3] = ABS(local_4);
  }
  if (local_18[3] < fVar1) {
    local_18[3] = fVar1;
  }
  local_18[0] = -local_18[3];
  local_18[2] = -local_18[3];
  local_4 = local_18[3];
  pfVar2 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

