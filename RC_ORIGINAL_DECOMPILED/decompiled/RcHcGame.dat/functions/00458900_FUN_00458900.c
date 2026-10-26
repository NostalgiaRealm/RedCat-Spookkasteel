/*
 * FUN_00458900 at 00458900
 * undefined FUN_00458900(void)
 * Address ranges: 00458900-00458aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458900(void)

{
  float10 fVar1;
  float in_stack_00000010;
  float *in_stack_00000014;
  float in_stack_00000018;
  undefined4 in_stack_0000001c;
  float fVar2;
  float local_34;
  undefined1 local_30 [48];
  
  fVar2 = 0.0;
  local_34 = 0.0;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280(0);
  }
  if ((in_stack_00000010 < -1.55) && (-1.58 < in_stack_00000010)) {
    fVar1 = (float10)FUN_005b1630(*in_stack_00000014);
    if (fVar1 < (float10)in_stack_00000010) {
      in_stack_00000010 = in_stack_00000010 - 0.015;
    }
  }
  if (in_stack_00000010 < 0.0) {
LAB_004589d0:
    if ((0.0 <= *in_stack_00000014) && (-1.5707964 < in_stack_00000010)) {
      in_stack_00000010 = in_stack_00000010 + 1.5707964;
      fVar2 = 1.5707964;
      *in_stack_00000014 = *in_stack_00000014 + 1.5707964;
    }
    if (in_stack_00000010 < 0.0) {
      in_stack_00000010 = in_stack_00000010 + 6.2831855;
    }
  }
  else {
    if ((*in_stack_00000014 < 0.0) && (in_stack_00000010 < 1.5707964)) {
      in_stack_00000010 = in_stack_00000010 + 1.5707964;
      fVar2 = 1.5707964;
      *in_stack_00000014 = *in_stack_00000014 + 1.5707964;
    }
    if (in_stack_00000010 < 0.0) goto LAB_004589d0;
  }
  if (*in_stack_00000014 < 0.0) {
    *in_stack_00000014 = *in_stack_00000014 + 6.2831855;
  }
  FUN_005b5540(*in_stack_00000014);
  FUN_005b5540(in_stack_00000010);
  if (0.001 <= ABS(*in_stack_00000014 - in_stack_00000010)) {
    fVar1 = (float10)FUN_00409e30(in_stack_0000001c);
    in_stack_00000010 = (float)(fVar1 * (float10)in_stack_00000018);
    if (fVar1 * (float10)in_stack_00000018 <= (float10)1.0) goto LAB_00458aaf;
  }
  in_stack_00000010 = 1.0;
LAB_00458aaf:
  FUN_005b59f0(in_stack_00000010,local_30);
  FUN_005b5d80();
  FUN_005b5570(&local_34);
  fVar1 = (float10)FUN_005b1630(local_34 - fVar2);
  *in_stack_00000014 = (float)fVar1;
  return;
}

