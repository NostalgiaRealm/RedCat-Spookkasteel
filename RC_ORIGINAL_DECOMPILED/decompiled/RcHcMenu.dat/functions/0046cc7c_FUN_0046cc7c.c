/*
 * FUN_0046cc7c at 0046cc7c
 * undefined __register FUN_0046cc7c(int param_1)
 * Address ranges: 0046cc7c-0046ccc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046cc7c(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46cc91;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,0);
  puStack_18 = &LAB_0046ccc3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004147cc(piVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046ccca;
  puStack_18 = (undefined1 *)0x46ccc2;
  FUN_00403094(piVar1);
  return;
}

