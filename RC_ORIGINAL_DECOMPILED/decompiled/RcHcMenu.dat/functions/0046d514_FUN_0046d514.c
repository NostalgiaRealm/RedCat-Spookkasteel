/*
 * FUN_0046d514 at 0046d514
 * undefined __register FUN_0046d514(int param_1, char param_2)
 * Address ranges: 0046d514-0046d59e;0046d5a6-0046d5e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d514(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(char *)(param_1 + 0x36) != param_2) {
    iVar3 = *(int *)(param_1 + 0x28);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x60) != 0)) {
      iVar3 = *(int *)(iVar3 + 0x60);
      puStack_1c = (undefined1 *)0x46d549;
      FUN_0046735c(iVar3);
      puStack_20 = &LAB_0046d59f;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      *(char *)(param_1 + 0x36) = param_2;
      puStack_1c = &stack0xfffffffc;
      iVar1 = FUN_004687b0(*(int *)(param_1 + 0xd0));
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          iVar2 = FUN_00468730(*(int *)(param_1 + 0xd0),iVar4);
          *(char *)(iVar2 + 0x36) = param_2;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *in_FS_OFFSET = uStack_24;
      puStack_1c = (undefined1 *)0x46d5df;
      puStack_20 = (undefined1 *)0x46d59e;
      FUN_00467394(iVar3);
      return;
    }
    puStack_1c = (undefined1 *)0x46d5ad;
    FUN_00468d14(param_1);
    *(char *)(param_1 + 0x36) = param_2;
    puStack_1c = (undefined1 *)0x46d5be;
    iVar3 = FUN_004687b0(*(int *)(param_1 + 0xd0));
    if (-1 < iVar3 + -1) {
      iVar1 = 0;
      do {
        puStack_1c = (undefined1 *)0x46d5d5;
        iVar4 = FUN_00468730(*(int *)(param_1 + 0xd0),iVar1);
        *(char *)(iVar4 + 0x36) = param_2;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

