/*
 * FUN_00403848 at 00403848
 * undefined4 __register FUN_00403848(void)
 * Address ranges: 00403848-00403898
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00403848(void)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000014;
  int in_stack_00000030;
  
  *(undefined4 *)(in_stack_00000030 + 4) = 0x403893;
  piVar3 = FUN_00407904();
  piVar2 = (int *)*piVar3;
  *piVar3 = *piVar2;
  piVar3 = (int *)piVar2[3];
  puVar1 = (uint *)(piVar3 + 1);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (*piVar3 != 0xeedfade) {
    FUN_00403094((int *)piVar2[2]);
    FUN_00403444();
  }
  *in_stack_00000014 = *(undefined4 *)*in_FS_OFFSET;
  return 1;
}

