/*
 * FUN_004fec40 at 004fec40
 * undefined __register FUN_004fec40(int * param_1, uint * param_2)
 * Address ranges: 004fec40-004fecae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fec40(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4fec54;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  bVar1 = true;
  puStack_14 = &LAB_004fecaf;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404140((uint *)local_8[0x86],local_c);
  if (!bVar1) {
    FUN_00403e04(local_8 + 0x86,local_c);
    if (*(char *)((int)local_8 + 0x215) != '\0') {
      (**(code **)(*local_8 + 0x74))();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fecb6;
  puStack_14 = (undefined1 *)0x4fecae;
  FUN_00403db0((int *)&local_c);
  return;
}

