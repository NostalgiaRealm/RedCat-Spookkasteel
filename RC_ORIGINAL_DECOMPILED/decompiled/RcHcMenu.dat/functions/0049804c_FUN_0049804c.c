/*
 * FUN_0049804c at 0049804c
 * undefined __register FUN_0049804c(uint param_1, undefined * param_2)
 * Address ranges: 0049804c-004980b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049804c(uint param_1,undefined *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = (undefined1 *)0x498060;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_004980ce;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStackY_24 = (undefined1 *)0x49807f;
  puStack_14 = &stack0xfffffffc;
  local_10 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',local_c,0);
  puStackY_24 = &LAB_004980b1;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_004980dc(local_8,local_10);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x4980b0;
  FUN_00403094(local_10);
  return;
}

