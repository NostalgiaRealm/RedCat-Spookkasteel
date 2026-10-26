/*
 * FUN_0046d0fc at 0046d0fc
 * undefined __register FUN_0046d0fc(int param_1, int param_2)
 * Address ranges: 0046d0fc-0046d14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d0fc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46d112;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,1);
  puStack_18 = &LAB_0046d14c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_00404030(param_2);
  FUN_0041483c(piVar1,param_2,iVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d153;
  puStack_18 = (undefined1 *)0x46d14b;
  FUN_00403094(piVar1);
  return;
}

