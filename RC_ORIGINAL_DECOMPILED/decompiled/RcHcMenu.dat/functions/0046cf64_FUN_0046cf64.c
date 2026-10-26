/*
 * FUN_0046cf64 at 0046cf64
 * undefined __register FUN_0046cf64(int param_1, int * param_2)
 * Address ranges: 0046cf64-0046cfaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046cf64(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46cf7a;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,1);
  puStack_18 = &LAB_0046cfab;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0x68))(param_2,piVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046cfb2;
  puStack_18 = (undefined1 *)0x46cfaa;
  FUN_00403094(piVar1);
  return;
}

