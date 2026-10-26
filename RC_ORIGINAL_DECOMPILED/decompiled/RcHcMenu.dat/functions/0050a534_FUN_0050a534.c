/*
 * FUN_0050a534 at 0050a534
 * undefined __register FUN_0050a534(int param_1)
 * Address ranges: 0050a534-0050a587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050a534(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar3;
  float10 in_ST7;
  int local_18;
  
  FUN_0040b0d8();
  local_18 = 1;
  do {
    uVar1 = FUN_0040b0d8();
    fVar3 = in_ST7;
    iVar2 = FUN_0040b0b0(uVar1,extraout_EDX,extraout_ECX,
                         SUB84((double)((float10)local_18 + in_ST1),0),
                         (int)((ulonglong)(double)((float10)local_18 + in_ST1) >> 0x20));
    if (iVar2 == param_1) {
      FUN_0040b0d8();
      return;
    }
    local_18 = local_18 + 1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = fVar3;
  } while (local_18 != 8);
  return;
}

