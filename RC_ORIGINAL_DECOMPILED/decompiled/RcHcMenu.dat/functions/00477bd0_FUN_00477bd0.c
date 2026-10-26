/*
 * FUN_00477bd0 at 00477bd0
 * undefined __register FUN_00477bd0(int param_1)
 * Address ranges: 00477bd0-00477c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00477bd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iVar3;
  undefined4 *local_10;
  int local_c;
  undefined1 local_5;
  
  local_10 = (undefined4 *)0x0;
  iVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffd8;
  iVar1 = FUN_00477c98(param_1);
  while ((byte)(*(char *)(param_1 + 0x44) - 0xcU) < 2) {
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      FUN_00406a48((undefined4 *)PTR_PTR_005722ec,(int *)&local_10);
      FUN_00466d84(local_10,0);
    }
    local_5 = (&DAT_00570828)[*(byte *)(param_1 + 0x44)];
    FUN_004770d8(param_1);
    local_c = FUN_00477c98(param_1);
    iVar2 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',local_5,local_c,iVar1,
                         (VARIANTARG *)PTR_DAT_00572140);
    FUN_0047891c(param_1,iVar2);
    iVar3 = local_c;
    FUN_00478164(param_1,iVar2,iVar1,local_c);
    iVar1 = iVar2;
  }
  *in_FS_OFFSET = iVar3;
  FUN_00403db0((int *)&local_10);
  return;
}

