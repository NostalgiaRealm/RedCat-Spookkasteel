/*
 * FUN_0040389c at 0040389c
 * undefined __register FUN_0040389c(void)
 * Address ranges: 0040389c-004038ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040389c(void)

{
  int *piVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_FS_OFFSET;
  ULONG_PTR in_stack_00000000;
  undefined4 *in_stack_00000030;
  
  piVar2 = FUN_00407904();
  piVar1 = (int *)*piVar2;
  *piVar2 = *piVar1;
  FUN_00403094((int *)piVar1[2]);
  *in_FS_OFFSET = *in_stack_00000030;
  in_stack_00000030[2] = 0x4038c9;
  FUN_00403504(in_stack_00000030[1],in_stack_00000000);
                    /* WARNING: Could not recover jumptable at 0x004038c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

