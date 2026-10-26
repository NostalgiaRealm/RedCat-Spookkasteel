/*
 * FUN_0041ead4 at 0041ead4
 * undefined __register FUN_0041ead4(undefined4 * param_1, uint * param_2)
 * Address ranges: 0041ead4-0041eb51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ead4(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  uint *local_c;
  uint *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_120 = &LAB_0041eb52;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iVar2 = param_1[2] + -1;
  uVar3 = iVar2 == 0;
  local_8 = param_2;
  if (-1 < iVar2) {
    do {
      piVar1 = (int *)FUN_00412384(param_1,iVar2);
      FUN_00402fe0(*piVar1,local_10c);
      FUN_00403fd4((int *)&local_c,local_10c);
      FUN_00404140(local_c,local_8);
      if ((bool)uVar3) break;
      iVar2 = iVar2 + -1;
      uVar3 = iVar2 == -1;
    } while (!(bool)uVar3);
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0041eb59;
  puStack_120 = (undefined1 *)0x41eb51;
  FUN_00403db0((int *)&local_c);
  return;
}

