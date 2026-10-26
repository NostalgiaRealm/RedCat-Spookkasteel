/*
 * FUN_004ec168 at 004ec168
 * undefined __register FUN_004ec168(int * param_1)
 * Address ranges: 004ec168-004ec1cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ec168(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  puStack_1c = &LAB_004ec1cd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  local_10 = FUN_004ea624((int *)&PTR_FUN_004ea51c,'\x01',(int)param_1,2);
  FUN_004eba98(local_8,(int *)&local_14);
  FUN_004877ac((int *)local_10[0xc],local_14);
  local_c = local_10;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004ec1d4;
  puStack_1c = (undefined1 *)0x4ec1cc;
  FUN_00403db0((int *)&local_14);
  return;
}

