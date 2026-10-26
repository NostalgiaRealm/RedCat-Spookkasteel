/*
 * FUN_0051c350 at 0051c350
 * undefined __register FUN_0051c350(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0051c350-0051c480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  
  DAT_00574754 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  DAT_00574758 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
  DAT_00574744 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  DAT_00574748 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_01);
  DAT_0057474c = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_02);
  DAT_00574750 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_03);
  FUN_00422254(DAT_00574754,1);
  FUN_00422254(DAT_00574758,1);
  FUN_00422254(DAT_00574744,1);
  FUN_00422254(DAT_00574748,1);
  FUN_00422254(DAT_0057474c,1);
  FUN_00422254(DAT_00574750,1);
  FUN_004218f8(DAT_00574754,DAT_005734dc,"NO_SORT_LIGHT");
  FUN_004218f8(DAT_00574758,DAT_005734dc,"NO_SORT_SHADOW");
  FUN_004218f8(DAT_00574744,DAT_005734dc,"ASC_LIGHT");
  FUN_004218f8(DAT_00574748,DAT_005734dc,"ASC_SHADOW");
  FUN_004218f8(DAT_0057474c,DAT_005734dc,"DESC_LIGHT");
  FUN_004218f8(DAT_00574750,DAT_005734dc,"DESC_SHADOW");
  return;
}

