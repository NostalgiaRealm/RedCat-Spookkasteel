/*
 * FUN_0040be10 at 0040be10
 * undefined __register FUN_0040be10(int param_1, int * param_2, undefined * param_3)
 * Address ranges: 0040be10-0040be88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040be10(int param_1,int *param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_20 = &LAB_0040be89;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != (undefined *)0x0) {
    FUN_0040bd58(param_1,param_2);
    ppuVar3 = &local_c;
    uVar1 = FUN_00404030((int)param_3);
    FUN_00404238(local_8,*param_2,uVar1,(int *)ppuVar3);
    iVar2 = FUN_00409870(param_3,local_c);
    if (iVar2 == 0) {
      iVar2 = FUN_00404030((int)param_3);
      *param_2 = *param_2 + iVar2;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040be90;
  puStack_20 = (undefined1 *)0x40be88;
  FUN_00403db0((int *)&local_c);
  return;
}

