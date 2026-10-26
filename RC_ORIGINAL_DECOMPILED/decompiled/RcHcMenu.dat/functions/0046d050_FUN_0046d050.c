/*
 * FUN_0046d050 at 0046d050
 * undefined __register FUN_0046d050(int param_1, int * param_2)
 * Address ranges: 0046d050-0046d098
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d050(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46d066;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,0);
  puStack_18 = &LAB_0046d099;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00414874(param_2,piVar1,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d0a0;
  puStack_18 = (undefined1 *)0x46d098;
  FUN_00403094(piVar1);
  return;
}

