/*
 * FUN_004241b8 at 004241b8
 * undefined __register FUN_004241b8(void)
 * Address ranges: 004241b8-0042426f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004241b8(void)

{
  uint uVar1;
  float10 fVar2;
  float10 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  if ((in_stack_00000004 != (float10)0.0) &&
     (((float10)CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)) !=
       (float10)0.0 || (in_stack_00000004 <= (float10)0.0)))) {
    fVar2 = in_stack_00000004;
    FUN_00402b2c();
    if ((fVar2 != (float10)0.0) || (_DAT_00424274 < ABS(in_stack_00000004))) {
      log2(CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)));
      FUN_00402b14();
    }
    else {
      uVar1 = FUN_00402b54();
      FUN_00424138(uVar1);
    }
  }
  return;
}

