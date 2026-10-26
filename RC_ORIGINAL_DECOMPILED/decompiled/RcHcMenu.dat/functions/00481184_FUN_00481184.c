/*
 * FUN_00481184 at 00481184
 * undefined __register FUN_00481184(int param_1, int * param_2)
 * Address ranges: 00481184-0048120f;00481229-0048126d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481184(int param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118 [67];
  int *local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118[0] = (undefined4 *)0x0;
  puStack_120 = &LAB_0048126e;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_128 = (undefined1 *)0x4811b1;
  local_c = param_2;
  local_8 = param_1;
  bVar2 = FUN_00480bd4(param_1);
  if ((bVar2) && ((*(byte *)(local_8 + 0x20) & 4) == 0)) {
    puStack_128 = (undefined1 *)0x4811c6;
    FUN_00481830(local_8);
    puStack_12c = &LAB_00481210;
    uStack_130 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_130;
    uVar1 = *(undefined4 *)(local_8 + 0x24);
    puStack_128 = &stack0xfffffffc;
    uVar3 = thunk_FUN_00479000(uVar1);
    FUN_0047fe48(uVar3);
    *in_FS_OFFSET = uVar1;
    FUN_00481854(local_8);
    return;
  }
  puStack_128 = (undefined1 *)0x481237;
  FUN_00403e04(local_c,*(undefined4 **)(local_8 + 0x50));
  puStack_128 = (undefined1 *)0x481247;
  FUN_0040dae0((undefined *)*local_c,(int *)local_118);
  puStack_128 = (undefined1 *)0x481255;
  FUN_00403e04(local_c,local_118[0]);
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_00481275;
  puStack_120 = (undefined1 *)0x48126d;
  FUN_00403db0((int *)local_118);
  return;
}

